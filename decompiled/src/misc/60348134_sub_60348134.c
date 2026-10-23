/* sub_60348134
 * address: 0x60348134   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60348134(int a1)
{
  signed int v2; // r0
  ActiveColliderMgr *v3; // r6
  int v4; // r5
  int v5; // r5
  int v6; // r0
  int v7; // s2

  sub_603483E8();
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1111490560;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v2];
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEE170, a1 + 6376);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  FIELD_F32(a1, 304) = (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                               + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                               * *(float *)((char *)&sinLutTable[1]
                                                          + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                       * 0.000000059605))
                       * 1.5;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFC70, &stru_60AFFC7C, &stru_60AFFC88);
  FIELD_U32(a1, 6148) |= 2u;
  FIELD_U8(a1, 6056) = 1;
  if ( FIELD_U8(a1, 30) == 1 )
  {
    FIELD_U32(a1, 6364) = 511;
    FIELD_U32(a1, 6368) = 1;
    v4 = **(_DWORD **)(FIELD_U32(a1, 6356) + 12);
    SkeletalAnim_play(v4, FIELD_U32(a1, 6352), (int)&dword_60C94A70);
    AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), dword_60C94A80);
    v5 = **(_DWORD **)(FIELD_U32(a1, 6356) + 20);
    TexAnim_play(v5, FIELD_U32(a1, 6352), &dword_60C94A78);
    AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), dword_60C94A80);
    v6 = **(_DWORD **)(FIELD_U32(a1, 6356) + 12);
    FIELD_F32(v6, 20) = FIELD_F32(v6, 8) + -1.0;
    FIELD_U32(v6, 28) |= 2u;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94988);
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94948);
  }
  FIELD_F64(a1, 6384) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6380))(a1 + 6380);
  FIELD_U32(a1, 6392) = v7;
  spring_ref(a1);
  return 1;
}
