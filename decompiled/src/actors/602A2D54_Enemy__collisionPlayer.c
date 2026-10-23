/* Enemy__collisionPlayer
 * address: 0x602A2D54   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259298 : Amp
//   - 0x60277BD4 : Fuzzy
//   - 0x602D630C : SledgeBro
//   - 0x60315B68 : DryBones
//   - 0x6033C844 : GoombaBase
//   - 0x60624318 : FixedIcicle
//   - 0x60264458 : BrosBase
//   - 0x60024E78 : BossBase
//   - 0x602725CC : CarryableEnemy
//   - 0x6030FC64 : Kanibo
int __fastcall Enemy__collisionPlayer(int result, int a2, int a3)
{
  if ( FIELD_U32(a3, 136) != 15 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 200))(result, a2);
  return result;
}
