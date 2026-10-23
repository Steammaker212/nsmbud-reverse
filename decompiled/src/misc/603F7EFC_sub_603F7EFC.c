/* sub_603F7EFC
 * address: 0x603F7EFC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7EFC(int a1, unsigned int a2)
{
  if ( a2 >= 0xA )
    a2 = 0;
  return a1 + 2436 * a2 + 16;
}
