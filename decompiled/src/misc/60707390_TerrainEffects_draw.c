/* TerrainEffects_draw
 * address: 0x60707390   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall TerrainEffects_draw(int a1)
{
  int v2; // r2
  unsigned int result; // r0
  float v4; // s0
  float v5; // s2
  int v6; // r6
  int v7; // r1
  int v8; // r7
  int v9; // r0
  float v10; // s2
  float v11; // s0

  v2 = FIELD_U8(a1, 232);
  result = FIELD_U32(dword_60C99DD4, 764);
  if ( v2 == 3
    || FIELD_F32(a1, 16) >= (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                    + -16.0) )
  {
    v4 = FIELD_F32(dword_60CC6484, 112);
    v5 = FIELD_F32(a1, 12);
    if ( v5 <= (float)((float)(v4 + FIELD_F32(dword_60CC6484, 104)) + 8.0)
      && (float)(v5 + FIELD_F32(a1, 144)) >= (float)(v4 + -8.0) )
    {
      if ( result == 3 )
        ((void (__fastcall *)(int, int))loc_60706EA0)(a1, dword_60CC6484);
      v6 = FIELD_U32(a1, 164);
      v7 = FIELD_U32(a1, 168);
      if ( v6 < v7 )
      {
        v8 = 8 * v6 + 156;
        do
        {
          v9 = FIELD_U32(a1, 4);
          v10 = FIELD_F32(dword_60CC6484, 112);
          v11 = FIELD_F32(a1, 36) + (float)(*(float *)(v9 + v8) * FIELD_F32(a1, 160));
          if ( v11 <= (float)((float)(v10 + FIELD_F32(dword_60CC6484, 104)) + 8.0)
            && (float)(v11 + 2.0) >= (float)(v10 + -8.0) )
          {
            TerrainEffects_draw_helper(v9);
            v7 = FIELD_U32(a1, 168);
          }
          ++v6;
          v8 += 8;
        }
        while ( v6 < v7 );
      }
      result = (unsigned __int8)(FIELD_U8(a1, 232) - 1);
      if ( result < 2 )
        return sub_6044E360(*(float **)(a1 + 8));
    }
  }
  return result;
}
