/* CoinBase__splashWater
 * address: 0x6057AB10   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000EC0
// 
// Overridden by: None
int __fastcall CoinBase__splashWater(int a1, int a2)
{
  int v3; // r2
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  EffectData_create(972, (Vec3 *)a2, 0, a1 + 144);
  v3 = FIELD_U32(a2, 4);
  v5[0] = *(_DWORD *)a2;
  v5[1] = v3;
  return TileMgr_splashRelated(TileMgr_instance, v5, 6);
}
