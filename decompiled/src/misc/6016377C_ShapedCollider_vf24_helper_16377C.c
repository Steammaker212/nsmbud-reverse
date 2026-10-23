/* ShapedCollider_vf24_helper_16377C
 * address: 0x6016377C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ShapedCollider_vf24_helper_16377C(int a1, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r2
  int v6; // r12
  float v7; // s0

  v4 = 0;
  if ( FIELD_U32(a2, 2332) != a4
    || !FIELD_U8(a3, 3)
    || FIELD_U8(a3, 1)
    || (*(_BYTE *)(a2 + 8 * a4 + 2530) & 1) != 0
    || FIELD_U32(a1, 244) != FIELD_U32(a1, 248) )
  {
    return v4;
  }
  v5 = FIELD_U32(a3, 8);
  v6 = a4 ^ 1;
  if ( v5 != dword_60AF76E8[a4] && v5 != dword_60AF76E8[v6]
    || ((*(_DWORD *)(a2 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(a2 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(a2 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0 )
  {
    return 0;
  }
  v4 = 1;
  v7 = (float)(*(float *)(FIELD_U32(a2, 2196) + 108) - *(float *)(FIELD_U32(a2, 2196) + 584))
     - (float)((float)((float)((float)(**(float **)(a1 + 152) + FIELD_F32(a1, 172)) + FIELD_F32(a1, 204))
                     + FIELD_F32(a1, 128))
             - (float)(FIELD_F32(a1, 128)
                     + (float)((float)(**(float **)(a1 + 156) + FIELD_F32(a1, 180)) + FIELD_F32(a1, 212))));
  if ( !a4 && v7 < 0.0 )
    return v4;
  if ( a4 != 1 )
    return 0;
  if ( v7 <= 0.0 )
    return 0;
  return v4;
}
