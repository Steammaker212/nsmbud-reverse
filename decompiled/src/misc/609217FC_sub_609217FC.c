/* sub_609217FC
 * address: 0x609217FC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609217FC(int a1, int *a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r7
  int v11; // r8
  int v12; // r7
  int v13; // r1
  int v14; // r5
  _BYTE v16[88]; // [sp+0h] [bp-58h] BYREF

  FIELD_U8(a1, 36) = a3;
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  FIELD_U32(a1, 24) = v7;
  FIELD_U32(a1, 28) = v8;
  FIELD_U32(a1, 32) = v9;
  FIELD_U16(a1, 40) = a4;
  if ( FIELD_U32(a1, 4) )
  {
    v10 = FIELD_U32(a1, 12);
    v11 = FIELD_U32(a1, 16);
    v12 = v10 + (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1;
    FIELD_U32(a1, 20) = (v12 & -(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1)) + v11 * (a4 * a3 - 1);
    v7 = FIELD_U32(a1, 24);
  }
  if ( v7 )
  {
    if ( (FIELD_U8(a1, 38) & 4) != 0 )
      dword_60CC7464(a1 + 48);
    dword_60CC7444(v16, FIELD_U32(dword_60CCFC8C, 28));
    dword_60CC7448(v16);
    dword_60CC744C(v16, FIELD_U32(a1, 24), FIELD_U32(a1, 28), FIELD_U32(a1, 20));
    dword_60CC745C(a1 + 48, v16);
    FIELD_U8(a1, 38) |= 4u;
    v7 = FIELD_U32(a1, 24);
  }
  v13 = 0;
  FIELD_U8(a1, 37) = 0;
  v14 = FIELD_U32(a1, 28);
  if ( v7 )
    v13 = dword_60CC73E8(v7);
  FIELD_U32(a1, 8) = v13 + v14;
  return v13 + v14;
}
