/* sub_605FD008
 * address: 0x605FD008   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FD008(int result)
{
  int v1; // r2
  int v2; // r12
  unsigned int v3; // r1
  float *v4; // r2
  float v5; // s2
  float v6; // s6
  float v7; // s0
  float v8; // s4
  float v9; // s0
  float v10; // s8
  int v11; // r2
  float v12; // s12
  int v13; // r1
  unsigned int v14; // r1
  float *v15; // r2
  float v16; // s0
  int v17; // r3
  float v18; // s8
  float v19; // s12
  int v20; // r2
  int v21; // r12

  if ( FIELD_U8(result, 6869) )
  {
    FIELD_U32(result, 144) = FIELD_U32(result, 6828);
    FIELD_U32(result, 148) = 1056964608;
    FIELD_U32(result, 152) = 1065353216;
    v1 = FIELD_U32(result, 112);
    v2 = FIELD_U32(result, 108);
    FIELD_U32(result, 6844) = FIELD_U32(result, 116);
    FIELD_U32(result, 6840) = v1;
    FIELD_U32(result, 6836) = v2;
    v3 = FIELD_U32(result, 164);
    v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v5 = *v4;
    v6 = v4[2];
    v7 = (float)(v3 & 0xFFFFFF);
    v8 = v7 * v4[1];
    v9 = v7 * v4[3];
    v10 = FIELD_F32(result, 6864);
    v11 = FIELD_U32(result, 116);
    v12 = FIELD_F32(result, 112) - (float)(v10 * (float)(v6 + (float)(v9 * 0.000000059605)));
    FIELD_F32(result, 6848) = FIELD_F32(result, 108) + (float)(v10 * (float)(v5 + (float)(v8 * 0.000000059605)));
    FIELD_F32(result, 6852) = v12;
    FIELD_U32(result, 6856) = v11;
    v13 = 0;
  }
  else
  {
    FIELD_U32(result, 144) = FIELD_U32(result, 6832);
    FIELD_U32(result, 148) = 1056964608;
    FIELD_U32(result, 152) = 1065353216;
    v14 = FIELD_U32(result, 164);
    v15 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
    v16 = (float)(v14 & 0xFFFFFF);
    v17 = FIELD_U32(result, 116);
    v18 = FIELD_F32(result, 6864);
    v19 = FIELD_F32(result, 112) + (float)(v18 * (float)(v15[2] + (float)((float)(v16 * v15[3]) * 0.000000059605)));
    FIELD_F32(result, 6836) = FIELD_F32(result, 108)
                              - (float)(v18 * (float)(*v15 + (float)((float)(v16 * v15[1]) * 0.000000059605)));
    FIELD_F32(result, 6840) = v19;
    FIELD_U32(result, 6844) = v17;
    v20 = FIELD_U32(result, 112);
    v21 = FIELD_U32(result, 108);
    FIELD_U32(result, 6856) = FIELD_U32(result, 116);
    FIELD_U32(result, 6852) = v20;
    FIELD_U32(result, 6848) = v21;
    v13 = 1;
  }
  FIELD_U32(result, 6876) = v13;
  return result;
}
