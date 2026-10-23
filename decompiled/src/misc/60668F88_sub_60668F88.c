/* sub_60668F88
 * address: 0x60668F88   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60668F88(int result)
{
  unsigned int v1; // r1
  _DWORD *v2; // r12
  float *v3; // r3
  _DWORD *v4; // lr
  int v5; // r2
  float v6; // s0
  float *v7; // r6
  float v8; // s4
  float v9; // s6

  v1 = FIELD_U32(result, 164) + FIELD_U32(result, 6220);
  FIELD_U32(result, 164) = v1;
  v2 = (_DWORD *)(result + 6224);
  if ( FIELD_S32(result, 6224) >= 1 )
  {
    v3 = (float *)(result + 6160);
    v4 = (_DWORD *)(result + 6236);
    result += 6204;
    v5 = 0;
    v6 = *(float *)result;
    do
    {
      ++v5;
      v7 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
      v8 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
      v9 = *v7 + (float)(v7[1] * v8);
      *(v3 - 1) = v6 * (float)(v7[2] + (float)(v8 * v7[3]));
      v6 = *(float *)result;
      *v3 = v9 * *(float *)result;
      v3 += 2;
      v1 += *v4;
    }
    while ( v5 < *v2 );
  }
  return result;
}
