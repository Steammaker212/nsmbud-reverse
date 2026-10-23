/* sub_600AD290
 * address: 0x600AD290   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AD290(int a1)
{
  unsigned int v2; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
  v2 = FIELD_U32(a1, 7100) + dword_60C83110;
  FIELD_U32(a1, 7100) = v2;
  FIELD_F32(a1, 7108) = FIELD_F32(a1, 7104)
                        * (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                        + (float)((float)((float)(v2 & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                                * 0.000000059605))
                                + 1.0);
  return sub_600AF29C(a1);
}
