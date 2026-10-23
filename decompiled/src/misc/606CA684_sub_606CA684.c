/* sub_606CA684
 * address: 0x606CA684   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CA684(int a1, int a2, int a3)
{
  unsigned int v3; // r12
  int v4; // s0
  float *v5; // r12
  float v6; // s0

  v3 = FIELD_U32(a1, 6136) - FIELD_U32(a1, 6132);
  v4 = v3 & 0xFFFFFF;
  v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v6 = FIELD_F32(a1, 6112)
     + (float)((float)(FIELD_F32(a2, 108) - FIELD_F32(a1, 6100))
             - (float)((float)((float)(FIELD_F32(a2, 108) - FIELD_F32(a1, 6100))
                             * (float)(v5[2] + (float)((float)((float)(unsigned int)v4 * 0.000000059605) * v5[3])))
                     - (float)((float)(FIELD_F32(a2, 112) - FIELD_F32(a1, 6104))
                             * (float)(*v5 + (float)((float)((float)(unsigned int)v4 * 0.000000059605) * v5[1])))));
  if ( a3 )
    return v6 > 0.0;
  else
    return v6 < 0.0;
}
