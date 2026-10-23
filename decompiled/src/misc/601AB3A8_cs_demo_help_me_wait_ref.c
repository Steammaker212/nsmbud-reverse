/* cs_demo_help_me_wait_ref
 * address: 0x601AB3A8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *cs_demo_help_me_wait_ref()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C8A5F0 = 0;
  dword_60C8A5F4 = 0;
  dword_60C8A5F8 = 0;
  dword_60C8A5FC = 0;
  dword_60C8A600 = -1036779520;
  dword_60C8A604 = -1048576000;
  dword_60C8A608[0] = (int)&sead__SafeStringBase__vtable;
  dword_60C8A60C = (int)"cs_demo_wait";
  dword_60C8A610 = 1065353216;
  dword_60C8A614 = 1;
  dword_60C8A618 = (int)&sead__SafeStringBase__vtable;
  unk_60C8A61C = "cs_demo_help_me";
  unk_60C8A620 = 1065353216;
  unk_60C8A624 = 0;
  unk_60C8A628 = &sead__SafeStringBase__vtable;
  dword_60C8A62C = (int)"cs_demo_help_me_wait";
  dword_60C8A630 = 1065353216;
  dword_60C8A634 = 1;
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFCD9;
  Profile__ctor(&stru_60C8A55C, Actor_CourseSelectPeach_build, 0x38Bu, &v2, 0, 0);
  *v0 = &off_60BD6404;
  dword_60C8A578 = CurrentStateID + 1;
  dword_60C8A57C = 92;
  dword_60C8A580 = 1;
  dword_60C8A584 = 96;
  dword_60C8A588 = 1;
  dword_60C8A58C = 100;
  dword_60C8A590 = 1;
  dword_60C8A574 = (int)&off_60BD6498;
  dword_60C8A594 = (int)&NullState;
  dword_60C8A5A4 = 1;
  dword_60C8A5A8 = 108;
  dword_60C8A5AC = 1;
  dword_60C8A5B0 = 112;
  dword_60C8A5B4 = 1;
  unk_60C8A598 = &off_60BD6498;
  unk_60C8A59C = CurrentStateID + 2;
  unk_60C8A5A0 = 104;
  CurrentStateID += 3;
  dword_60C8A5B8 = (int)&NullState;
  unk_60C8A5C0 = CurrentStateID;
  unk_60C8A5C4 = 116;
  unk_60C8A5C8 = 1;
  unk_60C8A5CC = 120;
  dword_60C8A5D0 = 1;
  dword_60C8A5BC = (int)&off_60BD6498;
  dword_60C8A5D4[0] = 124;
  dword_60C8A5D4[1] = 1;
  dword_60C8A5D4[2] = &NullState;
  return dword_60C8A5D4;
}
