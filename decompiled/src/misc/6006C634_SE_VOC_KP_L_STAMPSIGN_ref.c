/* SE_VOC_KP_L_STAMPSIGN_ref
 * address: 0x6006C634   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KP_L_STAMPSIGN_ref(int a1)
{
  int v2; // r5
  int *v3; // r1
  unsigned int v4; // r0
  int v5; // r7
  float v6; // s0
  int v7; // r5
  float v8; // r1
  int v9; // r0
  const char *v10; // r1
  ActiveCollider *v11; // r5
  ActiveColliderMgr *v12; // r6
  ActiveColliderMgr *v13; // r6
  int result; // r0
  Vec3 target; // [sp+8h] [bp-28h] BYREF
  int speed[7]; // [sp+14h] [bp-1Ch] BYREF

  v2 = a1 + 7112;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  CollisionMgr_process((_BYTE *)(v2 - 6464));
  v3 = *(int **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  v5 = *v3;
  v6 = *(float *)(*v3 + 20);
  v7 = *v3 + 4;
  if ( v6 >= 188.0 && v6 <= 242.0 )
  {
    StageActor__accelerateX((StageActor *)a1);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108)
                         + (float)(FIELD_F32(a1, 120)
                                 * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                         + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                         * *(float *)((char *)&sinLutTable[1]
                                                                    + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                                 * 0.000000059605)));
  }
  if ( sub_60418548(v7) )
  {
    FIELD_F32(a1, 104) = FIELD_F32(a1, 120) / 26.0;
    FIELD_U32(a1, 132) = 0;
  }
  if ( sub_60072C54(a1) == 1 )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 21, 3, 0, 0);
    sub_60813430(a1 + 6332, "SE_BOSS_KOOPA_L_FOOT", 0);
    v8 = FIELD_F32(a1, 112);
    target.x = FIELD_F32(a1, 7512);
    target.y = v8;
    target.z = 4500.0;
    EffectData_create(1101, &target, 0, a1 + 144);
  }
  if ( sub_60418548(v7) || sub_60418548(v7) )
  {
    v9 = a1 + 6332;
    v10 = "SE_VOC_KP_L_STAMPSIGN";
LABEL_16:
    sub_60813430(v9, v10, 0);
    goto LABEL_17;
  }
  if ( sub_60418548(v7) || sub_60418548(v7) )
  {
    v9 = a1 + 6332;
    v10 = "SE_VOC_KP_L_STAMP";
    goto LABEL_16;
  }
LABEL_17:
  if ( sub_60418548(v7) )
  {
    v11 = (ActiveCollider *)(a1 + 10356);
LABEL_23:
    v13 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v11)
      && !ActiveColliderMgr_isInCreateList(v13, v11) )
    {
      ActiveColliderMgr_addToCreateList(v13, v11);
    }
    goto LABEL_26;
  }
  if ( sub_60418548(v7) )
  {
    v12 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10356));
    ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 10356));
    ActiveColldierMgr_removeFromList3(v12, a1 + 10356);
    goto LABEL_26;
  }
  if ( sub_60418548(v7) )
  {
    v11 = (ActiveCollider *)(a1 + 10356);
    goto LABEL_23;
  }
LABEL_26:
  sub_6007446C(a1);
  ((void (__fastcall *)(int))loc_600753B4)(a1);
  target.x = 0.0;
  speed[0] = dword_60C81780;
  moveValueTo((int *)(a1 + 7468), (int *)&target, speed);
  target.x = 0.0;
  speed[0] = dword_60C8178C;
  moveValueTo((int *)(a1 + 7484), (int *)&target, speed);
  result = FIELD_U8(v5, 28);
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8136C);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    FIELD_U16(a1, 6276) = 0;
    return sub_60077C30(a1);
  }
  return result;
}
