/* registerProfile_ruretoburoku_6D4080
 * address: 0x606D4080   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ruretoburoku_6D4080()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBB610 = 0;
  dword_60CBB614 = 0;
  dword_60CBB618 = 0;
  dword_60CBB628 = 0;
  dword_60CBB624 = 0;
  dword_60CBB620 = 0;
  dword_60CBB61C = 0;
  dword_60CBB62C = -1052770304;
  dword_60CBB630 = 1094713344;
  dword_60CBB634 = 1094713344;
  dword_60CBB638 = -1052770304;
  dword_60CBB63C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7DD4;
  Profile__ctor(&stru_60CBB5E4, Actor_ruretoburoku_build, 0x141u, &v0, &stru_60B08D38, 4098);
}
