/* sub_605CE9B4
 * address: 0x605CE9B4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CE9B4(int a1, int a2)
{
  unsigned int v2; // r1

  v2 = FIELD_U32(a1, 4) + FIELD_U32(a1, 8) * a2;
  return (int)(float)(*(float *)a1
                    * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                            + (float)((float)((float)(v2 & 0xFFFFFF)
                                            * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                    * 0.000000059605)))
       + FIELD_U32(a1, 12);
}
