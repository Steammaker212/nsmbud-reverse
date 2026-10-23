/* CoinBase__splashPoison
 * address: 0x6057AC00   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000ED4
// 
// Overridden by: None
int __fastcall CoinBase__splashPoison(int a1, int a2)
{
  int v3; // r2
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U8(a1, 19) = 1;
  EffectData_create(973, (Vec3 *)a2, 0, a1 + 144);
  v3 = FIELD_U32(a2, 4);
  v5[0] = *(_DWORD *)a2;
  v5[1] = v3;
  return TileMgr_splashRelated(TileMgr_instance, v5, 23);
}
