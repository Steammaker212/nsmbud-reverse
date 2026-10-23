/* registerProfile_parashutokoin_kishi_6EF160
 * address: 0x606EF160   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_parashutokoin_kishi_6EF160())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD839B;
  Profile__ctor(&stru_60CBC124, Actor_parashutokoin_kishi_build, 0x15u, &v1, &stru_60B092EC, 0);
  dword_60CBC140 = CurrentStateID + 1;
  dword_60CBC13C = (int)&off_60C1FFDC;
  dword_60CBC144 = (int)nullsub_5307;
  dword_60CBC148 = 0;
  dword_60CBC14C = (int)nullsub_5308;
  dword_60CBC150 = 0;
  dword_60CBC154 = (int)nullsub_5309;
  dword_60CBC158 = 0;
  unk_60CBC15C = &off_60C1FFDC;
  unk_60CBC160 = CurrentStateID + 2;
  dword_60CBC164 = (int)sub_606EE8FC;
  dword_60CBC168 = 0;
  dword_60CBC16C = (int)sub_606EE960;
  dword_60CBC170 = 0;
  dword_60CBC174 = (int)nullsub_5310;
  dword_60CBC178 = 0;
  CurrentStateID += 3;
  dword_60CBC180 = CurrentStateID;
  dword_60CBC17C = (int)&off_60C1FFDC;
  dword_60CBC184 = (int)sub_606EEB44;
  dword_60CBC188 = 0;
  dword_60CBC18C = (int)sub_606EEB54;
  dword_60CBC190 = 0;
  dword_60CBC194 = (int)nullsub_5311;
  dword_60CBC198 = 0;
  return nullsub_5311;
}
