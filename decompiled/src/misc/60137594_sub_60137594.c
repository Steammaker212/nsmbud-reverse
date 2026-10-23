/* sub_60137594
 * address: 0x60137594   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60137594()
{
  int v0; // r1

  v0 = FIELD_U32(EnemyCounterMaybe_instance, 168);
  FIELD_U32(EnemyCounterMaybe_instance, 168) = v0 + 1;
  return v0 < 5;
}
