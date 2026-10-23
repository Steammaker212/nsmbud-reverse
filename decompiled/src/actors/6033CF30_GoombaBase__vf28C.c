/* GoombaBase__vf28C
 * address: 0x6033CF30   size: 40   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603639B0 : ParaGoomba
int __fastcall GoombaBase__vf28C(int a1, StageActor *a2)
{
  Vec2 v3; // [sp+0h] [bp-10h] BYREF

  v3 = *(Vec2 *)(a1 + 120);
  return Enemy_killWithState((Enemy *)a1, a2, &v3, (int)&stru_60C907A0);
}
