/* sub_609978D8
 * address: 0x609978D8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609978D8(int a1, _DWORD *a2)
{
  int v2; // r0
  int v3; // r2
  int result; // r0

  v2 = *(_DWORD *)(FIELD_U32(a1, 12) + 56);
  v3 = FIELD_U32(v2, 92);
  result = FIELD_U32(v2, 108);
  *a2 = v3;
  a2[1] = result;
  return result;
}
