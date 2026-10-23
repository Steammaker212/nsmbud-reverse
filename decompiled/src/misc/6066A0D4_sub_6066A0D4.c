/* sub_6066A0D4
 * address: 0x6066A0D4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6066A0D4(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C15124;
  v2 = (ColliderBase *)(a1 + 8480);
  FIELD_U32(a1, 10444) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 10444);
  sub_60002B6C((StageActor *)(a1 + 10444));
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 10188) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 10188));
  sead__IDisposer__dtor((_DWORD *)(a1 + 10188));
  FIELD_U32(a1, 9932) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9932));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9932));
  FIELD_U32(a1, 9676) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9676));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9676));
  FIELD_U32(a1, 9420) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9420));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9420));
  FIELD_U32(a1, 9164) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9164));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9164));
  SolidOnTopCollider_dtor(v2);
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 8032));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7584));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 7136));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6688));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6240));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
