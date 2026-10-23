/* registerProfile_kuki_286290
 * address: 0x60286290   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_kuki_286290())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C8F114 = 0;
  dword_60C8F118 = 0;
  dword_60C8F11C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2E94;
  Profile__ctor(&stru_60C8F120, Actor_kuki_build, 0x118u, &v1, &stru_60AFDE90, 18);
  dword_60C8F13C = CurrentStateID + 1;
  dword_60C8F138 = (int)&off_60BDE044;
  dword_60C8F140 = (int)sub_60285818;
  dword_60C8F144 = 0;
  dword_60C8F148 = (int)sub_60285824;
  dword_60C8F14C = 0;
  dword_60C8F150 = (int)nullsub_3149;
  dword_60C8F154 = 0;
  CurrentStateID += 2;
  dword_60C8F15C = CurrentStateID;
  dword_60C8F158 = (int)&off_60BDE044;
  dword_60C8F160 = (int)sub_602859A8;
  dword_60C8F164 = 0;
  dword_60C8F168 = (int)nullsub_3150;
  dword_60C8F16C = 0;
  dword_60C8F170 = (int)nullsub_3151;
  dword_60C8F174 = 0;
  return nullsub_3151;
}
