// calcDlg.h : header file
//

#if !defined(AFX_CALCDLG_H__D4254005_EE9E_49F8_B09F_DB05DA9FA45E__INCLUDED_)
#define AFX_CALCDLG_H__D4254005_EE9E_49F8_B09F_DB05DA9FA45E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog

class CCalcDlg : public CDialog
{
// Construction
public:
	CCalcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCalcDlg)
	enum { IDD = IDD_CALC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCalcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCalc();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCDLG_H__D4254005_EE9E_49F8_B09F_DB05DA9FA45E__INCLUDED_)
