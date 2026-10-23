/* sub_604C154C
 * address: 0x604C154C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C154C(int a1)
{
  int v1; // r5
  int v3; // r0
  bool v4; // zf
  int result; // r0
  bool v6; // zf
  int v7; // r0
  float v8; // s0
  int v9; // r0
  unsigned int v10; // r1
  int (**v11)(); // [sp+8h] [bp-18h] BYREF
  const char *v12; // [sp+Ch] [bp-14h]

  v3 = sub_6047482C(FIELD_U32(a1, 4), 6u);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = -1;
    v4 = FIELD_U8(v3, 20) == 0;
  }
  if ( v4 )
  {
    v1 = 1;
    v11 = &sead__SafeStringBase__vtable;
    v12 = "G_ArrowL_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 6u, &dword_60CA27B0, (int)&v11, 1.0, 1);
  }
  result = sub_6047482C(FIELD_U32(a1, 4), 7u);
  v6 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 20);
    v6 = result == 0;
  }
  if ( v6 )
  {
    v11 = &sead__SafeStringBase__vtable;
    v12 = "G_ArrowR_00";
    sub_6047467C(*(_DWORD **)(a1 + 4), 7u, &dword_60CA27B0, (int)&v11, 1.0, 1);
    v7 = FIELD_U32(a1, 4);
    goto LABEL_11;
  }
  if ( v1 >= 0 )
  {
    v7 = FIELD_U32(a1, 4);
    if ( v1 == 1 )
    {
      v8 = sub_6047457C(v7, 7u);
      v9 = FIELD_U32(a1, 4);
      v10 = 6;
      return sub_6047455C(v9, v10, v8);
    }
LABEL_11:
    v8 = sub_6047457C(v7, 6u);
    v9 = FIELD_U32(a1, 4);
    v10 = 7;
    return sub_6047455C(v9, v10, v8);
  }
  return result;
}
