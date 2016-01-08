#ifndef _INTERFACE_H
#define _INTERFACE_H

#include <Unknwn.h>

extern "C" const IID IID_MATH;

class IMathInterface:public IUnknown
{
public:
	virtual void __stdcall add(long n1,long n2,long *p)=0;
	virtual void __stdcall add(double n1,double n2,double *p)=0;
	virtual void __stdcall del(long n1,long n2,long *p)=0;
	virtual void __stdcall del(double n1,double n2,double *p)=0;
	virtual void __stdcall mul(long n1,long n2,long *p)=0;
	virtual void __stdcall mul(double n1,double n2,double *p)=0;
	virtual void __stdcall div(double n1,double n2,double *p)=0;
};

#endif