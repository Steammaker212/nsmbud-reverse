/* sub_608E1248
 * address: 0x608E1248   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1248(int result, unsigned int a2)
{
  if ( a2 <= 8 )
    FIELD_U32(result, 20) = a2;
  return result;
}
