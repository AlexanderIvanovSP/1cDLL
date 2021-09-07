// dllmain.h: объявление класса модуля.

class CRandomDLLModule : public ATL::CAtlDllModuleT< CRandomDLLModule >
{
public :
	DECLARE_LIBID(LIBID_RandomDLLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_RANDOMDLL, "{42bb9c55-ac32-46f3-98b7-bc0cd5430399}")
};

extern class CRandomDLLModule _AtlModule;
