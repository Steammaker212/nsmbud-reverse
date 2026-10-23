/* BanzaiBill_vf15
 * address: 0x603231CC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf15(int a1)
{
  if ( FIELD_U32(a1, 6308) == 1 )
    --FIELD_U32(EnemyCounterMaybe_instance, 200);
  return 1;
}
