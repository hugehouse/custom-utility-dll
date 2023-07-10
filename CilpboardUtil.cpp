#include "pch.h"

extern "C" __declspec(dllexport) UINT checkImageFormats(UINT format)
{
	OpenClipboard(NULL);
	UINT result = EnumClipboardFormats(format);
	CloseClipboard();

	return result;
}