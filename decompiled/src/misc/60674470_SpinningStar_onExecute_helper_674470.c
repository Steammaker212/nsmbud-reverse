/* SpinningStar_onExecute_helper_674470
 * address: 0x60674470   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SpinningStar_onExecute_helper_674470(int a1, float *a2)
{
  unsigned int v2; // r2
  float v3; // s8
  float result; // s0

  *a2 = *(float *)a1;
  a2[1] = FIELD_F32(a1, 4);
  a2[2] = FIELD_F32(a1, 8);
  if ( FIELD_U8(a1, 16) )
  {
    --FIELD_U8(a1, 16);
    v2 = FIELD_U32(a1, 12) + 0x10000000;
    FIELD_U32(a1, 12) = v2;
    v3 = 0.05
       - (float)((float)(*(float *)((char *)&sinLutTable[2] + ((v2 >> 20) & 0xFF0))
                       + (float)((float)((float)(v2 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[3] + ((v2 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 0.05);
    *a2 = *a2 + v3;
    result = a2[1] + v3;
    a2[1] = result;
  }
  return result;
}
