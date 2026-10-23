/* sub_606BAAFC
 * address: 0x606BAAFC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BAAFC(unsigned int a1)
{
  return (a1 & 1) + ((a1 >> 1) & 1) + ((a1 >> 2) & 1) + ((a1 >> 3) & 1);
}
