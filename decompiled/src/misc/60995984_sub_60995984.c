/* sub_60995984
 * address: 0x60995984   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60995984(int a1)
{
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 && !FIELD_U8(a1, 76) )
    return sub_609916B0(a1);
  else
    return sub_60998564();
}
