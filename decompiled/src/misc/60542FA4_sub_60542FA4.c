/* sub_60542FA4
 * address: 0x60542FA4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60542FA4(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // s0
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r12
  int v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1

  result = FIELD_U8(a1, 3586);
  if ( result )
  {
    v3 = FIELD_U32(a1, 3552);
    if ( v3 )
    {
      v4 = sub_60478864(v3);
      v5 = *(_DWORD **)(a1 + 3552);
      v6 = FIELD_U32(a1, 3564);
      v7 = v5[24];
      v8 = v5[25];
      v9 = v5[26];
      v10 = v5[27];
      FIELD_F32(v6, 32) = v4;
      FIELD_U32(v6, 24) = v7;
      FIELD_U32(v6, 28) = v10;
      FIELD_U8(v6, 64) |= 0x10u;
      v11 = FIELD_U32(a1, 3568);
      FIELD_F32(v11, 32) = v4;
      FIELD_U32(v11, 24) = v9;
      FIELD_U32(v11, 28) = v10;
      FIELD_U8(v11, 64) |= 0x10u;
      v12 = FIELD_U32(a1, 3572);
      FIELD_F32(v12, 32) = v4;
      FIELD_U32(v12, 24) = v7;
      FIELD_U32(v12, 28) = v8;
      FIELD_U8(v12, 64) |= 0x10u;
      v13 = FIELD_U32(a1, 3576);
      FIELD_F32(v13, 32) = v4;
      FIELD_U32(v13, 24) = v9;
      FIELD_U32(v13, 28) = v8;
      FIELD_U8(v13, 64) |= 0x10u;
    }
    FIELD_U8(a1, 3584) = 1;
    if ( FIELD_U8(a1, 3585) )
    {
      FIELD_U8(a1, 3585) = 0;
      if ( FIELD_U8(a1, 3586) )
        FIELD_U8(a1, 3584) = 0;
      FIELD_U8(a1, 3586) = 0;
    }
    if ( FIELD_U8(a1, 3589) )
      v14 = 17;
    else
      v14 = 14;
    return sub_60473B58((_DWORD *)(a1 + 4), v14, 0);
  }
  return result;
}
