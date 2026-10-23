/* sub_6061C4A0
 * address: 0x6061C4A0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C4A0(int result)
{
  int v1; // r12
  unsigned int v2; // r1
  unsigned int v3; // r3
  int v4; // t1
  unsigned int v5; // r1

  v1 = FIELD_U8(result, 6912);
  if ( FIELD_U8(result, 6912) )
  {
    v2 = FIELD_U32(result, 6888) + FIELD_U32(result, 6900);
    FIELD_U32(result, 6900) = v2;
    FIELD_U32(result, 156) = (int)(float)((float)FIELD_S32(result, 6876)
                                           * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                                   + (float)((float)((float)(v2 & 0xFFFFFF)
                                                                   * *(float *)((char *)&sinLutTable[1]
                                                                              + ((v2 >> 20) & 0xFF0)))
                                                           * 0.000000059605)));
  }
  v3 = FIELD_U32(result, 6892) + FIELD_U32(result, 6904);
  FIELD_U32(result, 6904) = v3;
  FIELD_U32(result, 160) = (int)(float)((float)FIELD_S32(result, 6880)
                                         * (float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                                                 + (float)((float)((float)(v3 & 0xFFFFFF)
                                                                 * *(float *)((char *)&sinLutTable[1]
                                                                            + ((v3 >> 20) & 0xFF0)))
                                                         * 0.000000059605)));
  if ( v1 )
  {
    v4 = FIELD_U32(result, 6908);
    result += 6908;
    v5 = *(_DWORD *)(result - 12) + v4;
    *(_DWORD *)result = v5;
    *(_DWORD *)(result - 6744) = (int)(float)((float)*(int *)(result - 24)
                                            * (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                                    + (float)((float)((float)(v5 & 0xFFFFFF)
                                                                    * *(float *)((char *)&sinLutTable[1]
                                                                               + ((v5 >> 20) & 0xFF0)))
                                                            * 0.000000059605)));
  }
  return result;
}
