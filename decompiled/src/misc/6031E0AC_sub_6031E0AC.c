/* sub_6031E0AC
 * address: 0x6031E0AC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6031E0AC(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BEA6E8;
  v2 = a1 + 7128;
  LightSource__dtor((_DWORD *)(a1 + 12920));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 12612));
  FIELD_U32(a1, 12480) = EffectWrapper_vtable;
  sub_60237560(a1 + 12480);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12480));
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
