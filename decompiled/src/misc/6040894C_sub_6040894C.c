/* sub_6040894C
 * address: 0x6040894C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040894C(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( (unsigned __int8)(FIELD_U8(a1, 6559) - 1) <= 2u && FIELD_U8(a1, 6476) == 2 )
    return FIELD_U16(a1, 6478);
  return v1;
}
