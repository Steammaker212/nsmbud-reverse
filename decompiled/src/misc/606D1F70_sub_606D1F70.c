/* sub_606D1F70
 * address: 0x606D1F70   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D1F70(int a1)
{
  ColliderBase *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60C1DB6C;
  v2 = (ColliderBase *)(a1 + 12536);
  FIELD_U32(a1, 13192) = off_60BC6E38;
  v3 = (_DWORD *)(a1 + 13192);
  sub_60002B6C((StageActor *)(a1 + 13192));
  sead__IDisposer__dtor(v3);
  ShapedCollider_dtor(v2);
  ShapedCollider_dtor((ColliderBase *)(a1 + 11880));
  ShapedCollider_dtor((ColliderBase *)(a1 + 11224));
  ShapedCollider_dtor((ColliderBase *)(a1 + 10568));
  FIELD_U32(a1, 9676) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9676));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9676));
  FIELD_U32(a1, 9656) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9656));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9656));
  FIELD_U32(a1, 9636) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9636));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9636));
  FIELD_U32(a1, 9616) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 9616));
  sead__IDisposer__dtor((_DWORD *)(a1 + 9616));
  FIELD_U32(a1, 8576) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 8576));
  sead__IDisposer__dtor((_DWORD *)(a1 + 8576));
  FIELD_U32(a1, 8556) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 8556));
  sead__IDisposer__dtor((_DWORD *)(a1 + 8556));
  FIELD_U32(a1, 8536) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 8536));
  sead__IDisposer__dtor((_DWORD *)(a1 + 8536));
  FIELD_U32(a1, 8516) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 8516));
  sead__IDisposer__dtor((_DWORD *)(a1 + 8516));
  FIELD_U32(a1, 7476) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7476));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7476));
  FIELD_U32(a1, 7456) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7456));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7456));
  FIELD_U32(a1, 7436) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7436));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7436));
  FIELD_U32(a1, 7416) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 7416));
  sead__IDisposer__dtor((_DWORD *)(a1 + 7416));
  FIELD_U32(a1, 6376) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6376));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6376));
  FIELD_U32(a1, 6356) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6356));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6356));
  FIELD_U32(a1, 6336) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6336));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6336));
  FIELD_U32(a1, 6316) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6316));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6316));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
