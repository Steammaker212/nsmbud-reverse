/* Enemy__collisionPenguinSlide
 * address: 0x602A675C   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602593EC : Amp
//   - 0x60277EC4 : Fuzzy
//   - 0x6029E258 : Thwomp
//   - 0x60382AB4 : Pokey
//   - 0x603DFCD4 : RiverPiranha
//   - 0x60025368 : BossBase
//   - 0x603A272C : ShellEnemy
int __fastcall Enemy__collisionPenguinSlide(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 0x118))(a1);
}
