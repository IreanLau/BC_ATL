// Math.h : Declaration of the CMath

#ifndef __MATH_H_
#define __MATH_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMath
class ATL_NO_VTABLE CMath : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMath, &CLSID_Math>,
	public IMath
{
public:
	CMath()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MATH)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMath)
	COM_INTERFACE_ENTRY(IMath)
END_COM_MAP()

// IMath
public:
	STDMETHOD(Subtract)(/*[in]*/long op1,/*[in]*/long op2,/*[out,retval]*/long*pVal);
	STDMETHOD(Multiply)(/*[in]*/long op1,/*[in]*/long op2,/*[out,retval]*/long*pVal);
	STDMETHOD(Divide)(/*[in]*/long op1,/*[in]*/long op2,/*[out,retval]*/long*pVal);
	STDMETHOD(Add)(/*[in]*/long op1,/*[in]*/long op2,/*[out,retval]*/long*pVal);
};

#endif //__MATH_H_
