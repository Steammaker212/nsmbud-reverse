/* sub_601376B4
 * address: 0x601376B4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601376B4()
{
  int result; // r0
  int v1; // r1

  result = EnemyCounterMaybe_instance;
  if ( EnemyCounterMaybe_instance )
  {
    v1 = FIELD_U32(EnemyCounterMaybe_instance, 168);
    if ( v1 >= 1 )
      FIELD_U32(EnemyCounterMaybe_instance, 168) = v1 - 1;
  }
  return result;
}
