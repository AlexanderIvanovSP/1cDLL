// ExampleRandom.h: объявление CExampleRandom

#pragma once
#include "resource.h"       // основные символы



#include "RandomDLL_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CExampleRandom

class ATL_NO_VTABLE CExampleRandom :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CExampleRandom, &CLSID_ExampleRandom>,
	public IDispatchImpl<IExampleRandom, &IID_IExampleRandom, &LIBID_RandomDLLLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CExampleRandom()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CExampleRandom)
	COM_INTERFACE_ENTRY(IExampleRandom)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(GetRandomValue)(LONG* in_param, LONG* out_param);
};

OBJECT_ENTRY_AUTO(__uuidof(ExampleRandom), CExampleRandom)
