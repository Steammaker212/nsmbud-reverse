/* sub_6023C600
 * address: 0x6023C600   size: 1280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023C600(int a1)
{
  unsigned int v2; // r1
  int result; // r0
  int v4; // s2
  int v5; // r0
  int v6; // r0
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  int v9; // r0
  int v10; // r0
  ActiveColliderMgr *v11; // r6
  unsigned int v12; // r0
  int v13; // r3
  float v14; // s2
  float v15; // s10
  signed int v16; // r0
  unsigned __int8 v17[4]; // [sp+8h] [bp-30h] BYREF
  unsigned __int8 v18[4]; // [sp+Ch] [bp-2Ch] BYREF
  unsigned __int8 v19; // [sp+10h] [bp-28h] BYREF

  v2 = sub_600085D0(ActorMgr__instance, 674);
  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    result = 2;
    if ( v2 )
      return result;
  }
  else
  {
    result = 2;
    if ( v2 > 1 )
      return result;
  }
  memset((void *)(a1 + 12656), 0, 64);
  FIELD_F64(a1, 12320) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 12316))(a1 + 12316);
  FIELD_U32(a1, 12328) = v4;
  sub_6023CB40(a1);
  FIELD_U32(a1, 144) = 1067450368;
  FIELD_U32(a1, 148) = 1067450368;
  FIELD_U32(a1, 152) = 1067450368;
  FIELD_U8(a1, 12102) = 0;
  FIELD_U16(a1, 12092) = 0;
  FIELD_U32(a1, 12004) = 0;
  FIELD_U32(a1, 12008) = 0;
  FIELD_U32(a1, 12020) = 1103101952;
  FIELD_U32(a1, 12024) = 1103101952;
  v19 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BD98B0, &v19, 0);
  v5 = FIELD_U32(a1, 12020);
  FIELD_U32(a1, 316) = FIELD_U32(a1, 12024);
  FIELD_U32(a1, 312) = v5;
  v6 = FIELD_U32(a1, 12004);
  FIELD_U32(a1, 308) = FIELD_U32(a1, 12008);
  FIELD_U32(a1, 304) = v6;
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
  }
  v18[0] = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 6300), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BD98DC, v18, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6300))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6300)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6300));
  }
  FIELD_U32(a1, 12012) = 0;
  FIELD_U32(a1, 12016) = 0;
  FIELD_U32(a1, 12028) = 1107296256;
  FIELD_U32(a1, 12032) = 1107296256;
  v17[0] = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 12348), (StateActor *)a1, &stru_60AFD68C, v17, 0);
  FIELD_U32(a1, 12460) = a1 + 12652;
  v9 = FIELD_U32(a1, 12028);
  FIELD_U32(a1, 12476) = FIELD_U32(a1, 12032);
  FIELD_U32(a1, 12472) = v9;
  v10 = FIELD_U32(a1, 12012);
  FIELD_U32(a1, 12468) = FIELD_U32(a1, 12016);
  FIELD_U32(a1, 12464) = v10;
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12348))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 12348)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 12348));
  }
  FIELD_U8(a1, 12752) = 0;
  FIELD_U8(a1, 12728) = -1;
  FIELD_U8(a1, 12753) = 0;
  FIELD_U8(a1, 12729) = -1;
  FIELD_U8(a1, 12754) = 0;
  FIELD_U8(a1, 12730) = -1;
  FIELD_U8(a1, 12755) = 0;
  FIELD_U8(a1, 12731) = -1;
  CollisionMgr_init((CollisionMgr *)(a1 + 6616), (StateActor *)a1, &stru_60AFD6B8, &stru_60AFD6C4, &stru_60AFD6D0);
  v12 = FIELD_U32(a1, 156);
  v13 = (v12 >> 20) & 0xFF0;
  v14 = (float)(v12 & 0xFFFFFF) * 0.000000059605;
  v15 = *(float *)((char *)sinLutTable + v13) + (float)(*(float *)((char *)&sinLutTable[1] + v13) * v14);
  FIELD_F32(a1, 6416) = (float)((float)(*(float *)((char *)&sinLutTable[2] + v13)
                                        + (float)(v14 * *(float *)((char *)&sinLutTable[3] + v13)))
                                * 16.0)
                        * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                * *(float *)((char *)&sinLutTable[1]
                                                           + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                        * 0.000000059605));
  FIELD_F32(a1, 6420) = v15 * -16.0;
  FIELD_U16(a1, 12726) = 0;
  FIELD_U16(a1, 12724) = 0;
  FIELD_U16(a1, 12722) = 0;
  FIELD_U16(a1, 12720) = 0;
  FIELD_U32(a1, 12748) = 0;
  FIELD_U32(a1, 12744) = 0;
  FIELD_U32(a1, 12740) = 0;
  FIELD_U32(a1, 12736) = 0;
  FIELD_U32(a1, 12732) = 0;
  v16 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v16;
  FIELD_U16(a1, 6276) = 0;
  FIELD_U32(a1, 12088) = FIELD_U32(a1, 20) & 1;
  FIELD_F32(a1, 120) = flt_60AF1EA0[v16];
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 160) = *((_DWORD *)&unk_60C8DB10 + v16 + 1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1086324736;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1086324736;
  FIELD_U32(a1, 500) = 1117782016;
  FIELD_U32(a1, 504) = 1117782016;
  FIELD_U32(a1, 508) = 1117782016;
  FIELD_U32(a1, 512) = 1117782016;
  FIELD_U32(a1, 12060) = 1086324736;
  FIELD_U32(a1, 12052) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 12096) = v16;
  mouth_lower_ref_2(a1);
  FIELD_U32(a1, 12064) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DA18);
  return 1;
}
