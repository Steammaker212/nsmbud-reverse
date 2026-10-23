/* sub_60378D34
 * address: 0x60378D34   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60378D34(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  float v5; // s0
  _BOOL4 result; // r0

  v2 = sub_60377B20(dword_60C96478, *(_DWORD *)a1, FIELD_U32(a1, 12));
  sub_60377B20(dword_60C96478, FIELD_U32(a1, 4), FIELD_U32(a1, 16));
  v3 = FIELD_U32(a1, 28);
  v4 = FIELD_U32(a1, 8);
  if ( v4 >= 2 )
    v4 = 0;
  v5 = FIELD_F32(v3, 108) - FIELD_F32(v2, 16);
  if ( *(_DWORD *)(v2 + 8 * v4) != 22 )
    return (float)((float)((float)(FIELD_F32(v3, 112) - FIELD_F32(v2, 20)) * FIELD_F32(a1, 24))
                 + (float)(v5 * FIELD_F32(a1, 20))) >= (float)((float)((float)(-0.021205 * 5592400.0) * 0.000000059605)
                                                               + -0.4929)
        && (FIELD_U8(v3, 6320) & 1) != 0;
  result = 1;
  if ( fabsf(v5) >= 4.0 )
    return (float)((float)((float)(FIELD_F32(v3, 112) - FIELD_F32(v2, 20)) * FIELD_F32(a1, 24))
                 + (float)(v5 * FIELD_F32(a1, 20))) >= (float)((float)((float)(-0.021205 * 5592400.0) * 0.000000059605)
                                                               + -0.4929)
        && (FIELD_U8(v3, 6320) & 1) != 0;
  return result;
}
