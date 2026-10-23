/* Enemy__collisionYoshi
 * address: 0x602A2D78   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602594D4 : Amp
//   - 0x60277C98 : Fuzzy
//   - 0x602D64FC : SledgeBro
//   - 0x60315EDC : DryBones
//   - 0x6033C95C : GoombaBase
//   - 0x60383814 : Pokey
//   - 0x603DFCA0 : RiverPiranha
//   - 0x602645C4 : BrosBase
//   - 0x600250CC : BossBase
//   - 0x603A0098 : ShellEnemy
//   - 0x6030FCFC : Kanibo
int __fastcall Enemy__collisionYoshi(int result, int a2, int a3)
{
  if ( FIELD_U32(a3, 136) != 15 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 200))(result);
  return result;
}
