/* sub_60418548
 * address: 0x60418548   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418548(int a1, float a2)
{
  float v2; // s4
  float v3; // s6
  int v5; // r2
  int v6; // r1
  float v7; // s2
  float v8; // s0
  float v9; // s8
  float v10; // s10
  float v11; // s0
  int v12; // r1
  bool v13; // fnf

  v2 = *(float *)a1;
  v3 = FIELD_F32(a1, 4);
  if ( *(float *)a1 == v3 )
    return v2 == a2;
  v5 = FIELD_U32(a1, 24);
  v6 = 0;
  if ( (v5 & 2) != 0 )
    return v6;
  v7 = *(float *)a1;
  if ( v2 <= a2 )
  {
    v7 = a2;
    if ( v3 < a2 )
      v7 = FIELD_F32(a1, 4);
  }
  v8 = FIELD_F32(a1, 16);
  v9 = *(float *)a1;
  if ( v8 >= v2 )
  {
    v9 = FIELD_F32(a1, 16);
    if ( v8 > v3 )
      v9 = FIELD_F32(a1, 4);
  }
  v10 = FIELD_F32(a1, 20);
  v11 = v9 + v10;
  if ( (v5 & 1) == 0 )
  {
    if ( v11 >= v2 )
    {
      v2 = v9 + v10;
      if ( v11 > v3 )
        v2 = FIELD_F32(a1, 4);
    }
    if ( v10 >= 0.0 )
      return v9 <= v7 && v7 < v2;
    else
      return v9 >= v7 && v7 > v2;
  }
  if ( v10 >= 0.0 )
  {
    if ( v9 > v7 || (v6 = 1, v7 >= v11) )
    {
      v6 = 0;
      if ( v3 <= v11 )
      {
        v12 = 0;
        v13 = v7 < (float)(v11 - (float)(v3 - FIELD_F32(a1, 8)));
        goto LABEL_27;
      }
    }
    return v6;
  }
  if ( v7 <= v9 )
  {
    v6 = 1;
    if ( v11 < v7 )
      return v6;
  }
  v6 = 0;
  if ( v11 > v2 )
    return v6;
  v12 = 0;
  v13 = (float)(v11 + (float)(FIELD_F32(a1, 12) - v2)) < v7;
LABEL_27:
  if ( v13 )
    return 1;
  return v12;
}
