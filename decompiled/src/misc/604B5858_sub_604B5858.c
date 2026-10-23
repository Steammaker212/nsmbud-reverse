/* sub_604B5858
 * address: 0x604B5858   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B5858(int a1)
{
  int v1; // r5
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int result; // r0
  bool v10; // zf
  float v11; // s0
  int v12; // r0
  unsigned int v13; // r1
  int (**v14)(); // [sp+8h] [bp-18h] BYREF
  const char *v15; // [sp+Ch] [bp-14h]

  v3 = sub_6047482C(FIELD_U32(a1, 4), 6u);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = -1;
    v4 = FIELD_U8(v3, 20) == 0;
  }
  if ( v4 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "G_ArrowL_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 6u, &dword_60CA1B84, (int)&v14, 1.0, 1);
    v1 = 3;
  }
  v5 = sub_6047482C(FIELD_U32(a1, 4), 5u);
  v6 = v5 == 0;
  if ( v5 )
    v6 = FIELD_U8(v5, 20) == 0;
  if ( v6 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "G_ArrowR_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 5u, &dword_60CA1B84, (int)&v14, 1.0, 1);
    v1 = 2;
  }
  v7 = sub_6047482C(FIELD_U32(a1, 4), 7u);
  v8 = v7 == 0;
  if ( v7 )
    v8 = FIELD_U8(v7, 20) == 0;
  if ( v8 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "G_ArrowT_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 7u, &dword_60CA1B84, (int)&v14, 1.0, 1);
    v1 = 4;
  }
  result = sub_6047482C(FIELD_U32(a1, 4), 8u);
  v10 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 20);
    v10 = result == 0;
  }
  if ( v10 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "G_ArrowB_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 8u, &dword_60CA1B84, (int)&v14, 1.0, 1);
    v11 = sub_6047457C(FIELD_U32(a1, 4), 7u);
    v12 = FIELD_U32(a1, 4);
    v13 = 8;
    return sub_6047455C(v12, v13, v11);
  }
  if ( v1 >= 0 )
  {
    switch ( v1 )
    {
      case 2:
        v11 = sub_6047457C(FIELD_U32(a1, 4), 6u);
        v12 = FIELD_U32(a1, 4);
        v13 = 5;
        return sub_6047455C(v12, v13, v11);
      case 4:
        v11 = sub_6047457C(FIELD_U32(a1, 4), 8u);
        v12 = FIELD_U32(a1, 4);
        v13 = 7;
        return sub_6047455C(v12, v13, v11);
      case 3:
        v11 = sub_6047457C(FIELD_U32(a1, 4), 5u);
        v12 = FIELD_U32(a1, 4);
        v13 = 6;
        return sub_6047455C(v12, v13, v11);
    }
  }
  return result;
}
