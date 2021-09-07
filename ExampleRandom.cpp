// ExampleRandom.cpp: реализация CExampleRandom

#include "pch.h"
#include "ExampleRandom.h"


// CExampleRandom



STDMETHODIMP CExampleRandom::GetRandomValue(LONG* in_param, LONG* out_param)
{
    // TODO: Добавьте сюда код реализации
    *out_param = (LONG)(*in_param + 10);
    return S_OK;
}
