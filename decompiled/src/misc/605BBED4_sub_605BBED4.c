/* sub_605BBED4
 * address: 0x605BBED4   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605BBED4(int a1)
{
  int v2; // r0
  float *v3; // r8
  float *v4; // r9
  float v5; // s0
  int v6; // s2
  ActiveCollider *v7; // r5
  ActiveCollider *v8; // r1
  ActiveColliderMgr *v9; // r4
  unsigned __int8 v11; // [sp+4h] [bp-24h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6784) = v2 & 0xF;
  FIELD_U32(a1, 6788) = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( (v2 & 0xF) == 1 )
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 16.0;
  FIELD_U32(a1, 508) = 1132462080;
  FIELD_U32(a1, 512) = 1157627904;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  sub_605BC1B4(a1);
  if ( FIELD_U32(a1, 6784) )
  {
    FIELD_U32(a1, 6820) = 1090519040;
    v3 = (float *)(a1 + 6820);
    FIELD_U32(a1, 6808) = 1065353216;
    FIELD_U32(a1, 6812) = 1065353216;
    FIELD_U32(a1, 6816) = 1065353216;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB07AC);
    ((void (__fastcall *)(int))loc_605BC428)(a1);
    v4 = (float *)(a1 + 6800);
    v5 = FIELD_F32(a1, 6800) - FIELD_F32(a1, 112);
  }
  else
  {
    FIELD_U32(a1, 6792) = 0;
    FIELD_U32(a1, 6820) = 1090519040;
    v3 = (float *)(a1 + 6820);
    if ( FIELD_U32(a1, 6788) == 3 )
    {
      FIELD_U32(a1, 164) = 0x80000000;
      *v3 = -8.0;
    }
    ((void (__fastcall *)(int))loc_605BC428)(a1);
    v4 = (float *)(a1 + 6800);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB076C);
    v5 = 0.0;
  }
  FIELD_U32(a1, 6760) = -1056964608;
  FIELD_F32(a1, 6764) = v5;
  FIELD_U32(a1, 6768) = 1090519040;
  FIELD_U32(a1, 6772) = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB0730);
  sub_60165340(a1 + 6104, (_DWORD *)(a1 + 6760), (_DWORD *)(a1 + 6768));
  ColliderBase_setType((ColliderBase *)(a1 + 6104), 6);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  FIELD_U32(a1, 7172) = a1 + 6808;
  FIELD_F64(a1, 7144) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7140))(a1 + 7140);
  FIELD_U32(a1, 7152) = v6;
  v11 = 3;
  v7 = (ActiveCollider *)(a1 + 6836);
  ActiveCollider_init2((ActiveCollider *)(a1 + 6836), (StateActor *)a1, &stru_60B05514, &v11, 0);
  FIELD_U32(a1, 6948) = a1 + 7176;
  v8 = (ActiveCollider *)(a1 + 6836);
  FIELD_F32(a1, 6956) = (float)(*v4 - FIELD_F32(a1, 112)) + *v3;
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v8) && !ActiveColliderMgr_isInCreateList(v9, v7) )
    ActiveColliderMgr_addToCreateList(v9, v7);
  return 1;
}
