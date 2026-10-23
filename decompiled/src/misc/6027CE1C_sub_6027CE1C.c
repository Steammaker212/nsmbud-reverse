/* sub_6027CE1C
 * address: 0x6027CE1C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027CE1C(int a1)
{
  if ( FIELD_U8(a1, 8960) )
    return 1;
  else
    return Enemy__isOnGround(a1);
}
