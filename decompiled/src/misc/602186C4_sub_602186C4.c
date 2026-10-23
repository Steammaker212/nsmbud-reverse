/* sub_602186C4
 * address: 0x602186C4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602186C4(int a1)
{
  FIELD_U8(a1, 533) = 1;
  FIELD_U8(a1, 216) &= ~2u;
  JUMPOUT(0x602184A4);
}
