/* registerProfile_CourseSelectkosupointo_178B90
 * address: 0x60178B90   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectkosupointo_178B90()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C88E90[0] = 0;
  dword_60C88E94 = 0;
  dword_60C88E98 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF18F;
  Profile__ctor(&stru_60C88E6C, Actor_CourseSelectkosupointo_build, 0x362u, &v2, 0, 0);
  dword_60C88E9C = (int)&sead__SafeStringBase__vtable;
  *v0 = &off_60BD4F68;
  dword_60C88EA0 = (int)"cobCourseClear";
  dword_60C88EA4 = (int)&sead__SafeStringBase__vtable;
  dword_60C88EA8 = (int)"cobCourseHelp";
  dword_60C88EAC = (int)&sead__SafeStringBase__vtable;
  dword_60C88EB0 = (int)"cobCourseOpen";
  dword_60C88EB4 = (int)&sead__SafeStringBase__vtable;
  dword_60C88EB8 = (int)"cobCourseAppear";
  dword_60C88EBC = (int)&sead__SafeStringBase__vtable;
  dword_60C88EC0 = (int)"cobCourseAppearBlack";
  dword_60C88EC4 = (int)&sead__SafeStringBase__vtable;
  dword_60C88EC8 = (int)"cobCourseShadowkun";
  return sub_60000288();
}
