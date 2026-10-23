/* sub_60506F20
 * address: 0x60506F20   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60506F20(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r5
  int v7; // r0
  int result; // r0
  int v9; // [sp+0h] [bp-20h] BYREF
  int v10; // [sp+4h] [bp-1Ch] BYREF

  v6 = a1 + 15;
  sub_604734E4(a1 + 15, 0);
  sub_60476388(v6, a2, a3);
  v9 = 1;
  sub_60474848((int)v6, &dword_60CA7A80, &v9);
  v7 = sub_6050DF0C(a1);
  sub_60507044(a1, v7);
  v10 = 2;
  sub_604752D4((int)v6, (int)(a1 + 900), dword_60CA7A9C, &v10);
  result = sub_608DE334(0x38u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 2;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    FIELD_U32(result, 32) = -1;
    FIELD_U32(result, 36) = -1;
    FIELD_U32(result, 24) = off_60BFDB94;
    FIELD_U16(result, 40) = 0;
    FIELD_U16(result, 42) = 0;
    a1[902] = 2;
    a1[903] = result;
  }
  return result;
}
