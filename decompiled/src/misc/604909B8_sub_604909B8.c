/* sub_604909B8
 * address: 0x604909B8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604909B8(int a1)
{
  int v2; // r1
  int v3; // r2
  float v4; // s2
  float v5; // s0
  float v6; // s4
  int v7; // r0
  float v8; // s6
  int v9; // r3
  float v10; // s0
  int v11; // r2

  v2 = 0;
  v3 = FIELD_U32(a1, 72);
  v4 = FIELD_F32(a1, 88);
  v5 = FIELD_F32(a1, 96);
  v6 = FIELD_F32(v3, 28);
  FIELD_U32(a1, 76) = 0;
  v7 = FIELD_U32(a1, 84);
  if ( v7 >= 1 )
  {
    v8 = v4;
    v9 = 0;
    while ( 1 )
    {
      v8 = v5 + v8;
      if ( v6 > v8 )
        break;
      if ( ++v9 >= v7 )
      {
        v2 = 0;
        goto LABEL_11;
      }
    }
    v2 = v7 - 2;
    if ( v9 <= v7 - 2 )
      v2 = v9;
    if ( v9 < 0 )
      v2 = 0;
    FIELD_U32(a1, 76) = v2;
  }
LABEL_11:
  v10 = (float)(FIELD_F32(v3, 28) - (float)(v4 + (float)(v5 * (float)v2))) / v5;
  if ( v10 >= 0.0 )
  {
    if ( v10 > 1.0 )
      v10 = 1.0;
  }
  else
  {
    v10 = 0.0;
  }
  FIELD_F32(a1, 100) = v10;
  if ( v2 )
  {
    v11 = 3;
    if ( v2 < v7 - 2 )
    {
      v11 = 2;
      if ( v2 > FIELD_U32(a1, 80) )
        v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  FIELD_U32(a1, 60) = v11;
  sub_60505508(FIELD_U32(a1, 68));
  sub_60505730(FIELD_U32(a1, 68), FIELD_U32(a1, 60), FIELD_F32(a1, 100));
  FIELD_U8(a1, 64) = 1;
  FIELD_U8(a1, 66) = 1;
  return 1;
}
