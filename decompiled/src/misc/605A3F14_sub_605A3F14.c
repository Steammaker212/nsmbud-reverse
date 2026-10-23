/* sub_605A3F14
 * address: 0x605A3F14   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A3F14(int a1)
{
  int result; // r0

  FIELD_U8(a1, 72323) = 0;
  result = EnemyCounterMaybe_instance;
  FIELD_U32(EnemyCounterMaybe_instance, 28) = 1;
  return result;
}
