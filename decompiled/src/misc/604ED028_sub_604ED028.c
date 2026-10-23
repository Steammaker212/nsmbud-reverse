/* sub_604ED028
 * address: 0x604ED028   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED028(int a1)
{
  int v1; // r6
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

  v2 = (_DWORD *)(a1 + 10808);
  v3 = sub_6047482C(a1 + 10808, 1u);
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
    sub_6047467C(v2, 1u, &dword_60CA60F8, (int)&v10, 1.0, 1);
    v1 = 0;
  }
  result = sub_6047482C((int)v2, 2u);
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
    sub_6047467C(v2, 2u, &dword_60CA60F8, (int)&v10, 1.0, 1);
    v7 = sub_6047457C((int)v2, 1u);
    v8 = (int)v2;
    v9 = 2;
  }
  else
  {
    if ( v1 < 0 )
      return result;
    v7 = sub_6047457C((int)v2, 2u);
    v8 = (int)v2;
    v9 = 1;
  }
  return sub_6047455C(v8, v9, v7);
}
