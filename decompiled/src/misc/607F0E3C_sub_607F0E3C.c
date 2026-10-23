/* sub_607F0E3C
 * address: 0x607F0E3C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F0E3C(int a1, int a2, float *a3)
{
  nn__oe *ExpectedVolumeBalance; // r0
  char v5; // r12
  int v6; // r0
  nn__web__ShowWebPageArg *v7; // r1
  nn__web *v8; // r0
  const nn__web__ShowWebPageArg *v9; // r2
  nn__oe *v10; // r0
  int v12; // [sp+0h] [bp-3048h] BYREF
  _DWORD uidOut[4]; // [sp+1010h] [bp-2038h] BYREF
  _BYTE v14[8160]; // [sp+1020h] [bp-2028h] BYREF
  float v15; // [sp+3020h] [bp-28h] BYREF
  float v16; // [sp+3024h] [bp-24h] BYREF

  v15 = 0.0;
  v16 = 0.0;
  ExpectedVolumeBalance = (nn__oe *)nn__oe__GetExpectedVolumeBalance((nn__oe *)&v16, &v15, a3);
  nn__oe__SetExpectedVolumeBalance(ExpectedVolumeBalance, 1.0, v15);
  if ( ((unsigned int)&dword_60CC5EC0 & ~(1618939536 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5EC0) )
  {
    stru_60CC5EC8.vtable = &sead__SafeStringBase__vtable;
    stru_60CC5EC8.cstr = "https://www-adala-%-hac.cdn.nintendo.net";
    _cxa_guard_release(&dword_60CC5EC0);
  }
  if ( ((unsigned int)&dword_60CC5EC4 & ~(1618939628 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5EC4) )
  {
    (*((void (__fastcall **)(sead__SafeString *))stru_60CC5EC8.vtable + 3))(&stru_60CC5EC8);
    sub_6016ACE0(&dword_60CC5ED0, "%s/close", stru_60CC5EC8.cstr);
    _cxa_guard_release(&dword_60CC5EC4);
  }
  (*((void (__fastcall **)(sead__SafeString *))stru_60CC5EC8.vtable + 3))(&stru_60CC5EC8);
  v6 = nn__web__ShowWebPageArg__ctor((nn__web__ShowWebPageArg *)v14, stru_60CC5EC8.cstr);
  nn__web__ShowWebPageArg__SetBootDisplayKind(v6, 2);
  nn__web__ShowWebPageArg__SetJsExtensionEnabled((nn__web__ShowWebPageArg *)v14, 1);
  nn__web__ShowWebPageArg__SetLeftStickMode(v14, 1);
  nn__web__ShowWebPageArg__SetMediaPlayerAutoCloseEnabled((nn__web__ShowWebPageArg *)v14, 1);
  nn__web__ShowWebPageArg__SetPageCacheEnabled((nn__web__ShowWebPageArg *)v14, 1);
  nn__web__ShowWebPageArg__SetPointerEnabled((nn__web__ShowWebPageArg *)v14, 0);
  nn__web__ShowWebPageArg__SetTouchEnabledOnContents((nn__web__ShowWebPageArg *)v14, 1);
  memset(uidOut, 0, sizeof(uidOut));
  UserInfo_getUid(UserInfo_istance, uidOut);
  nn__web__ShowWebPageArg__SetUid(v14, uidOut);
  (*(void (__fastcall **)(int *))(dword_60CC5ED0 + 12))(&dword_60CC5ED0);
  nn__web__ShowWebPageArg__SetCallbackUrl((nn__web__ShowWebPageArg *)v14, (const char *)dword_60CC5ED4);
  nn__web__SetEcClientCertEnabled((nn__web *)v14, v7);
  v8 = (nn__web *)nn__web__WebPageReturnValue__ctor((nn__web__WebPageReturnValue *)&v12);
  v10 = (nn__oe *)nn__web__ShowWebPage(v8, (nn__web__WebPageReturnValue *)v14, v9);
  nn__oe__SetExpectedVolumeBalance(v10, v16, v15);
  return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60CC5E9C);
}
