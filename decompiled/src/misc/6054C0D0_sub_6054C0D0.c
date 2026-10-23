/* sub_6054C0D0
 * address: 0x6054C0D0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054C0D0(int a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = FIELD_U32(a1, 3684);
  v2 = v1;
  if ( v1 != 1 )
    v2 = 2;
  if ( !v1 )
    v2 = 0;
  result = *(_DWORD *)(a1 + 4 * v2 + 3672);
  FIELD_U32(result, 36) = FIELD_U32(result, 36) & 0xFFFFFFEB | 4;
  return result;
}
