/* sub_608AF328
 * address: 0x608AF328   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF328(int result, int a2, int a3)
{
  unsigned int v3; // r12
  float v4; // s2
  float v5; // s0
  int v6; // r1
  int v7; // r2
  char v8; // r2
  char v9; // r12
  int v10; // s2
  float v11; // s2
  float v12; // s0
  int v13; // r1
  int v14; // r2
  int v15; // r1

  v3 = FIELD_U8(result, 205);
  if ( a2 == 1 )
  {
    if ( v3 > 3 || v3 == 2 )
      return result;
    v4 = (float)a3;
    v5 = FIELD_F32(result, 156);
    v6 = FIELD_U32(result, 160);
    v7 = FIELD_U32(result, 164);
    if ( v7 < v6 )
      v5 = FIELD_F32(result, 152) + (float)((float)((float)v7 * (float)(v5 - FIELD_F32(result, 152))) / (float)v6);
    v8 = 0;
    v9 = 1;
    v10 = (int)(float)(v4 * v5);
    FIELD_F32(result, 152) = v5;
    FIELD_U32(result, 156) = 0;
  }
  else
  {
    if ( (unsigned __int8)(v3 - 1) > 2u )
      return result;
    v11 = (float)a3;
    v12 = FIELD_F32(result, 156);
    v13 = FIELD_U32(result, 160);
    v14 = FIELD_U32(result, 164);
    if ( v14 < v13 )
      v12 = FIELD_F32(result, 152)
          + (float)((float)((float)v14 * (float)(v12 - FIELD_F32(result, 152))) / (float)v13);
    v9 = 3;
    v10 = (int)(float)(v11 * (float)(1.0 - v12));
    FIELD_F32(result, 152) = v12;
    FIELD_U32(result, 156) = 1065353216;
    v8 = 1;
  }
  v15 = v10;
  if ( v10 <= 1 )
    v15 = 1;
  FIELD_U32(result, 160) = v15;
  FIELD_U32(result, 164) = 0;
  FIELD_U8(result, 205) = v9;
  FIELD_U8(result, 189) = v8;
  FIELD_U32(result, 192) = 0;
  return result;
}
