

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Apr 12 13:59:46 2014
 */
/* Compiler settings for Kamera.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __Kamera_h_h__
#define __Kamera_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDetektorDCC_FWD_DEFINED__
#define __IDetektorDCC_FWD_DEFINED__
typedef interface IDetektorDCC IDetektorDCC;
#endif 	/* __IDetektorDCC_FWD_DEFINED__ */


#ifndef __DetektorDCC_FWD_DEFINED__
#define __DetektorDCC_FWD_DEFINED__

#ifdef __cplusplus
typedef class DetektorDCC DetektorDCC;
#else
typedef struct DetektorDCC DetektorDCC;
#endif /* __cplusplus */

#endif 	/* __DetektorDCC_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DetektorDCC_LIBRARY_DEFINED__
#define __DetektorDCC_LIBRARY_DEFINED__

/* library DetektorDCC */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DetektorDCC;

#ifndef __IDetektorDCC_DISPINTERFACE_DEFINED__
#define __IDetektorDCC_DISPINTERFACE_DEFINED__

/* dispinterface IDetektorDCC */
/* [uuid] */ 


EXTERN_C const IID DIID_IDetektorDCC;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7B060F60-2EC4-4668-9BF3-9539D31B6E7C")
    IDetektorDCC : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IDetektorDCCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDetektorDCC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDetektorDCC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDetektorDCC * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDetektorDCC * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDetektorDCC * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDetektorDCC * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDetektorDCC * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IDetektorDCCVtbl;

    interface IDetektorDCC
    {
        CONST_VTBL struct IDetektorDCCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDetektorDCC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDetektorDCC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDetektorDCC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDetektorDCC_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDetektorDCC_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDetektorDCC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDetektorDCC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IDetektorDCC_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DetektorDCC;

#ifdef __cplusplus

class DECLSPEC_UUID("7A5A4DA4-F051-4981-B99D-CC06B3FFEFDE")
DetektorDCC;
#endif
#endif /* __DetektorDCC_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

