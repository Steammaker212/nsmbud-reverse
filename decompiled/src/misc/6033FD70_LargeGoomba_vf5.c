/* LargeGoomba_vf5
 * address: 0x6033FD70   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LargeGoomba_vf5(int a1)
{
  signed int v2; // r0
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  int v5; // r7
  _DWORD *v6; // r8
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r3
  _BOOL4 v10; // r3
  _DWORD *v11; // r0
  int v12; // s2

  sub_6033FFCC(a1);
  FIELD_U32(a1, 136) = -1065353216;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 0x6C));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v2];
  FIELD_U8(a1, 6272) = 2;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60BEDA68, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 0x19D8), (StageActor *)a1, &stru_60AFFB94, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 0x19D8))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 0x19D8)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 0x19D8));
  }
  FIELD_U32(a1, 6728) = a1 + 6952;
  FIELD_U32(a1, 620) = a1 + 6440;
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 624) = a1 + 6476;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U8(a1, 6056) = 1;
  v5 = FIELD_U32(a1, 6404);
  v6 = (_DWORD *)(a1 + 6408);
  v7 = FIELD_U32(a1, 0x1900);
  v8 = v5;
  v9 = v5 & 1 | v7;
  v10 = v9 != 0;
  if ( v5 )
    v8 = 1;
  if ( v7 || (v8 & v10) == 1 )
  {
    *v6 = 2;
    v11 = (_DWORD *)(a1 + (v5 >> 1));
    if ( (v5 & 1) != 0 )
      v7 = *(_DWORD *)(*v11 + v7);
    ((void (__fastcall *)(_DWORD *))v7)(v11);
  }
  FIELD_U32(a1, 0x1900) = sub_60340150;
  FIELD_U32(a1, 6404) = 0;
  *v6 = 0;
  FIELD_U32(a1, 6420) = 0;
  FIELD_U32(a1, 6424) = 0;
  FIELD_U32(a1, 6428) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  FIELD_U8(a1, 6436) = FIELD_U32(a1, 20) & 1;
  FIELD_F64(a1, 6924) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 015410))(a1 + 015410);
  FIELD_U32(a1, 6932) = v12;
  sub_60340170(a1);
  return 1;
}
