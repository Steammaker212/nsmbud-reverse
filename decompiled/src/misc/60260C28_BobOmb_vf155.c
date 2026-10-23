/* BobOmb_vf155
 * address: 0x60260C28   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf155(int a1)
{
  __int16 v2; // t1

  Enemy__vf26C((Enemy *)a1);
  v2 = FIELD_U16(a1, 6364);
  FIELD_U16(a1, 6364) = v2 & 0xFFFC;
  return v2 & 0xFFFC;
}
