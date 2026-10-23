/* sub_606AE1F0
 * address: 0x606AE1F0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606AE1F0(int a1, unsigned int a2)
{
  if ( a2 <= 0xF )
    return *(float *)(a1 + 8 * a2 + 6100);
  else
    return 0.0;
}
