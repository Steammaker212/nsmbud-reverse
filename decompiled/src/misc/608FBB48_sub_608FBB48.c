/* sub_608FBB48
 * address: 0x608FBB48   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608FBB48(float a1)
{
  return (unsigned int)(float)((float)((float)(a1 * 128.0) - (float)(int)(float)(a1 * 128.0))
                             * flt_60B3B494[2 * (int)(float)(a1 * 128.0) + 1])
       + LODWORD(flt_60B3B494[2 * (int)(float)(a1 * 128.0)]);
}
