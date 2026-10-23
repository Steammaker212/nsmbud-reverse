/* sub_600D36BC
 * address: 0x600D36BC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600D36BC()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked && (FIELD_U8(ActorSlotChecked, 1221) & 8) == 0 )
    FIELD_U32(ActorSlotChecked, 1224) &= ~1u;
  v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v1 && (FIELD_U8(v1, 1221) & 8) == 0 )
    FIELD_U32(v1, 1224) &= ~1u;
  v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v2 && (FIELD_U8(v2, 1221) & 8) == 0 )
    FIELD_U32(v2, 1224) &= ~1u;
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result )
  {
    if ( (FIELD_U8(result, 1221) & 8) == 0 )
      FIELD_U32(result, 1224) &= ~1u;
  }
  return result;
}
