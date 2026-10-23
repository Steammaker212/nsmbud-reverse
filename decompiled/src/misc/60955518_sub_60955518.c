/* sub_60955518
 * address: 0x60955518   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60955518(int result, unsigned int a2)
{
  if ( FIELD_U32(result, 128) < a2 )
    FIELD_U32(result, 128) = a2;
  return result;
}
