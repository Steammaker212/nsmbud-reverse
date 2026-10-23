/* sub_600390DC
 * address: 0x600390DC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600390DC(int a1)
{
  int v2; // t1
  int result; // r0

  BowserJrBase__vf470();
  FIELD_U8(a1, 7787) = 1;
  v2 = FIELD_U32(a1, 7112);
  a1 += 7112;
  result = v2 + *(_DWORD *)(FIELD_U32(a1, 132) + 160);
  *(_DWORD *)a1 = result;
  return result;
}
