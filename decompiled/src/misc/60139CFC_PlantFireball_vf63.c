/* PlantFireball_vf63
 * address: 0x60139CFC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int PlantFireball_vf63()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = FIELD_U32(EnemyCounterMaybe_instance, 164);
  if ( v1 <= 11 )
  {
    FIELD_U32(EnemyCounterMaybe_instance, 164) = v1 + 1;
    return 1;
  }
  return result;
}
