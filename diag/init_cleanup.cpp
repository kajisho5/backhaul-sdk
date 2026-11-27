// InitSDK と CleanUPSDK を呼んでから終了する。
#include <windows.h>
#include <cstdio>
#include "zoom_sdk.h"
int wmain() {
  ZOOM_SDK_NAMESPACE::InitParam init;
  init.strWebDomain = L"https://zoom.us";
  const auto a = ZOOM_SDK_NAMESPACE::InitSDK(init);
  std::printf("InitSDK: %d\n", static_cast<int>(a));
  const auto b = ZOOM_SDK_NAMESPACE::CleanUPSDK();
  std::printf("CleanUPSDK: %d\ninit_cleanup: returning 2\n", static_cast<int>(b));
  std::fflush(stdout);
  return 2;
}
