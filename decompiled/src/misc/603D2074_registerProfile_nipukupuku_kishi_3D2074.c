/* registerProfile_nipukupuku_kishi_3D2074
 * address: 0x603D2074   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_nipukupuku_kishi_3D2074())()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C98D18 = 0;
  dword_60C98D1C = 0;
  dword_60C98D20 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC5F76;
  Profile__ctor(&stru_60C98D24, Actor_nipukupuku_kishi_build, 0x21Eu, v1, &stru_60B01170, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC5F91;
  Profile__ctor(&stru_60C98D3C, Actor_nipukupuku_kishi_build, 0x21Fu, v1, &stru_60B01170, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC5FB5;
  Profile__ctor(&stru_60C98D54, Actor_nipukupuku_kishi_build, 0x220u, v1, &stru_60B01170, 0);
  dword_60C98D70 = CurrentStateID + 1;
  dword_60C98D6C = (int)&off_60BF7C38;
  dword_60C98D74 = (int)nullsub_3582;
  dword_60C98D78 = 0;
  dword_60C98D7C = (int)sub_603D1388;
  dword_60C98D80 = 0;
  dword_60C98D84 = (int)nullsub_3583;
  dword_60C98D88 = 0;
  CurrentStateID += 2;
  dword_60C98D90 = CurrentStateID;
  dword_60C98D8C = (int)&off_60BF7C38;
  dword_60C98D94 = (int)nullsub_3584;
  dword_60C98D98 = 0;
  dword_60C98D9C = (int)sub_603D1534;
  dword_60C98DA0 = 0;
  dword_60C98DA4 = (int)nullsub_3585;
  dword_60C98DA8 = 0;
  return nullsub_3585;
}
