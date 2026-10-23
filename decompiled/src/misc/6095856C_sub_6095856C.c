/* sub_6095856C
 * address: 0x6095856C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095856C(int a1, int a2)
{
  sub_6090B260(FIELD_U32(a1, 12));
  return sub_6090E560(FIELD_U32(a1, 32), a2, *(float **)(a1 + 12));
}
