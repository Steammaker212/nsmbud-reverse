/* CarryableEnemy__onDelete
 * address: 0x60271DD8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003444
// 
// Overridden by: None
signed int __fastcall CarryableEnemy__onDelete(CarryableEnemy *this)
{
  unsigned int playerId; // r0
  char *playerIdPtr; // r5
  _DWORD *player; // r0

  playerIdPtr = &FIELD_U8(this, 0x18C4);
  playerId = FIELD_U8(this, 0x18C4);
  if ( playerId <= 3 )
  {
    player = *(_DWORD **)(PlayerMgr_instance + 4 * playerId + 32);
    if ( player )
      Player_ReleaseCarryableEnemy(player, (int)this);
  }
  *playerIdPtr = -1;
  FIELD_U32(this, 0x18C8) = 0;
  return 1;
}
