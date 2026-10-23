/* sub_60560298
 * address: 0x60560298   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560298(int a1)
{
  int v1; // r5
  _DWORD *v2; // r4
  int v3; // r0
  bool v4; // zf
  int result; // r0
  bool v6; // zf
  float v7; // s0
  int v8; // r0
  unsigned int v9; // r1
  int (**v10)(); // [sp+8h] [bp-18h] BYREF
  const char *v11; // [sp+Ch] [bp-14h]

  v2 = (_DWORD *)(a1 + 44);
  v3 = sub_6047482C(a1 + 44, 3u);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = -1;
    v4 = FIELD_U8(v3, 20) == 0;
  }
  if ( v4 )
  {
    v10 = &sead__SafeStringBase__vtable;
    v11 = "G_ArrowL_00";
    sub_6047467C(v2, 3u, &dword_60CADD48, (int)&v10, 1.0, 1);
    v1 = 2;
  }
  result = sub_6047482C((int)v2, 4u);
  v6 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 20);
    v6 = result == 0;
  }
  if ( v6 )
  {
    v10 = &sead__SafeStringBase__vtable;
    v11 = "G_ArrowR_00";
    sub_6047467C(v2, 4u, &dword_60CADD48, (int)&v10, 1.0, 1);
    goto LABEL_11;
  }
  if ( v1 >= 0 )
  {
    if ( v1 == 2 )
    {
      v7 = sub_6047457C((int)v2, 4u);
      v8 = (int)v2;
      v9 = 3;
      return sub_6047455C(v8, v9, v7);
    }
LABEL_11:
    v7 = sub_6047457C((int)v2, 3u);
    v8 = (int)v2;
    v9 = 4;
    return sub_6047455C(v8, v9, v7);
  }
  return result;
}
