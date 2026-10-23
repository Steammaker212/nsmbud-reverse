/* Water_dtorFree
 * address: 0x605ACBB8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Water_dtorFree(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = TerrainActor_vtable;
  v2 = (ColliderBase *)(a1 + 6136);
  FIELD_U32(a1, 72256) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 72256);
  sub_60002B6C((StageActor *)(a1 + 72256));
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 6900) = TerrainEffects_vtable;
  nullsub_1721();
  ShapedCollider_dtor(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
