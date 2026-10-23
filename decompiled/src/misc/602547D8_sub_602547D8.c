/* sub_602547D8
 * address: 0x602547D8   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602547D8(int result)
{
  int v1; // r2
  _DWORD *v2; // r12
  int v3; // r2
  int v4; // r3
  int v5; // r3
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s4
  float v10; // s2
  float v11; // s2
  float v12; // s4
  int v13; // r3
  float v14; // s2
  float v15; // s4
  int *v16; // r1
  float v17; // s12
  float v18; // s2
  float v19; // s4
  float v20; // s4
  float v21; // s2

  if ( FIELD_U8(dword_60C9CF0C, 1361) )
  {
    v1 = 10;
    FIELD_U32(result, 188) = 1;
    FIELD_U32(result, 192) = 10;
    v2 = (_DWORD *)(result + 192);
LABEL_4:
    v3 = v1 - 1;
    *v2 = v3;
    goto LABEL_5;
  }
  v2 = (_DWORD *)(result + 192);
  v1 = FIELD_U32(result, 192);
  if ( v1 )
    goto LABEL_4;
  v3 = 0;
LABEL_5:
  v4 = FIELD_U32(result, 188);
  if ( v4 == 2 )
  {
    v13 = v3;
    v14 = FIELD_F32(result, 200);
    v15 = FIELD_F32(result, 204);
    if ( v3 <= 1 )
      v13 = 1;
    v16 = &dword_60B3B98C;
    if ( !v3 )
      v16 = 0;
    v17 = 1.0 / (float)v13;
    FIELD_F32(result, 196) = FIELD_F32(result, 196) + (float)((float)(1.0 - FIELD_F32(result, 196)) * v17);
    FIELD_F32(result, 200) = v14 + (float)((float)(1.0 - v14) * v17);
    FIELD_F32(result, 204) = v15 + (float)(v17 * (float)(1.0 - v15));
    v18 = FIELD_F32(result, 212);
    v19 = FIELD_F32(result, 216);
    FIELD_F32(result, 208) = FIELD_F32(result, 208) + (float)((float)(1.0 - FIELD_F32(result, 208)) * v17);
    FIELD_F32(result, 212) = v18 + (float)((float)(1.0 - v18) * v17);
    FIELD_F32(result, 216) = v19 + (float)(v17 * (float)(1.0 - v19));
    v20 = FIELD_F32(result, 228);
    v21 = FIELD_F32(result, 224) + (float)((float)(1.0 - FIELD_F32(result, 224)) * v17);
    FIELD_F32(result, 220) = FIELD_F32(result, 220) + (float)((float)(1.0 - FIELD_F32(result, 220)) * v17);
    FIELD_F32(result, 224) = v21;
    FIELD_F32(result, 228) = v20 + (float)(v17 * (float)(1.0 - v20));
    if ( !v3 )
    {
      FIELD_U32(result, 188) = v16;
      *v2 = v16;
    }
  }
  else if ( v4 == 1 )
  {
    v5 = v3;
    v6 = FIELD_F32(result, 200);
    v7 = FIELD_F32(result, 204);
    if ( v3 <= 1 )
      v5 = 1;
    v8 = 1.0 / (float)v5;
    FIELD_F32(result, 196) = FIELD_F32(result, 196) + (float)((float)(1.0 - FIELD_F32(result, 196)) * v8);
    FIELD_F32(result, 200) = v6 + (float)((float)(1.25 - v6) * v8);
    FIELD_F32(result, 204) = v7 + (float)(v8 * (float)(1.25 - v7));
    v9 = FIELD_F32(result, 216) + (float)(v8 * (float)(1.75 - FIELD_F32(result, 216)));
    v10 = FIELD_F32(result, 212) + (float)((float)(1.75 - FIELD_F32(result, 212)) * v8);
    FIELD_F32(result, 208) = FIELD_F32(result, 208) + (float)((float)(1.25 - FIELD_F32(result, 208)) * v8);
    FIELD_F32(result, 212) = v10;
    FIELD_F32(result, 216) = v9;
    v11 = FIELD_F32(result, 224);
    v12 = FIELD_F32(result, 228);
    FIELD_F32(result, 220) = FIELD_F32(result, 220) + (float)((float)(1.5 - FIELD_F32(result, 220)) * v8);
    FIELD_F32(result, 224) = v11 + (float)((float)(1.5 - v11) * v8);
    FIELD_F32(result, 228) = v12 + (float)(v8 * (float)(1.5 - v12));
    if ( !v3 )
    {
      FIELD_U32(result, 188) = 2;
      *v2 = 10;
      return 10;
    }
  }
  else
  {
    FIELD_U32(result, 196) = 1065353216;
    FIELD_U32(result, 200) = 1065353216;
    FIELD_U32(result, 204) = 1065353216;
    FIELD_U32(result, 208) = 1065353216;
    FIELD_U32(result, 212) = 1065353216;
    FIELD_U32(result, 216) = 1065353216;
    FIELD_U32(result, 220) = 1065353216;
    FIELD_U32(result, 224) = 1065353216;
    FIELD_U32(result, 228) = 1065353216;
  }
  return result;
}
