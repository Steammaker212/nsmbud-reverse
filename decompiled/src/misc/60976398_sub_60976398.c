/* sub_60976398
 * address: 0x60976398   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60976398(unsigned int result, int a2, int a3, int a4)
{
  if ( (FIELD_U32(result, 2352) & 0x840) == 0x840 )
    return sub_60975BDC(result, a2, a3, 4, 0, 1, a4 + 1);
  return result;
}
