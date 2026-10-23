/* BossBase__vf270
 * address: 0x600260DC   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6005378C : BoomBoomBase
//   - 0x60030194 : SumoBrosBoss
//   - 0x600C73A4 : Bowser
//   - 0x600B745C : KoopalingBase
int __fastcall BossBase__vf270(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 0x1BC))(a1);
}
