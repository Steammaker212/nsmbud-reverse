/* sub_606EBC3C
 * address: 0x606EBC3C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EBC3C(int result)
{
  if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    return lift_trampoline_ref_6ED7CC(result + 6100);
  return result;
}
