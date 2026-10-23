/* sub_608D5820
 * address: 0x608D5820   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D5820(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( FIELD_U32(a1, 4) == 543 )
    return a1 + 8;
  return v1;
}
