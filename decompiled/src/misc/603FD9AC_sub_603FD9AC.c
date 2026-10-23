/* sub_603FD9AC
 * address: 0x603FD9AC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FD9AC(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 4);
  if ( result >= 0x3A )
    return 0;
  return result;
}
