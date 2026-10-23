/* BossBase__vf2DC
 * address: 0x6002675C   size: 32   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60031FC8 : BoomBoomBase
//   - 0x60031FC8 : SumoBrosBoss
//   - 0x600792C4 : FinalBowser
//   - 0x600398A8 : BowserJrBase
//   - 0x60031FC8 : KoopalingBase
int __fastcall BossBase__vf2DC(int a1, int a2)
{
  int *v2; // r0
  int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 6300);
  v2 = (int *)(a1 + 6300);
  v4 = v3 - a2;
  if ( v4 <= 0 )
    v4 = 0;
  *v2 = v4;
  return v4;
}
