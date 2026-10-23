/* sub_60185834
 * address: 0x60185834   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60185834(int a1)
{
  unsigned int v2; // r0

  ((void (*)(void))loc_601858A8)();
  v2 = FIELD_U32(a1, 296) + 14680064;
  FIELD_U32(a1, 296) = v2;
  FIELD_F32(a1, 84) = FIELD_F32(a1, 288)
                      + (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                      + (float)((float)((float)(v2 & 0xFFFFFF)
                                                      * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                              * 0.000000059605))
                              * 9.0);
  sub_601855F4(a1);
  return 1;
}
