/* ShellEnemy__vf328
 * address: 0x603A40E4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall ShellEnemy__vf328(StateActor *a1)
{
  signed int result; // r0

  FIELD_U32(a1, 0x0)._.profileFlags &= ~4u;
  result = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  FIELD_U32(a1, 0x0)._.direction = result;
  return result;
}
