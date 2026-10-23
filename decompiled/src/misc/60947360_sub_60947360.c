/* sub_60947360
 * address: 0x60947360   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947360(int a1, int a2, int *a3)
{
  int result; // r0
  _DWORD *v6; // r1

  FIELD_U32(a2, 16) = sub_60941AB4(a3);
  result = FIELD_U32(a1, 8);
  v6 = (_DWORD *)(result + 20);
  if ( !result )
    v6 = (_DWORD *)(a1 + 4);
  *v6 = a2;
  FIELD_U32(a1, 8) = a2;
  return result;
}
