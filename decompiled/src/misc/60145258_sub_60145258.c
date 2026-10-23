/* sub_60145258
 * address: 0x60145258   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60145258(int a1)
{
  int v3; // r0

  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 20) & 1;
  v3 = FIELD_U32(a1, 6124);
  FIELD_U32(a1, 620) = v3;
  FIELD_U32(v3, 16) = 1;
  *(_DWORD *)(FIELD_U32(a1, 6128) + 28) = 1;
  FIELD_U32(a1, 624) = FIELD_U32(a1, 6128);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD3A04, 0);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87FCC);
  CollisionMgr_init((CollisionMgr *)(a1 + 6488), (StateActor *)a1, &stru_60AF6A1C, &stru_60AF6A28, &stru_60AF6A34);
}
