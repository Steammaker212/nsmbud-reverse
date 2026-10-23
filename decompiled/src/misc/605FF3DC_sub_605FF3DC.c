/* sub_605FF3DC
 * address: 0x605FF3DC   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FF3DC(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r12
  unsigned int v4; // r1
  float *v5; // r2
  float v6; // s0
  int v7; // r3
  float v8; // s4
  float v9; // s12
  int v10; // r1
  int v11; // r1
  unsigned int v12; // r1
  float *v13; // r2
  float v14; // s2
  float v15; // s6
  float v16; // s0
  float v17; // s8
  float v18; // s0
  float v19; // s4
  int v20; // r2
  float v21; // s12
  int v22; // r2
  int v23; // r12

  if ( FIELD_U8(result, 6877) )
  {
    v1 = FIELD_U32(result, 6832);
    FIELD_U32(result, 144) = 1056964608;
    FIELD_U32(result, 148) = v1;
    FIELD_U32(result, 152) = 1065353216;
    v2 = FIELD_U32(result, 112);
    v3 = FIELD_U32(result, 108);
    FIELD_U32(result, 6852) = FIELD_U32(result, 116);
    FIELD_U32(result, 6848) = v2;
    FIELD_U32(result, 6844) = v3;
    v4 = FIELD_U32(result, 164);
    v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v6 = (float)(v4 & 0xFFFFFF);
    v7 = FIELD_U32(result, 116);
    v8 = FIELD_F32(result, 6872);
    v9 = FIELD_F32(result, 112) + (float)(v8 * (float)(*v5 + (float)((float)(v6 * v5[1]) * 0.000000059605)));
    FIELD_F32(result, 6856) = FIELD_F32(result, 108)
                              + (float)(v8 * (float)(v5[2] + (float)((float)(v6 * v5[3]) * 0.000000059605)));
    FIELD_F32(result, 6860) = v9;
    FIELD_U32(result, 6864) = v7;
    v10 = 0;
  }
  else
  {
    v11 = FIELD_U32(result, 6836);
    FIELD_U32(result, 144) = 1056964608;
    FIELD_U32(result, 148) = v11;
    FIELD_U32(result, 152) = 1065353216;
    v12 = FIELD_U32(result, 164);
    v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
    v14 = *v13;
    v15 = v13[2];
    v16 = (float)(v12 & 0xFFFFFF);
    v17 = v16 * v13[3];
    v18 = v16 * v13[1];
    v19 = FIELD_F32(result, 6872);
    v20 = FIELD_U32(result, 116);
    v21 = FIELD_F32(result, 112) - (float)(v19 * (float)(v14 + (float)(v18 * 0.000000059605)));
    FIELD_F32(result, 6844) = FIELD_F32(result, 108) - (float)(v19 * (float)(v15 + (float)(v17 * 0.000000059605)));
    FIELD_F32(result, 6848) = v21;
    FIELD_U32(result, 6852) = v20;
    v22 = FIELD_U32(result, 112);
    v23 = FIELD_U32(result, 108);
    FIELD_U32(result, 6864) = FIELD_U32(result, 116);
    FIELD_U32(result, 6860) = v22;
    FIELD_U32(result, 6856) = v23;
    v10 = 1;
  }
  FIELD_U32(result, 6884) = v10;
  return result;
}
