/* sub_602E6F88
 * address: 0x602E6F88   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6F88(int result)
{
  int v1; // r1
  unsigned int v2; // r2
  float *v3; // r12
  int v4; // r1
  unsigned int v5; // r2
  float *v6; // r12

  v1 = FIELD_U8(result, 12);
  if ( v1 == 2 )
  {
    v5 = FIELD_U32(result, 8);
    v6 = *(float **)result;
    FIELD_F32(result, 4) = (float)(**(float **)result + 1.0)
                           - (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                   + (float)((float)((float)(v5 & 0xFFFFFF)
                                                   * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                           * 0.000000059605));
    FIELD_U32(result, 8) = v5 + *((_DWORD *)v6 + 1);
  }
  else if ( v1 == 1 )
  {
    v2 = FIELD_U32(result, 8);
    v3 = *(float **)result;
    FIELD_F32(result, 4) = **(float **)result
                           * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                   + (float)((float)((float)(v2 & 0xFFFFFF)
                                                   * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                           * 0.000000059605));
    v4 = v2 + *((_DWORD *)v3 + 1);
    FIELD_U32(result, 8) = v4;
    if ( v4 >= 0x40000000 )
      FIELD_U8(result, 12) = 2;
  }
  return result;
}
