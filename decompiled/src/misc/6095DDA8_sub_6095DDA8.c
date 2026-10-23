/* sub_6095DDA8
 * address: 0x6095DDA8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095DDA8(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r1
  int v7; // r7
  int v8; // r6
  unsigned int v9; // r2
  int v10; // r0
  float v11; // s2
  float v12; // s6
  int v13; // r8
  int v14; // r0
  int result; // r0
  int (*v16)(); // r1
  int v17; // r2
  int (*v18)(); // r1

  v5 = FIELD_U32(a1, 456);
  v6 = FIELD_U32(a1, 620);
  if ( v5 <= 1 )
    v5 = 1;
  if ( v5 >= v6 )
    v5 = FIELD_U32(a1, 620);
  FIELD_U32(a1, 456) = v5;
  if ( v5 >= 1 )
  {
    v7 = 0;
    v8 = 4;
    v9 = 0;
    while ( 1 )
    {
      v10 = FIELD_U32(a1, 624);
      v11 = 0.0;
      if ( v6 > v9 )
        v10 += v7;
      if ( v7 )
        v11 = *(float *)(FIELD_U32(a1, 608) + v8 - 4);
      v12 = 0.0;
      v13 = v9 + 1;
      if ( v5 - 1 != v9 )
        v12 = *(float *)(FIELD_U32(a1, 608) + v8 - 4);
      sub_6095F340(
        v10,
        a1 + 4308,
        a2,
        a3,
        *(float *)(FIELD_U32(a1, 568) + v8 - 4) - v11,
        *(float *)(FIELD_U32(a1, 568) + v8) + v12,
        FIELD_F32(a1, 592));
      if ( v13 >= v5 )
        break;
      v6 = FIELD_U32(a1, 620);
      v8 += 4;
      v9 = v13;
      v7 += 1396;
    }
  }
  v14 = FIELD_U32(a1, 504);
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v17 = FIELD_U8(a1, 4304);
      v18 = sub_6095DF8C;
      if ( FIELD_U8(a1, 4304) )
        v18 = (int (*)())sub_6095D2B8;
      result = 0;
      FIELD_U32(a1, 400) = v18;
      FIELD_U32(a1, 404) = 0;
      v16 = sub_6095E1E0;
      if ( v17 )
        v16 = (int (*)())sub_6095D50C;
    }
    else if ( v14 == 2 )
    {
      result = 0;
      FIELD_U32(a1, 400) = sub_6095E7A8;
      FIELD_U32(a1, 404) = 0;
      v16 = sub_6095E89C;
    }
    else
    {
      result = 0;
      FIELD_U32(a1, 400) = sub_6095E968;
      FIELD_U32(a1, 404) = 0;
      v16 = sub_6095E9C0;
    }
  }
  else
  {
    result = 0;
    FIELD_U32(a1, 400) = sub_6095E404;
    FIELD_U32(a1, 404) = 0;
    v16 = sub_6095E59C;
  }
  FIELD_U32(a1, 408) = v16;
  FIELD_U32(a1, 412) = 0;
  return result;
}
