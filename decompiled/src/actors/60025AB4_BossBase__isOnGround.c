/* BossBase__isOnGround
 * address: 0x60025AB4   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7BE8
// 
// Overridden by:
//   - 0x6004F2BC : BoomBoomBase
//   - 0x60031768 : SumoBrosBoss
//   - 0x600726D8 : FinalBowser
//   - 0x600CEB74 : BowserJrBase
//   - 0x600B1B64 : KoopalingBase
int __fastcall BossBase__isOnGround(BossBase *a1)
{
  int isRumbleActive; // r2
  int result; // r0

  isRumbleActive = (unsigned __int8)FIELD_U8(a1, 0x18A8);
  result = 0;
  if ( !isRumbleActive && !*(&FIELD_U8(a1, 0x18A8) + 1) && FIELD_U32(a1, 0x189C) >= 1 )
    return FIELD_U8(a1, 0x288)[2224] & 1;
  return result;
}
