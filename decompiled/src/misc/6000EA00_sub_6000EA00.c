/* sub_6000EA00
 * address: 0x6000EA00   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000EA00(int a1)
{
  int v2; // r8
  unsigned int v3; // r10
  float v4; // s2
  float *v5; // r6
  unsigned int v6; // r0
  int v7; // r9
  float *v14; // r0
  float v15; // s0
  float v16; // s4
  float v17; // s8
  float v18; // s0
  float v19; // s2
  unsigned int result; // r0
  int v21; // [sp+4h] [bp-44h]

  v2 = 1;
  v3 = FIELD_U32(a1, 132);
  v4 = FIELD_F32(a1, 136);
  v5 = (float *)(a1 + 40);
  v21 = FIELD_U32(a1, 104);
  v6 = (int)(float)((float)HIWORD(v3) + (float)(v4 * 1303.8));
  v7 = FIELD_U32(a1, 100);
  _R1 = v6 << 16;
  FIELD_U32(a1, 132) = v6 << 16;
  __asm { UXTB16          R1, R1 }
  v14 = (float *)((char *)sinLutTable + ((v6 >> 4) & 0xFF0));
  v15 = (float)_R1 * 0.000000059605;
  v16 = *v14 + (float)(v14[1] * v15);
  v17 = v14[2] + (float)(v14[3] * v15);
  FIELD_F32(a1, 92) = -(float)(v4 * v16);
  FIELD_F32(a1, 96) = v4 * v17;
  v18 = FIELD_F32(a1, 124) + (float)(v17 * 8.0);
  v19 = FIELD_F32(a1, 128) + (float)(v16 * 8.0);
  FIELD_F32(a1, 100) = v18;
  FIELD_F32(a1, 104) = v19;
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v18 + *(v5 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(v19 + *v5) * 0.0625) * -16.0),
               FIELD_U8(a1, 141),
               1)
           & 0xFFFFFF;
    if ( result == 0x200001 )
      break;
    if ( v2 > 6 )
      return result;
    v18 = FIELD_F32(a1, 100);
    v19 = FIELD_F32(a1, 104);
    v5 += 2;
    ++v2;
  }
  if ( !FIELD_U8(a1, 140) )
  {
    FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
    FIELD_U8(a1, 142) ^= 1u;
  }
  FIELD_U8(a1, 143) = 1;
  FIELD_U32(a1, 132) = v3;
  FIELD_U32(a1, 100) = v7;
  FIELD_U32(a1, 104) = v21;
  FIELD_F32(a1, 92) = -FIELD_F32(a1, 92);
  FIELD_F32(a1, 96) = -FIELD_F32(a1, 96);
  return v21;
}
