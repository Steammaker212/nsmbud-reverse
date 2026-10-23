/* sub_60193558
 * address: 0x60193558   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60193558(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s20
  float v5; // s0
  float v6; // s2
  float v7; // s4

  v2 = FIELD_F32(a1, 36);
  v3 = FIELD_F32(a1, 40);
  v4 = FIELD_F32(a1, 44);
  sub_608332CC(a1 + 36, a1 + 24, FIELD_F32(a1, 4), FIELD_F32(a1, 8), FIELD_F32(a1, 12));
  v5 = FIELD_F32(a1, 36);
  v6 = FIELD_F32(a1, 40);
  v7 = FIELD_F32(a1, 44);
  FIELD_F32(a1, 48) = v5 - v2;
  FIELD_F32(a1, 52) = v6 - v3;
  FIELD_F32(a1, 56) = v7 - v4;
  if ( (float)(FIELD_F32(a1, 20) * FIELD_F32(a1, 16)) >= sqrtf(
                                                               (float)((float)((float)(v6 - FIELD_F32(a1, 28))
                                                                             * (float)(v6 - FIELD_F32(a1, 28)))
                                                                     + (float)((float)(v5 - FIELD_F32(a1, 24))
                                                                             * (float)(v5 - FIELD_F32(a1, 24))))
                                                             + (float)((float)(v7 - FIELD_F32(a1, 32))
                                                                     * (float)(v7 - FIELD_F32(a1, 32)))) )
    FIELD_U8(a1, 60) = 0;
}
