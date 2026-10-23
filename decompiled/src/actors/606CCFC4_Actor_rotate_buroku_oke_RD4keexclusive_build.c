/* Actor_rotate_buroku_oke_RD4keexclusive_build
 * address: 0x606CCFC4   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_buroku_oke_RD4keexclusive_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1F60u);
  result = sub_606CCAC0(v2, a1);
  *(_DWORD *)result = off_60C1CE14;
  FIELD_U8(result, 8024) = 1;
  return result;
}
