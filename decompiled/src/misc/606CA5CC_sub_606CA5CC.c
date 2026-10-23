/* sub_606CA5CC
 * address: 0x606CA5CC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CA5CC(int a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r12

  v2 = FIELD_U32(a1, 6136) - FIELD_U32(a1, 6132);
  v3 = (v2 >> 20) & 0xFF0;
  return (float)(FIELD_F32(a1, 6116)
               + (float)((float)(FIELD_F32(a2, 112) - FIELD_F32(a1, 6104))
                       - (float)((float)((float)(FIELD_F32(a2, 112) - FIELD_F32(a1, 6104))
                                       * (float)(*(float *)((char *)&sinLutTable[2] + v3)
                                               + (float)((float)((float)(v2 & 0xFFFFFF) * 0.000000059605)
                                                       * *(float *)((char *)&sinLutTable[3] + v3))))
                               + (float)((float)(FIELD_F32(a2, 108) - FIELD_F32(a1, 6100))
                                       * (float)(*(float *)((char *)sinLutTable + v3)
                                               + (float)((float)((float)(v2 & 0xFFFFFF) * 0.000000059605)
                                                       * *(float *)((char *)&sinLutTable[1] + v3))))))) < 0.0;
}
