/* sub_60301138
 * address: 0x60301138   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60301138(int a1, int a2, int a3)
{
  if ( !FIELD_U8(a1, 8480) )
  {
    FIELD_U8(a1, 8480) = 1;
    Enemy__collisionFireball((float *)a1, a2, a3);
  }
  return 1;
}
