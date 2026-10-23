/* lift_zen_rotate_stone_ref
 * address: 0x606CE824   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int lift_zen_rotate_stone_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7BDD;
  Profile__ctor(&stru_60CBB38C, Actor_rotate_buroku_stone_build, 0x9Du, &v1, &stru_60B08C08, 2);
  dword_60CBB3A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB3A8 = (int)"lift_zen_rotate_stone_3x2";
  dword_60CBB3AC = 1111490560;
  dword_60CBB3B0 = 1107296256;
  dword_60CBB3B4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB3B8 = (int)"lift_zen_rotate_stone_6x2";
  dword_60CBB3BC = 1119879168;
  dword_60CBB3C0 = 1107296256;
  dword_60CBB3C4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB3C8 = (int)"lift_zen_rotate_stone_8x2";
  dword_60CBB3CC = 1124073472;
  dword_60CBB3D0 = 1107296256;
  dword_60CBB3D4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB3D8 = (int)"lift_zen_rotate_stone_8x4";
  dword_60CBB3DC = 1124073472;
  dword_60CBB3E0 = 1115684864;
  dword_60CBB3E4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBB3E8 = (int)"lift_zen_rotate_stone_9x2";
  dword_60CBB3EC = 1126170624;
  dword_60CBB3F0 = 1107296256;
  return sub_60000288();
}
