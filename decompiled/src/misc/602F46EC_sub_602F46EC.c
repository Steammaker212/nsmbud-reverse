/* sub_602F46EC
 * address: 0x602F46EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602F46EC(unsigned int *a1, float a2)
{
  unsigned int v2; // r1

  v2 = *a1 + 41943040;
  *a1 = v2;
  return a2
       + (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                       + (float)((float)((float)(v2 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 5.0);
}
