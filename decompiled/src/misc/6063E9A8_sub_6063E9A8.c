/* sub_6063E9A8
 * address: 0x6063E9A8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E9A8(_DWORD *a1)
{
  int result; // r0

  a1[27] = a1[1528];
  a1[28] = a1[1529];
  a1[29] = a1[1530];
  lift_han_leaf_ref_63FDE8(a1);
  a1[1555] = 10 * (unsigned __int8)(a1[5] >> 12);
  a1[1557] = 1065353216;
  result = FIELD_U8(EnemyCounterMaybe_instance, 928) | (1 << a1[1556]);
  FIELD_U8(EnemyCounterMaybe_instance, 928) = result;
  return result;
}
