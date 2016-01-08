#include"iostream"
#include"atlmath.h"
#include"atlmath_i.c"
using namespace std;
int main()
{
	IMath *pM=NULL;
	CLSID clsid;
	HRESULT hr;

	//初始化
	cout<<"Init COM"<<endl;
	if(FAILED(CoInitialize(NULL)))
	{
		cout<<"Unable Init COM"<<endl;
		return -1;
	}

	//GUID转化CLSID
	hr =CLSIDFromProgID(L"atlmath.Math.1",&clsid);
	if(FAILED(hr))
	{
		cout.setf(ios::hex,ios::basefield);
		cout<<"Unable to get CLSID from ProgID.HR = "<<hr<<endl;
		return -1;
	}

	//进程内组建
	hr=CoCreateInstance(clsid,NULL,CLSCTX_INPROC_SERVER,IID_IMath,(LPVOID*)&pM);
	if(FAILED(hr))
	{
		cout.setf(ios::hex,ios::basefield);
		cout<<"Failed to CoCreateInstance"<<hr<<endl;
		return -1;
	}

	long nSum;
	hr =pM->Add(3,2,&nSum);
	cout<<"3+2="<<nSum<<endl;

	long nSub;
	hr =pM->Subtract(9,3,&nSub);
	cout<<"9-3="<<nSub<<endl;

	long nMul;
	hr =pM->Multiply(9,3,&nMul);
	cout<<"9*3="<<nMul<<endl;

	long nDiv;
	hr =pM->Divide(8,4,&nDiv);
	cout<<"8/4="<<nDiv<<endl;
	//释放COM
	cout<<"Release COM"<<endl;
	CoUninitialize();
	return 0;
}