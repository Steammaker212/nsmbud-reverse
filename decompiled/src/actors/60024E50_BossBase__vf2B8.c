/* BossBase__vf2B8
 * address: 0x60024E50   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int BossBase__vf2B8()
{
  int result; // r0

  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    FIELD_U8(result, 6102) = 1;
  return result;
}
