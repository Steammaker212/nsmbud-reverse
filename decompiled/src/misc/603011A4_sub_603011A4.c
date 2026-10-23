/* sub_603011A4
 * address: 0x603011A4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603011A4(int a1, int a2, int a3)
{
  if ( FIELD_U8(a1, 8480) )
    return 1;
  FIELD_U8(a1, 8480) = 1;
  return Enemy__collisionFireballYoshi(a1, a2, a3);
}
