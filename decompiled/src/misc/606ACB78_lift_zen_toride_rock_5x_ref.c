/* lift_zen_toride_rock_5x_ref
 * address: 0x606ACB78   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int lift_zen_toride_rock_5x_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD73CA;
  Profile__ctor(&stru_60CBA084, Actor_parentchild_obuje_child_fort_rock_build, 0x47u, &v1, &stru_60B085B4, 2);
  dword_60CBA09C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA0A0 = (int)"lift_zen_toride_rock_5x8";
  dword_60CBA0A4 = 1109393408;
  dword_60CBA0A8 = -1031798784;
  dword_60CBA0B8 = 0;
  dword_60CBA0B4 = 0;
  dword_60CBA0B0 = 0;
  dword_60CBA0AC = 0;
  dword_60CBA0BC = -1038090240;
  dword_60CBA0C0 = 1115684864;
  unk_60CBA0C4 = 1109393408;
  unk_60CBA0C8 = -1031798784;
  unk_60CBA0CC = 0;
  unk_60CBA0D0 = &sead__SafeStringBase__vtable;
  dword_60CBA0D4 = (int)"lift_zen_toride_rock_5x9";
  dword_60CBA0D8 = 1109393408;
  dword_60CBA0DC = -1030750208;
  dword_60CBA0EC = 0;
  dword_60CBA0E8 = 0;
  dword_60CBA0E4 = 0;
  dword_60CBA0E0 = 0;
  dword_60CBA0F0 = -1038090240;
  dword_60CBA0F4 = 1116733440;
  unk_60CBA0F8 = 1109393408;
  unk_60CBA0FC = -1030750208;
  unk_60CBA100 = 0;
  return sub_60000288();
}
