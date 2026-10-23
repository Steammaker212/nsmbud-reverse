/* sub_605A75CC
 * address: 0x605A75CC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605A75CC(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C08264;
  v2 = a1 + 89440;
  FIELD_U32(a1, 72992) = off_60C08128;
  nullsub_1720();
  sub_609175E4(v2);
  sub_609175E4(a1 + 89168);
  sub_609175E4(a1 + 88896);
  sub_609175E4(a1 + 88624);
  sub_609175E4(a1 + 88352);
  sub_609175E4(a1 + 88080);
  ShapedCollider_dtor((ColliderBase *)(a1 + 72328));
  *(_DWORD *)a1 = TerrainActor_vtable;
  FIELD_U32(a1, 72256) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 72256));
  sead__IDisposer__dtor((_DWORD *)(a1 + 72256));
  FIELD_U32(a1, 6900) = TerrainEffects_vtable;
  nullsub_1721();
  ShapedCollider_dtor((ColliderBase *)(a1 + 6136));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
