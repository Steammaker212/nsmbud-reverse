/* lift_zen_sabaku_iseki_5x8_ref
 * address: 0x606AC354   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int lift_zen_sabaku_iseki_5x8_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7363;
  Profile__ctor(&stru_60CBA010, Actor_parentchild_obuje_child_sand_build, 0x46u, &v1, &stru_60B08590, 2);
  dword_60CBA028 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA02C = (int)"lift_zen_sabaku_iseki_5x8";
  dword_60CBA030 = 1109393408;
  dword_60CBA034 = -1031798784;
  dword_60CBA044 = 0;
  dword_60CBA040 = 0;
  dword_60CBA03C = 0;
  dword_60CBA038 = 0;
  dword_60CBA048 = -1038090240;
  dword_60CBA04C = 1115684864;
  unk_60CBA050 = 1109393408;
  unk_60CBA054 = -1031798784;
  unk_60CBA058 = 0;
  return sub_60000288();
}
