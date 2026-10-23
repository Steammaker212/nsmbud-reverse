/* sub_603DBDB8
 * address: 0x603DBDB8   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DBDB8(int a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0

  FIELD_U32(a1, 6816) = 3;
  v2 = (_DWORD *)(a1 + 6816);
  v3 = sub_603DBFA8(a1);
  result = 2;
  if ( v3 == 1 )
  {
    sub_603DC144(a1);
    FIELD_U32(a1, 116) = -1040187392;
    v5 = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6784) = v5;
    v6 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6788) = v6;
    FIELD_U32(a1, 6792) = -1040187392;
    FIELD_U32(a1, 6796) = v5;
    FIELD_U32(a1, 6800) = v6;
    FIELD_U32(a1, 6804) = -1040187392;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 136) = -1065353216;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 100) = -1103101952;
    if ( (FIELD_U8(a1, 20) & 1) != 0 )
      *v2 = 1;
    FIELD_U32(a1, 6808) = 1111490560;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B01390, 0, 0);
    v7 = FIELD_U32(a1, 6808);
    FIELD_U32(a1, 6768) = -1056964608;
    FIELD_U32(a1, 6772) = v7;
    FIELD_U32(a1, 6776) = 1090519040;
    FIELD_U32(a1, 6780) = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C992DC);
    sub_60165340(a1 + 6112, (_DWORD *)(a1 + 6768), (_DWORD *)(a1 + 6776));
    FIELD_U32(a1, 6424) = sub_603DC2C4;
    FIELD_U32(a1, 6428) = 0;
    FIELD_U32(a1, 6432) = 0;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
    sub_603DC4CC(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9925C);
    return 1;
  }
  return result;
}
