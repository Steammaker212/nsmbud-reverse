/* registerProfile_RDash_610030
 * address: 0x60610030   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_RDash_610030()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD394A;
  Profile__ctor(&stru_60CB3048, Actor_RDash_build, 0xD0u, v1, &stru_60B064A0, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD3951;
  Profile__ctor(&stru_60CB3060, Actor_RDash_build, 0xD1u, v1, &stru_60B064A0, 2);
  dword_60CB3084 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3088 = (int)"obj_gear";
  dword_60CB308C = (int)&sead__SafeStringBase__vtable;
  dword_60CB3090 = (int)"obj_gear_shiro";
  sub_60000288();
  dword_60CB3094 = (int)&sead__SafeStringBase__vtable;
  unk_60CB3098 = "R_obj_gear";
  unk_60CB309C = &sead__SafeStringBase__vtable;
  unk_60CB30A0 = "obj_gear_shiro";
  sub_60000288();
  dword_60CB30A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB30A8 = (int)"obj_gear_M";
  dword_60CB30AC = (int)&sead__SafeStringBase__vtable;
  dword_60CB30B0 = (int)"obj_gear_L";
  dword_60CB30B4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB30B8 = (int)"obj_gear_S";
  return sub_60000288();
}
