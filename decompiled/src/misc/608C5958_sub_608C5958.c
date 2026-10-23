/* sub_608C5958
 * address: 0x608C5958   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C5958(float a1)
{
  return *(float *)((char *)&nn__util__detail__SinCosSampleTable
                  + (((unsigned int)(float)(a1 * 4295000000.0) >> 20) & 0xFF0)
                  + 4)
       + (float)((float)((float)((unsigned int)(float)(a1 * 4295000000.0) & 0xFFFFFF) * 0.000000059605)
               * *(float *)((char *)&nn__util__detail__SinCosSampleTable
                          + (((unsigned int)(float)(a1 * 4295000000.0) >> 20) & 0xFF0)
                          + 12));
}
