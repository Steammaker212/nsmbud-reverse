/* sub_607FDA34
 * address: 0x607FDA34   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FDA34(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  float v3; // s0
  float v4; // s0
  float result; // s0

  v1 = *(_DWORD *)a1 + 6549825;
  *(_DWORD *)a1 = v1;
  v2 = FIELD_U32(a1, 12) - 1;
  if ( v2 > 2 )
    v3 = 12.5;
  else
    v3 = flt_60B0D9D0[v2];
  v4 = v3
     * (float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
             + (float)((float)((float)(v1 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                     * 0.000000059605));
  FIELD_F32(a1, 4) = FIELD_F32(a1, 20) * v4;
  result = FIELD_F32(a1, 16) * v4;
  FIELD_F32(a1, 8) = result;
  return result;
}
