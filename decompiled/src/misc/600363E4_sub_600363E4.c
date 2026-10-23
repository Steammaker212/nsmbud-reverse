/* sub_600363E4
 * address: 0x600363E4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600363E4(int a1)
{
  int result; // r0

  sub_60037BB0(a1, 0, 1, 0.0, 1.0);
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    FIELD_U32(a1, 7916) = result;
  return result;
}
