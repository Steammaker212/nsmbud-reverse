/* registerProfile_iron_RDashspawn_range_narrow_70B0B0
 * address: 0x6070B0B0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_iron_RDashspawn_range_narrow_70B0B0()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CBC948 = 0;
  dword_60CBC94C = 0;
  dword_60CBC950 = 0;
  dword_60CBC958 = ++CurrentStateID;
  dword_60CBC954 = (int)&off_60C21260;
  dword_60CBC95C = (int)sub_607086D0;
  dword_60CBC960 = 0;
  dword_60CBC964 = (int)nullsub_5347;
  dword_60CBC968 = 0;
  dword_60CBC96C = (int)nullsub_5348;
  dword_60CBC970 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD87E1;
  Profile__ctor(&stru_60CBC974, Actor_iron_RDashspawn_range_narrow_build, 0x144u, v0, &stru_60B09B68, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD87E8;
  Profile__ctor(&stru_60CBC98C, Actor_iron_RDashspawn_range_narrow_build, 0x145u, v0, &stru_60B09B68, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD87EF;
  Profile__ctor(&stru_60CBC9A4, Actor_iron_RDashspawn_range_narrow_build, 0x146u, v0, &stru_60B09B68, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD87FD;
  Profile__ctor(&stru_60CBC9BC, Actor_iron_RDashspawn_range_narrow_build, 0x147u, v0, &stru_60B09B8C, 2);
}
