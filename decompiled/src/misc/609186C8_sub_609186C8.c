/* sub_609186C8
 * address: 0x609186C8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609186C8(int a1, int a2)
{
  int v2; // r0
  int result; // r0

  *(_DWORD *)(FIELD_U32(a1, 56) + 4 * a2) = 0;
  v2 = FIELD_U32(a1, 88);
  *(_DWORD *)(v2 + 8 * a2) = -1;
  result = v2 + 8 * a2;
  FIELD_U32(result, 4) = -1;
  return result;
}
