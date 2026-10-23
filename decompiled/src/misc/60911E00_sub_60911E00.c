/* sub_60911E00
 * address: 0x60911E00   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911E00(int a1)
{
  if ( FIELD_U32(a1, 12) )
    return 1;
  else
    return sub_60913164();
}
