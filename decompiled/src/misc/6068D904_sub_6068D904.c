/* sub_6068D904
 * address: 0x6068D904   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068D904(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  unsigned int v5; // r6
  float v6; // s0
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r2
  int v10; // r1

  v4 = FIELD_U32(a1, 6784);
  result = a1 + 6784;
  v3 = v4;
  if ( FIELD_U8(result, 48) )
  {
    v5 = v3 + 83230720 + (FIELD_U8(result, 48) << 22);
LABEL_3:
    *(_DWORD *)result = v5;
    LODWORD(v6) = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 19) & 0xFF0))
                                             + (float)((float)((float)((2 * v5) & 0xFFFFFE)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v5 >> 19) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 65536.0)
                             * 34.0);
    FIELD_U32(a1, 160) = LODWORD(v6) + FIELD_U32(a1, 6780);
    result = sub_606CA1A4(a1, v6);
    v7 = result;
    if ( result )
    {
      sub_606D465C(a1 + 108, a1 + 164);
      FIELD_U32(a1, 6100) = FIELD_U32(v7, 108);
      FIELD_U32(a1, 6104) = FIELD_U32(v7, 112);
      FIELD_U32(a1, 6108) = FIELD_U32(v7, 116);
      FIELD_F32(a1, 6112) = FIELD_F32(v7, 108) - FIELD_F32(v7, 584);
      FIELD_F32(a1, 6116) = FIELD_F32(v7, 112) - FIELD_F32(v7, 588);
      FIELD_F32(a1, 6120) = FIELD_F32(v7, 116) - FIELD_F32(v7, 592);
      v8 = FIELD_U32(a1, 164);
      FIELD_U32(a1, 6132) = v8;
      FIELD_F32(a1, 112) = FIELD_F32(a1, 6812) + FIELD_F32(a1, 112);
      result = FIELD_U32(a1, 6776) + v8;
      FIELD_U32(a1, 164) = result;
    }
    return result;
  }
  if ( !FIELD_U8(a1, 6826) )
  {
    if ( !v3 )
      return result;
    v5 = v3 + 83230720;
    if ( ((v3 + 83230720) ^ v3) < 0 )
      v5 = 0;
    goto LABEL_3;
  }
  if ( v3 || !FIELD_U8(a1, 6827) )
  {
    v9 = v3 + 83230720;
    v5 = v3 + 83230720;
    v10 = (v3 + 83230720) ^ v3;
    if ( FIELD_U8(a1, 6827) )
      v5 = 0;
    if ( v10 >= 0 )
      v5 = v9;
    goto LABEL_3;
  }
  return result;
}
