/* registerProfile_kinoko_horizontal_move_6AAA90
 * address: 0x606AAA90   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kinoko_horizontal_move_6AAA90()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60CB9E00[0] = 0;
  dword_60CB9E04 = 0;
  dword_60CB9E08 = 16;
  dword_60CB9E0C = 0x10000;
  dword_60CB9E10 = 0x8000000;
  dword_60CB9E14 = 0x200000;
  dword_60CB9E18 = 0x100000;
  dword_60CB9E1C = 0x800000;
  dword_60CB9E20 = 0;
  unk_60CB9E24 = 0;
  unk_60CB9E28 = 16;
  unk_60CB9E2C = 0x10000;
  dword_60CB9E30 = 0x8000000;
  dword_60CB9E34 = 0x80000;
  dword_60CB9E38 = 0x100000;
  dword_60CB9E3C = 0x400000;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD72C6;
  Profile__ctor(&stru_60CB9E40, Actor_kinoko_horizontal_move_build, 0x4Cu, &v0, (ActorInfo *)dword_60B08544, 0);
}
