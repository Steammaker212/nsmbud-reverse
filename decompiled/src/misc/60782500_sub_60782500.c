/* sub_60782500
 * address: 0x60782500   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60782500(unsigned int a1, int a2)
{
  if ( a1 <= 6 && ((1 << a1) & 0x43) != 0 && (unsigned int)(a2 - 4) <= 4 )
    return flt_60B0AE00[a2 - 4];
  else
    return 0.0;
}
