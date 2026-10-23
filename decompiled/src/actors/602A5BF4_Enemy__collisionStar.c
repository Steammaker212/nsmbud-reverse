/* Enemy__collisionStar
 * address: 0x602A5BF4   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602D639C : SledgeBro
//   - 0x6029E24C : Thwomp
//   - 0x60382744 : Pokey
//   - 0x6062446C : FixedIcicle
//   - 0x60264CE0 : BrosBase
//   - 0x60025174 : BossBase
int __fastcall Enemy__collisionStar(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 0x164))(a1);
}
