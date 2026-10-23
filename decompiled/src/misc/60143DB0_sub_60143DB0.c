/* sub_60143DB0
 * address: 0x60143DB0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60143DB0(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  float *v4; // r1
  float v5; // s0
  float v6; // s18
  float v7; // s16
  int result; // r0
  int v9; // r2
  float *v10; // r1
  float v11; // s0
  float v12; // s0

  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x1000) == 0 )
  {
    v3 = FIELD_U32(a1, 6248);
    v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v5 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
    v6 = v4[2] + (float)(v5 * v4[3]);
    v7 = *v4 + (float)(v4[1] * v5);
LABEL_3:
    FIELD_U32(a1, 128) = 0;
    FIELD_F32(a1, 120) = v6 * 0.85;
    FIELD_F32(a1, 124) = v7 * 0.85;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 96) = 0;
    return 1;
  }
  v9 = HIWORD(v2) & 3;
  v10 = *(float **)(PlayerMgr_instance + 4 * v9 + 32);
  result = 0;
  if ( v10 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v9)) != 0 )
  {
    v7 = (float)(v10[28] + v10[144]) - FIELD_F32(a1, 112);
    v6 = (float)(v10[27] + v10[143]) - FIELD_F32(a1, 108);
    v11 = sqrtf((float)(v7 * v7) + (float)(v6 * v6));
    if ( v11 > 0.0 )
    {
      v12 = 1.0 / v11;
      v7 = v7 * v12;
      v6 = v6 * v12;
    }
    goto LABEL_3;
  }
  return result;
}
