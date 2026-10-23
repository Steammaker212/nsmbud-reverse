/* sub_606ED9B4
 * address: 0x606ED9B4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606ED9B4(int a1)
{
  unsigned int v1; // r0

  if ( a1 && FIELD_U8(a1, 533) == 1 && (v1 = FIELD_S8(a1, 84), v1 < 4) )
    return 1 << v1;
  else
    return 0;
}
