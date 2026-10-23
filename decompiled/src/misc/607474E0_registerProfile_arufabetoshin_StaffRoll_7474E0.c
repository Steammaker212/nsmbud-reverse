/* registerProfile_arufabetoshin_StaffRoll_7474E0
 * address: 0x607474E0   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_arufabetoshin_StaffRoll_7474E0())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60CBE570[0] = (int)&sead__SafeStringBase__vtable;
  dword_60CBE574 = (int)"baloon_ABC";
  dword_60CBE578 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE57C = (int)"baloon_ABC";
  dword_60CBE580 = (int)&sead__SafeStringBase__vtable;
  v2.vtable = &sead__SafeStringBase__vtable;
  dword_60CBE584 = (int)"mat_ABC";
  dword_60CBE588 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE58C = (int)"mat_back";
  dword_60CBE590 = (int)&sead__SafeStringBase__vtable;
  dword_60CBE594 = (int)"mat_balloon";
  v2.cstr = (char *)&unk_60AD9B59;
  dword_60CBE598 = 1065353216;
  dword_60CBE59C = 1065353216;
  dword_60CBE5A0 = 1065353216;
  dword_60CBE5A4 = 0;
  dword_60CBE5A8 = 1065353216;
  dword_60CBE5AC = 1065353216;
  dword_60CBE5B0 = 1050253722;
  dword_60CBE5B4 = 0;
  dword_60CBE5D0 = 0;
  dword_60CBE5D4 = 0;
  dword_60CBE5CC = 0;
  dword_60CBE5C8 = 0;
  dword_60CBE5C4 = 0;
  dword_60CBE5C0 = 0;
  dword_60CBE5BC = 0;
  dword_60CBE5B8 = 0;
  dword_60CBE5E0[0] = 1053609165;
  dword_60CBE5E4 = 1060320051;
  dword_60CBE5E8 = 1065353216;
  dword_60CBE5EC = 1056964608;
  dword_60CBE5F0 = 1053609165;
  dword_60CBE5F4 = 1060320051;
  dword_60CBE5F8 = 1065353216;
  dword_60CBE5FC = 1056964608;
  dword_60CBE600 = 1065353216;
  dword_60CBE604 = 1065353216;
  dword_60CBE608 = 1065353216;
  dword_60CBE60C = 0;
  dword_60CBE610 = 1065353216;
  dword_60CBE614 = 1065353216;
  dword_60CBE618 = 1065353216;
  dword_60CBE61C = 0;
  Profile__ctor(&stru_60CBE4E8, Actor_arufabetoshin_StaffRoll_build, 0x34Eu, &v2, 0, 2);
  *v0 = &off_60C233C4;
  dword_60CBE504 = CurrentStateID + 1;
  dword_60CBE500 = (int)&off_60C2345C;
  dword_60CBE508 = (int)sub_607463EC;
  dword_60CBE50C = 0;
  dword_60CBE510 = (int)nullsub_5440;
  dword_60CBE514 = 0;
  dword_60CBE518 = (int)sub_60746400;
  dword_60CBE51C = 0;
  stru_60CBE520.vtable = &off_60C2345C;
  stru_60CBE520.id = CurrentStateID + 2;
  dword_60CBE528 = (int)vibrate_ref;
  dword_60CBE52C = 0;
  dword_60CBE530 = (int)sub_60746530;
  dword_60CBE534 = 0;
  dword_60CBE538 = (int)sub_607466A0;
  dword_60CBE53C = 0;
  CurrentStateID += 3;
  dword_60CBE544 = CurrentStateID;
  dword_60CBE540 = (int)&off_60C2345C;
  dword_60CBE548 = (int)sub_607466B4;
  dword_60CBE54C = 0;
  dword_60CBE550 = (int)sub_60746778;
  dword_60CBE554 = 0;
  dword_60CBE558 = (int)nullsub_5441;
  dword_60CBE55C = 0;
  return nullsub_5441;
}
