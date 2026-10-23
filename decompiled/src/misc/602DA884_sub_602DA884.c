/* sub_602DA884
 * address: 0x602DA884   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DA884(int a1)
{
  signed int v2; // r0
  ActiveColliderMgr *v3; // r7
  ActiveColliderMgr *v4; // r6
  int v5; // r1
  float v6; // s16
  float v7; // r7
  float v8; // r6
  int v9; // r5
  float v10; // s2
  int v11; // r6
  _BYTE *v12; // r0
  double v13; // d0
  float v14; // s2
  int *v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  int v18; // s2
  ActorBuildInfo v20; // [sp+4h] [bp-4Ch] BYREF

  sub_602DABE8();
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = (unsigned __int8)byte_60AFE3F4[v2] << 29;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE6C28, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6476), (StageActor *)a1, &stru_60AFEB74, a1 + 6780);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6476))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6476)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6476));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFEBA0, &stru_60AFEBAC, &stru_60AFEBB8);
  if ( FIELD_U8(a1, 2992) )
  {
    if ( FIELD_U8(a1, 2996) )
      goto LABEL_13;
    v5 = a1 + 3040;
  }
  else
  {
    if ( !FIELD_U8(a1, 3000) )
      goto LABEL_13;
    v5 = a1 + 3088;
  }
  sub_60003C60(a1, v5, 320.0);
LABEL_13:
  if ( FIELD_U8(a1, 30) == 1 )
  {
    v6 = FIELD_F32(a1, 108);
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_F32(a1, 116);
    v9 = FIELD_U32(a1, 80);
    memset(&v20.settings2, 0, 40);
    v20.settings1 = v9;
    v20.profile = Profile__get(0x211u);
    v10 = (float)byte_60AFE3F4[v9];
    v20.field_1C = FIELD_U32(a1, 160);
    v20.position.x = v6 + (float)(v10 * 16.0);
    v20.position.y = v7;
    v20.position.z = v8;
    v11 = 0;
    v20.field_20 = FIELD_U8(a1, 86);
    v20.initStateFlag = FIELD_U8(a1, 30);
    v20.parentId = FIELD_U32(a1, 8);
    v12 = ActorMgr__create((void *)ActorMgr__instance, &v20, 0);
    if ( v12 )
      v11 = *((_DWORD *)v12 + 2);
    FIELD_U32(a1, 6312) = v11;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91CE8);
    v14 = -1.0;
    FIELD_U32(a1, 6344) = 192;
    FIELD_U32(a1, 6340) = 1;
    v15 = *(int **)(FIELD_U32(a1, 6300) + 12);
    v16 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v16 )
      v15 += v16;
    v17 = *v15;
    *(float *)&v13 = *(float *)(*v15 + 8) + -1.0;
    FIELD_U32(v17, 20) = LODWORD(v13);
    FIELD_U32(v17, 28) |= 2u;
  }
  else
  {
    v13 = ((double (__fastcall *)(int, int *))*(_DWORD *)(*(_DWORD *)a1 + 192))(a1, &dword_60C91CC8);
  }
  FIELD_F64(a1, 6792) = ((double (__fastcall *)(int, float, float, float))**(_DWORD **)(a1 + 6788))(
                             a1 + 6788,
                             *(float *)&v13,
                             *((float *)&v13 + 1),
                             v14);
  FIELD_U32(a1, 6800) = v18;
  sub_602DADF4(a1);
  FIELD_U8(a1, 6056) = 1;
  return 1;
}
