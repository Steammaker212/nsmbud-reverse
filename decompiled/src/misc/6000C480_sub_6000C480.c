/* sub_6000C480
 * address: 0x6000C480   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000C480(int a1)
{
  int v2; // r9
  float *v3; // r7
  float v4; // r10
  float *v5; // r5
  float v6; // s2
  float v7; // s0
  float v8; // s2
  unsigned int result; // r0
  float v10; // s0
  float v11; // s0
  float *v12; // [sp+8h] [bp-50h]
  int v13; // [sp+Ch] [bp-4Ch]

  v2 = 1;
  v3 = (float *)(a1 + 100);
  v4 = FIELD_F32(a1, 100);
  v5 = (float *)(a1 + 40);
  v13 = FIELD_U32(a1, 104);
  v6 = FIELD_F32(a1, 136) * 0.70703;
  v7 = v6 + v4;
  FIELD_F32(a1, 92) = v6;
  FIELD_F32(a1, 96) = v6;
  FIELD_F32(a1, 100) = v6 + v4;
  v8 = (float)(FIELD_F32(a1, 120) + -16.0) + (float)((float)(v6 + v4) - FIELD_F32(a1, 116));
  FIELD_F32(a1, 104) = v8;
  v12 = (float *)(a1 + 116);
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v7 + *(v5 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(v8 + *v5) * 0.0625) * -16.0),
               FIELD_U8(a1, 141),
               1)
           & 0xFFFFFF;
    if ( result == 0x200001 )
      break;
    if ( v2 > 6 )
    {
      if ( *v3 < *v12 )
        return sub_60012FA4(a1, v12, 0);
      if ( *v3 >= (float)(*v12 + 16.0) )
        return sub_60012D5C(a1, v12, 0);
      return result;
    }
    v7 = FIELD_F32(a1, 100);
    v8 = FIELD_F32(a1, 104);
    v5 += 2;
    ++v2;
  }
  v10 = FIELD_F32(a1, 136);
  if ( !FIELD_U8(a1, 140) )
  {
    v10 = -v10;
    FIELD_F32(a1, 136) = v10;
    FIELD_U8(a1, 142) ^= 1u;
  }
  v11 = v10 * 0.70703;
  FIELD_U8(a1, 143) = 1;
  FIELD_F32(a1, 100) = v4;
  FIELD_U32(a1, 104) = v13;
  FIELD_F32(a1, 92) = v11;
  FIELD_F32(a1, 96) = v11;
  return 1;
}
