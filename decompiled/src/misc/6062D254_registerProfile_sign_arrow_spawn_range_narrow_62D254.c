/* registerProfile_sign_arrow_spawn_range_narrow_62D254
 * address: 0x6062D254   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sign_arrow_spawn_range_narrow_62D254()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB3F00 = 0;
  dword_60CB3F04 = 0;
  dword_60CB3F08 = 0;
  dword_60CB3F0C = 0;
  dword_60CB3F10 = 0;
  dword_60CB3F14 = 8;
  dword_60CB3F18 = 0x200000;
  dword_60CB3F1C = 0x8000000;
  dword_60CB3F20 = 6553600;
  dword_60CB3F24 = 3276800;
  dword_60CB3F28 = 0;
  dword_60CB3F2C = 0;
  dword_60CB3F30 = 0;
  dword_60CB3F34 = 4;
  dword_60CB3F38 = 2228224;
  unk_60CB3F3C = 0x8000000;
  unk_60CB3F40 = 6553600;
  unk_60CB3F44 = 3276800;
  dword_60CB3F48 = 0;
  dword_60CB3F4C = 0;
  dword_60CB3F50 = 0;
  dword_60CB3F54 = 8;
  dword_60CB3F58 = 6553600;
  unk_60CB3F5C = 0x8000000;
  unk_60CB3F60 = 6553600;
  unk_60CB3F64 = 3276800;
  dword_60CB3F68 = 0;
  dword_60CB3E40 = CurrentStateID + 1;
  dword_60CB3E44 = 192;
  dword_60CB3E48 = 1;
  dword_60CB3E4C = 196;
  dword_60CB3E50 = 1;
  dword_60CB3E54 = 200;
  dword_60CB3E58 = 1;
  dword_60CB3E3C = (int)&off_60C12374;
  dword_60CB3E5C = (int)&NullState;
  dword_60CB3E6C = 1;
  dword_60CB3E70 = 220;
  dword_60CB3E74 = 1;
  dword_60CB3E78 = 224;
  dword_60CB3E7C = 1;
  stru_60CB3E60.vtable = &off_60C12374;
  stru_60CB3E60.id = CurrentStateID + 2;
  unk_60CB3E68 = 216;
  CurrentStateID += 3;
  dword_60CB3E80 = (int)&NullState;
  *(_DWORD *)algn_60CB3E88 = CurrentStateID;
  *(_DWORD *)&algn_60CB3E88[4] = 204;
  dword_60CB3E90 = 1;
  dword_60CB3E94 = 208;
  dword_60CB3E98 = 1;
  dword_60CB3E9C = 212;
  dword_60CB3EA0 = 1;
  dword_60CB3E84 = (int)&off_60C12374;
  dword_60CB3EA4 = (int)&NullState;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD3FF5;
  Profile__ctor(&stru_60CB3EA8, Actor_sign_arrow_spawn_range_narrow_build, 0x2E5u, v0, &stru_60B06A48, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD4002;
  Profile__ctor(&stru_60CB3EC0, Actor_sign_arrow_spawn_range_narrow_build, 0x2E6u, v0, &stru_60B06A6C, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD4016;
  Profile__ctor(&stru_60CB3ED8, Actor_sign_arrow_spawn_range_narrow_build, 0x2E7u, v0, &stru_60B06A90, 2);
}
