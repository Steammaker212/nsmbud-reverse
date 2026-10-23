/* sub_608B954C
 * address: 0x608B954C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B954C(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = a1 + 152;
  FIELD_U32(a1, 252) = FIELD_U32(a1, 140);
  v2 = sub_608C4DF4(a1);
  return sub_608C4F14(v2, v1, 1);
}
