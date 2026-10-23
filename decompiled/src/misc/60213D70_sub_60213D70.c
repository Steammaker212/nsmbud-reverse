/* sub_60213D70
 * address: 0x60213D70   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60213D70(int a1)
{
  unsigned int v1; // r1
  float v2; // s0
  float result; // s0

  v1 = FIELD_U32(a1, 428) + 0x2000000;
  FIELD_U32(a1, 428) = v1;
  v2 = (float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
             + (float)((float)((float)(v1 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 12.0;
  FIELD_F32(a1, 432) = v2;
  result = FIELD_F32(a1, 404) + v2;
  FIELD_F32(a1, 84) = result;
  return result;
}
