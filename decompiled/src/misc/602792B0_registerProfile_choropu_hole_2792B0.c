/* registerProfile_choropu_hole_2792B0
 * address: 0x602792B0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_choropu_hole_2792B0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8EDE8 = 0;
  dword_60C8EDEC = 0;
  dword_60C8EDF0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2D10;
  Profile__ctor(&stru_60C8EDF4, Actor_choropu_hole_build, 0x264u, &v1, &stru_60AFDD5C, 0);
  dword_60C8EE10 = ++CurrentStateID;
  dword_60C8EE0C = (int)&off_60BDD2C8;
  dword_60C8EE14 = (int)nullsub_3137;
  dword_60C8EE18 = 0;
  dword_60C8EE1C = (int)nullsub_3138;
  dword_60C8EE20 = 0;
  dword_60C8EE24 = (int)nullsub_3139;
  dword_60C8EE28 = 0;
  return &dword_60C8EE0C;
}
