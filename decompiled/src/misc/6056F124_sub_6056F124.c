/* sub_6056F124
 * address: 0x6056F124   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6056F124(int a1)
{
  float v1; // s0
  int v2; // r12
  int v3; // r5
  unsigned int v4; // r3
  float v5; // s10
  float *v6; // r2
  float v7; // s2
  float v8; // s4
  float v9; // s8

  v1 = FIELD_F32(a1, 108);
  v2 = dword_60CAE8B0;
  v3 = FIELD_U32(a1, 7424) + dword_60CAE8B0;
  FIELD_U32(a1, 7424) = v3;
  v4 = FIELD_U32(a1, 7420) + dword_60CAE8AC;
  FIELD_U32(a1, 7420) = v4;
  v5 = FIELD_F32(a1, 6980)
     + (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                     + (float)((float)((float)(v4 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                             * 0.000000059605))
             * 36.0);
  FIELD_F32(a1, 7396) = v5;
  FIELD_U32(a1, 7424) = v3 + v2;
  v6 = (float *)((char *)sinLutTable + (((unsigned int)(v3 + v2) >> 20) & 0xFF0));
  v7 = *v6;
  v8 = v6[1];
  FIELD_F32(a1, 108) = v5;
  v9 = FIELD_F32(a1, 7400);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7404);
  FIELD_F32(a1, 112) = v9
                       + (float)((float)(v7 + (float)((float)((float)((v3 + v2) & 0xFFFFFF) * v8) * 0.000000059605))
                               * 16.0);
  FIELD_U32(a1, 7432) = (float)(v5 - v1) < 0.0;
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
}
