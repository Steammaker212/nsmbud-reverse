/* registerProfile_jugemu_maruchipureifor_306498
 * address: 0x60306498   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_jugemu_maruchipureifor_306498()
{
  int v0; // r3
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C92E34 = 0;
  dword_60C92E38 = 0;
  dword_60C92E3C = 0;
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC4343;
  Profile__ctor(&stru_60C92E40, Actor_jugemu_maruchipureifor_build, 0x270u, v2, &stru_60AFF160, 2);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AC4356;
  Profile__ctor(&stru_60C92E58, Actor_jugemu_maruchipureifor_build, 0x271u, v2, &stru_60AFF160, 2);
  dword_60C92E74 = CurrentStateID + 1;
  dword_60C92E70 = (int)&off_60BE91A0;
  dword_60C92E78 = (int)sub_603027A0;
  dword_60C92E7C = 0;
  dword_60C92E80 = (int)SE_EMY_DOWN_ref_30286C;
  dword_60C92E84 = 0;
  dword_60C92E88 = (int)nullsub_3316;
  dword_60C92E8C = 0;
  unk_60C92E90 = &off_60BE91A0;
  unk_60C92E94 = CurrentStateID + 2;
  dword_60C92E98 = (int)throw_st_ref_302B9C;
  dword_60C92E9C = 0;
  dword_60C92EA0 = (int)SE_EMY_DOWN_ref_302C70;
  dword_60C92EA4 = 0;
  dword_60C92EA8 = (int)nullsub_3317;
  dword_60C92EAC = 0;
  v0 = CurrentStateID + 3;
  CurrentStateID += 4;
  dword_60C92EB4 = v0;
  dword_60C92EB8 = 444;
  dword_60C92EBC = 1;
  dword_60C92EC0 = 448;
  dword_60C92EC4 = 1;
  dword_60C92EC8 = 452;
  dword_60C92ECC = 1;
  dword_60C92EB0 = (int)&off_60BE91B4;
  dword_60C92ED0 = (int)&stru_60C906EC;
  unk_60C92ED8 = CurrentStateID;
  unk_60C92EDC = 456;
  unk_60C92EE0 = 1;
  unk_60C92EE4 = 460;
  dword_60C92EE8 = 1;
  dword_60C92EEC = 464;
  dword_60C92EF0 = 1;
  dword_60C92ED4 = (int)&off_60BE91B4;
  dword_60C92EF4 = (int)&stru_60C90710;
  return &dword_60C92ED4;
}
