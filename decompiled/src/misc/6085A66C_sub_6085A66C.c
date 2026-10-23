/* sub_6085A66C
 * address: 0x6085A66C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6085A66C(int a1, int a2)
{
  _DWORD *v3; // r6
  unsigned int v4; // r2
  unsigned int result; // r0
  unsigned int v6; // r5
  bool v7; // cf
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r1
  float v11; // s2
  _WORD v12[10]; // [sp+4h] [bp-14h] BYREF

  v3 = *(_DWORD **)(a1 + 172);
  v4 = v3[3];
  result = v3[4];
  v6 = result & 3;
  v7 = v6 >= (v4 & 3);
  if ( v6 < (v4 & 3) )
  {
    v4 = (v4 >> 4) & 3;
    result = (result >> 4) & 3;
    v7 = result >= v4;
  }
  if ( !v7 )
  {
    sub_6085C2D4(v3[5] + 8 * v6, a2, v4);
    v3[4] = ((unsigned __int8)v3[4] + 1) & 3 | (4 * (v3[4] >> 2));
    *(_DWORD *)(FIELD_U32(a1, 172) + 16) = *(_DWORD *)(FIELD_U32(a1, 172) + 16) & 0xFFFFFFCF
                                            | (16 * (*(_DWORD *)(FIELD_U32(a1, 172) + 16) & 3));
    v8 = *(_DWORD *)(FIELD_U32(a1, 172) + 20)
       + ((8 * *(_DWORD *)(FIELD_U32(a1, 172) + 12)) & 0x18)
       + 4
       * ((*(_DWORD *)(FIELD_U32(a1, 172) + 12) >> 2) & 3 | (4 * ((*(_DWORD *)(FIELD_U32(a1, 172) + 12) >> 2) & 3)));
    *(_DWORD *)(v8 + 16 * v6) = 0;
    v9 = v8 + 16 * v6;
    FIELD_U32(v9, 8) = 0;
    FIELD_U32(v9, 12) = 0;
    result = sub_60865030(a1 + 192, *(_DWORD *)(FIELD_U32(a1, 172) + 16) & 3);
    if ( FIELD_F32(a1, 56) == 0.0 && FIELD_F32(a1, 60) == 0.0 )
    {
      result = FIELD_U32(a1, 172);
      if ( (FIELD_U32(result, 16) & 3) == 1 )
      {
        v10 = *(_DWORD *)(FIELD_U32(result, 20) + 4);
        if ( v10 )
        {
          (*(void (__fastcall **)(_WORD *))(*(_DWORD *)v10 + 16))(v12);
          v11 = (float)v12[1];
          FIELD_F32(a1, 56) = (float)v12[0];
          FIELD_F32(a1, 60) = v11;
        }
        else
        {
          FIELD_U32(a1, 56) = 0;
          FIELD_U32(a1, 60) = 0;
        }
        result = FIELD_U8(a1, 64) | 0x10;
        FIELD_U8(a1, 64) = result;
      }
    }
  }
  return result;
}
