// sdk.dll を読み込むだけで何も呼ばずに終了する。
#include <windows.h>
#include <cstdio>
#include <cwchar>
#include "zoom_sdk.h"
int wmain(int argc, wchar_t**) {
  if (argc > 100) std::wprintf(L"%ls\n", ZOOM_SDK_NAMESPACE::GetSDKVersion());
  std::printf("load_only: returning 2\n");
  std::fflush(stdout);
  return 2;
}
