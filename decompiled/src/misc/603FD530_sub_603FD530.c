/* sub_603FD530
 * address: 0x603FD530   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FD530(unsigned int *a1)
{
  unsigned int v1; // r0

  v1 = *a1;
  if ( v1 <= 4 )
    return (0x1Eu >> (v1 & 0x1F)) & 1;
  else
    return 0;
}
