/* BobOmb_vf153
 * address: 0x60260C10   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf153(int a1)
{
  FIELD_U16(a1, 6364) |= 3u;
  return Enemy__vf264((Enemy *)a1);
}
