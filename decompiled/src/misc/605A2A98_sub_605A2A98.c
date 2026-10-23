/* sub_605A2A98
 * address: 0x605A2A98   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605A2A98(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60C08034;
  v2 = a1 + 89456;
  FIELD_U32(a1, 89664) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 89664);
  sub_60002B6C((StageActor *)(a1 + 89664));
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 73008) = off_60C08128;
  nullsub_1720();
  sub_609175E4(v2);
  sub_609175E4(a1 + 89184);
  sub_609175E4(a1 + 88912);
  sub_609175E4(a1 + 88640);
  sub_609175E4(a1 + 88368);
  sub_609175E4(a1 + 88096);
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
  return StageActor__dtor((Actor *)a1);
}
