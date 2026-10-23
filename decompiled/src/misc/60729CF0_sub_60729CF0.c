/* sub_60729CF0
 * address: 0x60729CF0   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60729CF0(int a1, char a2)
{
  return FIELD_U32(a1, 2332) & (1 << a2);
}
