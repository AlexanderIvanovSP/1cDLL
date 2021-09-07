

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for RandomDLL.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __RandomDLL_i_h__
#define __RandomDLL_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IExampleRandom_FWD_DEFINED__
#define __IExampleRandom_FWD_DEFINED__
typedef interface IExampleRandom IExampleRandom;

#endif 	/* __IExampleRandom_FWD_DEFINED__ */


#ifndef __ExampleRandom_FWD_DEFINED__
#define __ExampleRandom_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExampleRandom ExampleRandom;
#else
typedef struct ExampleRandom ExampleRandom;
#endif /* __cplusplus */

#endif 	/* __ExampleRandom_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IExampleRandom_INTERFACE_DEFINED__
#define __IExampleRandom_INTERFACE_DEFINED__

/* interface IExampleRandom */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IExampleRandom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f928a3b0-0d9a-4951-883b-c40fc7e98636")
    IExampleRandom : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRandomValue( 
            /* [in] */ LONG *in_param,
            /* [retval][out] */ LONG *out_param) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExampleRandomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExampleRandom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExampleRandom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExampleRandom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExampleRandom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExampleRandom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExampleRandom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExampleRandom * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRandomValue )( 
            IExampleRandom * This,
            /* [in] */ LONG *in_param,
            /* [retval][out] */ LONG *out_param);
        
        END_INTERFACE
    } IExampleRandomVtbl;

    interface IExampleRandom
    {
        CONST_VTBL struct IExampleRandomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExampleRandom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExampleRandom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExampleRandom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExampleRandom_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExampleRandom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExampleRandom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExampleRandom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExampleRandom_GetRandomValue(This,in_param,out_param)	\
    ( (This)->lpVtbl -> GetRandomValue(This,in_param,out_param) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExampleRandom_INTERFACE_DEFINED__ */



#ifndef __RandomDLLLib_LIBRARY_DEFINED__
#define __RandomDLLLib_LIBRARY_DEFINED__

/* library RandomDLLLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_RandomDLLLib;

EXTERN_C const CLSID CLSID_ExampleRandom;

#ifdef __cplusplus

class DECLSPEC_UUID("8a95b911-c9c9-40b8-82e4-30f240c77559")
ExampleRandom;
#endif
#endif /* __RandomDLLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


