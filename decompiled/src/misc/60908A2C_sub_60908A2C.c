/* sub_60908A2C
 * address: 0x60908A2C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908A2C(int a1, int a2)
{
  if ( FIELD_U32(a1, 120) == 2 )
    return 0;
  else
    return sub_60912EC0(a1 + 28, a2);
}
