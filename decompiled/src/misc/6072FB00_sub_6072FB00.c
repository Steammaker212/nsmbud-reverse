/* sub_6072FB00
 * address: 0x6072FB00   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6072FB00(int a1)
{
  int v2; // r1
  signed int v3; // r0
  ActiveColliderMgr *v4; // r6
  int v5; // r0

  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = FIELD_U32(a1, 20) & 0xF;
  if ( v2 )
    v3 = v2 != 1;
  else
    v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) = dword_60AF2240[v3];
  FIELD_U32(a1, 116) = 1152876544;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B0A2BC, 0, 0);
  FIELD_U32(a1, 100) = -1103101952;
  CollisionActor__handleGravity((CollisionActor *)a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60C226C0, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6652) = 2;
  FIELD_U32(a1, 6656) = 1;
  v5 = operator_new(0x10u);
  FIELD_U32(a1, 6300) = sub_60794D48(v5, 4, 1, 0, 1);
  sub_6072FC70(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB20);
  return 1;
}
