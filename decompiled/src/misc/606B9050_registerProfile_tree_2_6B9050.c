/* registerProfile_tree_2_6B9050
 * address: 0x606B9050   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tree_2_6B9050()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60CBA508 = (int)&sead__SafeStringBase__vtable;
  unk_60CBA50C = "tsuru01";
  unk_60CBA510 = &sead__SafeStringBase__vtable;
  dword_60CBA514 = (int)"tsuru02";
  dword_60CBA518 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA51C = (int)"tsuru03";
  dword_60CBA520 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA524 = (int)"tsuru04";
  dword_60CBA528 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA52C = (int)"tsuru05";
  dword_60CBA530 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA534 = (int)"tsuru06";
  dword_60CBA538 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA53C = (int)"tsuru07";
  dword_60CBA540 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA544 = (int)"tsuru08";
  dword_60CBA548 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA54C = (int)"tsuru09";
  dword_60CBA550 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA554 = (int)"tsuru10";
  dword_60CBA558 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA55C = (int)"tsuru11";
  dword_60CBA560 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA564 = (int)"tsuru12";
  dword_60CBA568 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA56C = (int)"tsuru13";
  sub_60000288();
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7707;
  Profile__ctor(&stru_60CBA570, Actor_tree_2_build, 0x340u, &v0, &stru_60B087D4, 0);
}
