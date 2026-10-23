/* CollisionActor__afterExecute
 * address: 0x60003418   size: 44   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000770
// 
// Overridden by:
//   - 0x602D6000 : SledgeBro
//   - 0x60024D88 : BossBase
//   - 0x6039F4A8 : ShellEnemy
int __fastcall CollisionActor__afterExecute(CollisionActor *a1, int a2)
{
  sub_60003160(a1);
  FIELD_U8(a1, 0x177C) = 0;
  return StageActor__afterExecute((int)a1, a2);
}
