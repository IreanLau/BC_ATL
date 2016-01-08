// calcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"
#include "interface.h"
#include"atlmath.h"
#include"atlmath_i.c"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog

CCalcDlg::CCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCalcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalcDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalcDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalcDlg, CDialog)
	//{{AFX_MSG_MAP(CCalcDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnCalc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg message handlers
IMath* init();
BOOL CCalcDlg::OnInitDialog()
{
				
	IMath* Imath=init();
	if(Imath==NULL)
		MessageBox("COM INIT ERROR");
	else
		MessageBox("组件初始化成功!");
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalcDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);

	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

#include<queue>
using namespace std;
IMath * pM;
int calcBystr(CString& str,IMath*& imath)
{
	queue<long> s1;
	queue<char> s2;
	int num=0;
	for(int i=0;i<str.GetLength();i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			num*=10;
			num+=str[i]-'0';
		}
		else if(str[i] =='+' ||str[i] =='-' ||str[i] =='*' ||str[i] =='/')
		{
			s1.push(num);
			num=0;
			s2.push(str[i]);
		}
	}
	s1.push(num);
	int res=0;
	while(!s2.empty())
	{
		char c=s2.front();
		long tmp1=s1.front();
		s1.pop();
		s2.pop();
		if(c=='+' || c=='-')
		{
			while(!s2.empty()&&(s2.front()=='*'||s2.front()=='/'))
			{
				int tmp3=s1.front();
				s1.pop();
				if(s2.front()=='*')
					imath->Multiply(s1.front(),tmp3,&s1.front());
				else
					imath->Divide(s1.front(),tmp3,&s1.front());
				s2.pop();
			}
			if(c=='+')
				imath->Add(s1.front(),tmp1,&s1.front());
			else
				imath->Subtract(s1.front(),tmp1,&s1.front());
		}
		else
		{
			if(c=='*')
				imath->Multiply(s1.front(),tmp1,&s1.front());
			else
				imath->Divide(s1.front(),tmp1,&s1.front());	
		}	
	}
	return s1.front();
}
extern "C" const IID IID_MATH=
{
	0x18eb6752, 0x92de, 0x4653,
	{ 0xad, 0xeb, 0x2a, 0xc6, 0xd, 0x12, 0x8b, 0xde }

};
 IMath* init()
{
	HRESULT hResult=0;
	if(CoInitialize(NULL)!=S_OK)
	{
		return NULL;
	}
	GUID MathCLSID;
	hResult=::CLSIDFromProgID(L"atlmath.Math.1",&MathCLSID);
	if(hResult!=S_OK)
	{
		return NULL;
	}

	hResult=CoCreateInstance(MathCLSID,NULL,CLSCTX_INPROC_SERVER,IID_IMath,(LPVOID*)&pM);
	if(hResult!=S_OK)
	{
		return NULL;
	}
	return pM;
}

void CCalcDlg::OnCalc() 
{
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	int re=calcBystr(str,pM);
	str.Format("%d",re);
	GetDlgItem(IDC_EDIT2)->SetWindowText(str);	
}
