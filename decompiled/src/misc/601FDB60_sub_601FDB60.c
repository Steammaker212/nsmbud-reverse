/* sub_601FDB60
 * address: 0x601FDB60   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FDB60(int a1)
{
  int v2; // r5
  int v3; // r7
  ActorBuildInfo v5; // [sp+0h] [bp-48h] BYREF

  nn__os__GetSystemTick((nn__os *)&v5);
  sub_60023F4C();
  sub_60238B6C(dword_60C8D9DC);
  sub_604269A8(dword_60C9BBD4, 0);
  sub_600074EC(0);
  sub_60007B5C(ActorMgr__instance, 0);
  sub_60819D20(dword_60CC6BF4);
  LoadProfileArchives(2, *(_DWORD **)(dword_60C88AC0 + 1720));
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(dword_60C88AC0 + 1720) + 20))(FIELD_U32(dword_60C88AC0, 1720));
  sub_6019ED68(0);
  sub_601994E8(0);
  sub_6017B818(0);
  sub_60177A54(0);
  sub_604973E4(0);
  v2 = 8;
  sub_60498FAC(dword_60CA059C, 8, 9);
  sub_601A1890(0);
  sub_601A299C(dword_60C89E18);
  sub_601E299C();
  sub_60172B9C(0);
  sub_6022A9FC(0);
  v3 = FIELD_U32(dword_60CC6D78, 536);
  v5.settings1 = (int)&sead__SafeStringBase__vtable;
  v5.settings2 = (int)"W8B1";
  if ( !sub_6022C144(dword_60C8D864, &v5) )
  {
    v5.settings1 = (int)&sead__SafeStringBase__vtable;
    v5.settings2 = (int)"W8B0";
    v2 = 7;
    if ( !sub_6022C144(dword_60C8D864, &v5) )
    {
      v5.settings1 = (int)&sead__SafeStringBase__vtable;
      v5.settings2 = (int)"W801";
      v2 = 6;
      if ( !sub_6022C144(dword_60C8D864, &v5) )
      {
        if ( v3 == 3 )
        {
          v2 = 4;
        }
        else if ( v3 == 2 )
        {
          v2 = 3;
        }
        else
        {
          v2 = 0;
          if ( v3 == 1 )
            v2 = 2;
        }
      }
    }
  }
  FIELD_U32(dword_60CC6D78, 124) = v2;
  sub_6019EEE8((_DWORD *)dword_60C89E00);
  sub_601A3C64(dword_60C89E18);
  FIELD_U8(dword_60C89E18, 2840) = 1;
  sub_6022ADB4(dword_60C8D864);
  sub_601903B0(0);
  sub_60190644(dword_60C8996C);
  sub_601E5344(0);
  sub_601E5468(dword_60C8B144);
  sub_60177104(0);
  sub_601A450C(dword_60C89E18);
  sub_601CF1C0(0);
  sub_601CF2A4((_DWORD *)dword_60C8AEF0);
  sub_6021DAF8(0);
  sub_6021DBC8(dword_60C8D4EC);
  sub_601A044C(dword_60C89E00);
  sub_60170AB4((_DWORD *)dword_60C88BC8);
  memset(&v5, 0, sizeof(v5));
  v5.profile = Profile__get(0x35Au);
  memset(&v5.position, 0, sizeof(v5.position));
  v5.field_20 = 0;
  FIELD_U32(a1, 3192) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v5, 0) + 2);
  sub_602196D8(0);
  sub_60219858(dword_60C8D408);
  sub_601E73A4(dword_60C8B144);
  sub_608EF6A8(a1);
  sub_601FDF48(a1);
  return sub_600240A4();
}
