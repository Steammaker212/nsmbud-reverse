/* sub_601015CC
 * address: 0x601015CC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601015CC(int a1)
{
  float *v1; // r0
  int v2; // t1
  int v3; // r1
  unsigned int v4; // r2
  float *v5; // r2
  float result; // s0

  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    v2 = FIELD_U32(a1, 9420);
    v1 = (float *)(a1 + 9420);
    v3 = v2 + dword_60C86024;
    v4 = ((unsigned int)(v2 + dword_60C86024) >> 20) & 0xFF0;
    *(_DWORD *)v1 = v2 + dword_60C86024;
    v5 = (float *)((char *)sinLutTable + v4);
    result = (float)(v3 & 0xFFFFFF) * v5[1];
    *(v1 - 2327) = *(v1 - 652) + (float)((float)(*v5 + (float)(result * 0.000000059605)) * 16.0);
  }
  return result;
}
