/* sub_608B9FB4
 * address: 0x608B9FB4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9FB4(int a1, int a2)
{
  return (a2 + 388 * FIELD_U32(a1, 4) - 1) & -a2;
}
