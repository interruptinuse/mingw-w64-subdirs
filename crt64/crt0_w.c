#include <windows.h>

extern void __main(void);

int WINAPI wWinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPWSTR lpCmdLine,int nShowCmd);

int wmain (int flags, wchar_t **cmdline, wchar_t **inst)
{
#ifdef __GNUC__
  /* C++ initialization.
     gcc inserts this call automatically for a function called main , but not for wmain.  */
  __main();
#endif
  return (int) wWinMain ((HINSTANCE) inst, NULL, (LPWSTR) cmdline,(DWORD) flags);
}
