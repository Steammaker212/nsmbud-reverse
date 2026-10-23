/* sub_6036ECF8
 * address: 0x6036ECF8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036ECF8(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  ActiveCollider *v4; // r5
  ActiveCollider *v5; // r0
  ActiveColliderInfo *v6; // r2
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r5
  int v9; // s2

  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 6244) = 0;
  v2 = FIELD_U32(a1, 20);
  v3 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
    v3 = 1;
  FIELD_U32(a1, 6340) = v3;
  FIELD_U32(a1, 6344) = (unsigned __int8)(v2 >> 4);
  FIELD_U16(a1, 6362) = 5 * (unsigned __int8)(v2 >> 12);
  FIELD_F32(a1, 6380) = (float)((v2 >> 20) & 0xF) * 16.0;
  FIELD_F32(a1, 6384) = (float)(HIBYTE(v2) & 0xF) * 16.0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  pol_light_ref(a1);
  sub_6036F208(a1);
  v4 = (ActiveCollider *)(a1 + 188);
  if ( FIELD_U32(a1, 6340) )
  {
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF081C, a1 + 7012);
    v5 = (ActiveCollider *)(a1 + 6464);
    v6 = (ActiveColliderInfo *)&unk_60B003CC;
  }
  else
  {
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF07F0, a1 + 7012);
    v5 = (ActiveCollider *)(a1 + 6464);
    v6 = (ActiveColliderInfo *)&unk_60B003A0;
  }
  ActiveCollider__init(v5, (StageActor *)a1, v6, a1 + 7012);
  FIELD_U8(a1, 296) = FIELD_U8(a1, 87);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v4) && !ActiveColliderMgr_isInCreateList(v7, v4) )
    ActiveColliderMgr_addToCreateList(v7, v4);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6464))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6464)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6464));
  }
  FIELD_F64(a1, 6984) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6980))(a1 + 6980);
  FIELD_U32(a1, 6992) = v9;
  sub_6036F208(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95EE0);
  return 1;
}
