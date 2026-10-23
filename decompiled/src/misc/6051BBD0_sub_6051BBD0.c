/* sub_6051BBD0
 * address: 0x6051BBD0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051BBD0(int *a1, int a2, int a3, int a4)
{
  int *v5; // r5
  int v6; // r3
  int v7; // r1
  const char *v8; // r0
  int v9; // r0
  int result; // r0
  int (**v11)(); // [sp+0h] [bp-18h] BYREF
  const char *v12; // [sp+4h] [bp-14h]

  v11 = &sead__SafeStringBase__vtable;
  v12 = "PreGameStory_WorldCourse_00";
  v5 = a1 + 15540;
  sub_6047E0EC(&v11, a1[15540], 0, a4);
  *(_BYTE *)(*v5 + 64) |= 1u;
  v7 = a1[15541];
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v11 = &sead__SafeStringBase__vtable;
    v8 = "PreGameStory_WorldNameDL_00";
  }
  else
  {
    v11 = &sead__SafeStringBase__vtable;
    v8 = "PreGameStory_WorldName_00";
  }
  v12 = v8;
  sub_6047E0EC(&v11, v7, 0, v6);
  *(_BYTE *)(a1[15541] + 64) |= 1u;
  v9 = sub_60473B4C(a1[1]);
  result = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v9 + 48))(v9, "N_WorldCourse_00", 1);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
