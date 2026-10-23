/* sub_60879EA0
 * address: 0x60879EA0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60879EA0(int a1)
{
  FIELD_U32(a1, 8) |= 4u;
  memset(*(void **)a1, 0, 80 * FIELD_U16(a1, 6));
}
