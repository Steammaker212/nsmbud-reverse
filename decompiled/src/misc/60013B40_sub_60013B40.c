/* sub_60013B40
 * address: 0x60013B40   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60013B40(int a1, float a2, float a3)
{
  int v5; // r8
  unsigned int v6; // r10
  float v7; // s0
  float *v8; // r6
  unsigned int v9; // r0
  int v10; // r9
  float *v17; // r0
  float v18; // s2
  float v19; // s4
  float v20; // s8
  float v21; // s0
  float v22; // s2
  StateMethodExecuter *result; // r0
  float v24; // s0
  float v25; // s0
  int v26; // [sp+4h] [bp-54h]
  float v27; // [sp+8h] [bp-50h] BYREF
  float v28; // [sp+Ch] [bp-4Ch]

  v5 = 1;
  v6 = FIELD_U32(a1, 132);
  v7 = FIELD_F32(a1, 136);
  v8 = (float *)(a1 + 40);
  v26 = FIELD_U32(a1, 104);
  v9 = (int)(float)((float)HIWORD(v6) + (float)(v7 * a3));
  v10 = FIELD_U32(a1, 100);
  _R1 = v9 << 16;
  FIELD_U32(a1, 132) = v9 << 16;
  __asm { UXTB16          R1, R1 }
  v17 = (float *)((char *)sinLutTable + ((v9 >> 4) & 0xFF0));
  v18 = (float)_R1 * 0.000000059605;
  v19 = *v17 + (float)(v17[1] * v18);
  v20 = v17[2] + (float)(v17[3] * v18);
  FIELD_F32(a1, 92) = -(float)(v7 * v19);
  FIELD_F32(a1, 96) = v7 * v20;
  v21 = FIELD_F32(a1, 124) + (float)(v20 * a2);
  v22 = FIELD_F32(a1, 128) + (float)(v19 * a2);
  FIELD_F32(a1, 100) = v21;
  FIELD_F32(a1, 104) = v22;
  while ( (sub_607160F4(
             TileMgr_instance,
             (int)(float)((float)(int)(float)((float)(v21 + *(v8 - 1)) * 0.0625) * 16.0),
             (unsigned __int16)(int)(float)((float)(int)(float)((float)(v22 + *v8) * 0.0625) * -16.0),
             FIELD_U8(a1, 141),
             1)
         & 0xFFFFFF) != 0x200001 )
  {
    if ( v5 > 6 )
    {
      result = *(StateMethodExecuter **)(a1 + 132);
      if ( (int)&FIELD_U32(result + (89478485) * 12, 0x4) < 0 )
      {
        FIELD_U32(a1, 92) = FIELD_U32(a1, 136);
        FIELD_U32(a1, 96) = 0;
        v25 = FIELD_F32(a1, 120);
        v27 = FIELD_F32(a1, 116);
        v28 = (float)(v25 - a2) + 16.0;
        return sub_60012FA4(a1, &v27, 0);
      }
      else if ( (int)result >= 0 )
      {
        FIELD_U32(a1, 92) = 0;
        FIELD_U32(a1, 96) = FIELD_U32(a1, 136);
        v24 = FIELD_F32(a1, 116);
        v28 = FIELD_F32(a1, 120);
        v27 = (float)(v24 + a2) + -16.0;
        return sub_60012D5C(a1, &v27, 0);
      }
      return result;
    }
    v21 = FIELD_F32(a1, 100);
    v22 = FIELD_F32(a1, 104);
    v8 += 2;
    ++v5;
  }
  if ( !FIELD_U8(a1, 140) )
  {
    FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
    FIELD_U8(a1, 142) ^= 1u;
  }
  FIELD_U8(a1, 143) = 1;
  FIELD_U32(a1, 132) = v6;
  FIELD_U32(a1, 100) = v10;
  FIELD_U32(a1, 104) = v26;
  FIELD_F32(a1, 92) = -FIELD_F32(a1, 92);
  FIELD_F32(a1, 96) = -FIELD_F32(a1, 96);
  return (StateMethodExecuter *)v26;
}
