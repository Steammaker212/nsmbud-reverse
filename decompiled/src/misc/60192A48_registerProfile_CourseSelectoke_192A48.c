/* registerProfile_CourseSelectoke_192A48
 * address: 0x60192A48   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectoke_192A48()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C899E0 = 0;
  dword_60C899E4 = 0;
  dword_60C899E8 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF8EA;
  Profile__ctor(&stru_60C899C0, Actor_CourseSelectoke_build, 0x365u, &v2, 0, 0);
  dword_60C899EC = (int)&sead__SafeStringBase__vtable;
  *v0 = &off_60BD5974;
  dword_60C899F0 = (int)"cobGhostOpen";
  dword_60C899F4 = (int)&sead__SafeStringBase__vtable;
  dword_60C899F8 = (int)"cobGhostClose";
  dword_60C899FC = (int)&sead__SafeStringBase__vtable;
  dword_60C89A00 = (int)"cobGhostOut";
  dword_60C89A04 = (int)&sead__SafeStringBase__vtable;
  dword_60C89A08 = (int)"cobGhostCloseAll";
  dword_60C89A0C = (int)&sead__SafeStringBase__vtable;
  dword_60C89A10 = (int)"cobGhostCloseWindow";
  dword_60C89A14 = (int)&sead__SafeStringBase__vtable;
  dword_60C89A18 = (int)"cobGhostCloseDoor";
  return sub_60000288();
}
