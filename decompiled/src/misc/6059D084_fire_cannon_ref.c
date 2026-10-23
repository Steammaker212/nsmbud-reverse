/* fire_cannon_ref
 * address: 0x6059D084   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *fire_cannon_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC7583;
  Profile__ctor(&stru_60CAFAAC, Actor_bana_build, 0xE0u, &v1, &stru_60B04D84, 2);
  dword_60CAFAC8 = CurrentStateID + 1;
  dword_60CAFACC = 228;
  dword_60CAFAD0 = 1;
  dword_60CAFAD4 = 232;
  dword_60CAFAD8 = 1;
  dword_60CAFADC = 236;
  dword_60CAFAE0 = 1;
  dword_60CAFAC4 = (int)&off_60C079A0;
  dword_60CAFAE4 = (int)&NullState;
  dword_60CAFAF4 = 1;
  dword_60CAFAF8 = 200;
  dword_60CAFAFC = 1;
  dword_60CAFB00 = 204;
  dword_60CAFB04 = 1;
  stru_60CAFAE8.vtable = &off_60C079A0;
  stru_60CAFAE8.id = CurrentStateID + 2;
  unk_60CAFAF0 = 196;
  CurrentStateID += 3;
  dword_60CAFB08 = (int)&dword_60CB0A8C;
  unk_60CAFB10 = CurrentStateID;
  unk_60CAFB14 = 208;
  dword_60CAFB18 = 1;
  dword_60CAFB1C = 212;
  dword_60CAFB20 = 1;
  dword_60CAFB24 = 216;
  dword_60CAFB28 = 1;
  dword_60CAFB0C = (int)&off_60C079A0;
  dword_60CAFB2C = (int)&dword_60CB0AB0;
  dword_60CAFB64 = 0;
  dword_60CAFB60 = 0;
  dword_60CAFB5C = 0;
  dword_60CAFB58 = 0;
  dword_60CAFB68 = -1056964608;
  dword_60CAFB6C = 1090519040;
  dword_60CAFB70 = 1090519040;
  dword_60CAFB74 = -1056964608;
  dword_60CAFB78 = 0;
  dword_60CAFB40 = (int)&sead__SafeStringBase__vtable;
  unk_60CAFB44 = "fire_cannon";
  unk_60CAFB48 = &sead__SafeStringBase__vtable;
  dword_60CAFB4C = (int)"fire_cannon";
  dword_60CAFB50 = (int)&sead__SafeStringBase__vtable;
  dword_60CAFB54 = (int)"fire_cannon";
  return &dword_60CAFB40;
}
