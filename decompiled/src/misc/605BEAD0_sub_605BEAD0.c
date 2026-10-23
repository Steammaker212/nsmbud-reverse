/* sub_605BEAD0
 * address: 0x605BEAD0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605BEAD0(int a1)
{
  unsigned int v2; // r5
  float v3; // s16
  unsigned int v4; // r0
  unsigned int v5; // r0
  float result; // s0

  v2 = FIELD_U8(a1, 81);
  if ( FIELD_U8(a1, 81) )
  {
    if ( v2 == 1 )
      v3 = 1.25;
    else
      v3 = (float)((float)(v2 - 1) + (float)(v2 - 1)) + 1.25;
  }
  else
  {
    v3 = 0.0;
  }
  if ( v2 > FIELD_U8(a1, 82) )
    FIELD_U32(a1, 24) += FIELD_U32(a1, 52);
  if ( FIELD_U8(a1, 80) )
  {
    if ( (unsigned int)(FIELD_U32(a1, 28) + 0x3FFFFFF) <= 0x7FFFFFE
      && (unsigned int)(FIELD_U32(a1, 24) + 0x7FFFFF) <= 0xFFFFFE )
    {
      FIELD_U32(a1, 24) = 0x1000000;
    }
    FIELD_U8(a1, 80) = 0;
  }
  sub_608337E0(a1 + 24);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 76, v3, 0.125, 2.0, 0.125);
  v4 = FIELD_U32(a1, 60) + 0x800000;
  FIELD_U32(a1, 60) = v4;
  FIELD_F32(a1, 72) = (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                                      + (float)((float)((float)(v4 & 0xFFFFFF)
                                                      * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                                              * 0.000000059605))
                              * 0.5)
                      - FIELD_F32(a1, 76);
  FIELD_F32(a1, 72) = sub_608336CC(a1) + FIELD_F32(a1, 72);
  v5 = FIELD_U32(a1, 64) + 50331648;
  FIELD_U32(a1, 64) = v5;
  LODWORD(result) = (int)(float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                       + (float)((float)((float)(v5 & 0xFFFFFF)
                                                       * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                               * 0.000000059605))
                               * 6553600.0);
  FIELD_F32(a1, 68) = result;
  FIELD_U8(a1, 82) = v2;
  return result;
}
