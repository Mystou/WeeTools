#ifndef _WDG_TRANSLATE_CLIENT_INTO_ENGLISH_H
#define _WDG_TRANSLATE_CLIENT_INTO_ENGLISH_H

#define _CRTDBG_MAP_ALLOC

#include "..\..\..\Common\WeeDiffGenPlugin.h"
#include <tchar.h>
#include <string>

using namespace WeeDiffGenPlugin;

class WDGPlugin : public IWDGPlugin
{
public:
	WDGPlugin(LPVOID lpData) : IWDGPlugin(lpData) {}

	virtual void Release();
	virtual void Free(LPVOID memory);
	virtual LPWDGPLUGININFO GetPluginInfo();
	virtual INT32 Enabled();
	virtual INT32 Disabled();
	virtual LPCTSTR GetInputValue();
	virtual DiffData *GeneratePatch();
	virtual DiffData *GetDiffData();

protected:
	static void __stdcall CBAddDiffData(WeeDiffGenPlugin::LPDIFFDATA lpDiffData);

protected:
	DiffData m_diffdata;
};

#endif // _WDG_TRANSLATE_CLIENT_INTO_ENGLISH_H