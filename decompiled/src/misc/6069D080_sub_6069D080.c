/* sub_6069D080
 * address: 0x6069D080   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6069D080(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C1869C;
  FIELD_U32(a1, 6976) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 6976);
  sub_60002B6C((StageActor *)(a1 + 6976));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6956) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6956));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6956));
  FIELD_U32(a1, 6936) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6936));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6936));
  FIELD_U32(a1, 6916) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6916));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6916));
  *(_DWORD *)a1 = off_60C185AC;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6112));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
