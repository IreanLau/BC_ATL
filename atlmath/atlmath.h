/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jan 04 16:12:39 2016
 */
/* Compiler settings for C:\Users\lenovo\Desktop\atlmath\atlmath.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __atlmath_h__
#define __atlmath_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IMath_FWD_DEFINED__
#define __IMath_FWD_DEFINED__
typedef interface IMath IMath;
#endif 	/* __IMath_FWD_DEFINED__ */


#ifndef __Math_FWD_DEFINED__
#define __Math_FWD_DEFINED__

#ifdef __cplusplus
typedef class Math Math;
#else
typedef struct Math Math;
#endif /* __cplusplus */

#endif 	/* __Math_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IMath_INTERFACE_DEFINED__
#define __IMath_INTERFACE_DEFINED__

/* interface IMath */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3DE4890-826D-4525-98CF-696AA558D526")
    IMath : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Divide( 
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Multiply( 
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Subtract( 
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMath __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMath __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMath __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IMath __RPC_FAR * This,
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Divide )( 
            IMath __RPC_FAR * This,
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Multiply )( 
            IMath __RPC_FAR * This,
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Subtract )( 
            IMath __RPC_FAR * This,
            /* [in] */ long op1,
            /* [in] */ long op2,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        END_INTERFACE
    } IMathVtbl;

    interface IMath
    {
        CONST_VTBL struct IMathVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMath_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMath_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMath_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMath_Add(This,op1,op2,pVal)	\
    (This)->lpVtbl -> Add(This,op1,op2,pVal)

#define IMath_Divide(This,op1,op2,pVal)	\
    (This)->lpVtbl -> Divide(This,op1,op2,pVal)

#define IMath_Multiply(This,op1,op2,pVal)	\
    (This)->lpVtbl -> Multiply(This,op1,op2,pVal)

#define IMath_Subtract(This,op1,op2,pVal)	\
    (This)->lpVtbl -> Subtract(This,op1,op2,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMath_Add_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long op1,
    /* [in] */ long op2,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IMath_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMath_Divide_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long op1,
    /* [in] */ long op2,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IMath_Divide_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMath_Multiply_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long op1,
    /* [in] */ long op2,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IMath_Multiply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMath_Subtract_Proxy( 
    IMath __RPC_FAR * This,
    /* [in] */ long op1,
    /* [in] */ long op2,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IMath_Subtract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMath_INTERFACE_DEFINED__ */



#ifndef __ATLMATHLib_LIBRARY_DEFINED__
#define __ATLMATHLib_LIBRARY_DEFINED__

/* library ATLMATHLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLMATHLib;

EXTERN_C const CLSID CLSID_Math;

#ifdef __cplusplus

class DECLSPEC_UUID("1038F30C-3BA9-44F1-8A31-A0A3B1CB3202")
Math;
#endif
#endif /* __ATLMATHLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
