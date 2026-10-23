/* sub_602C80F4
 * address: 0x602C80F4   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C80F4(int a1)
{
  int v2; // r1
  signed int result; // r0
  bool v4; // nf
  int v5; // r1
  ActiveColliderInfo *v6; // r2
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  int v9; // s2
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r2
  float v14; // s0
  float v15; // s0
  char v16; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF

  if ( (FIELD_U8(a1, 21) & 1) == 0 )
    goto LABEL_5;
  v2 = StageActor__distanceToPlayer((StateActor *)a1, &out);
  result = 0;
  v4 = v2 < 0;
  v5 = 0;
  if ( !v4 )
    v5 = out.x < 0.0;
  if ( v5 == FIELD_U32(a1, 80) )
  {
LABEL_5:
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 164) = 0x20000000;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6300) = 1104674816;
    FIELD_U32(a1, 6304) = 1072064102;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1098907648;
    FIELD_F32(a1, 524) = FIELD_F32(a1, 524) + 256.0;
    FIELD_F32(a1, 528) = FIELD_F32(a1, 528) + 256.0;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 1107296256;
    FIELD_U32(a1, 580) = 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      FIELD_U32(a1, 620) = a1 + 28228;
      FIELD_U32(a1, 28244) = 0;
    }
    if ( Actor__getProfileId((Actor *)a1) == 564 )
      v6 = (ActiveColliderInfo *)&unk_60BE5864;
    else
      v6 = (ActiveColliderInfo *)&unk_60BE5890;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, v6, 0);
    FIELD_U32(a1, 308) = -1069547520;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 336) |= 0x8000u;
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
    }
    ActiveCollider__init((ActiveCollider *)(a1 + 6360), (StageActor *)a1, &stru_60AFE960, a1 + 6664);
    v8 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6360)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6360));
    }
    FIELD_F64(a1, 6332) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6328))(a1 + 6328);
    FIELD_U32(a1, 6340) = v9;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFE98C, &stru_60AFE998, &stru_60AFE9A4);
    FIELD_U32(a1, 3200) |= 0x40u;
    FIELD_U32(a1, 3204) |= 0x1408800u;
    v10 = FIELD_U32(a1, 3192);
    FIELD_U32(a1, 3196) |= 0x1408800u;
    FIELD_U32(a1, 3192) = v10 | 0x11008040;
    v11 = FIELD_U32(a1, 3188);
    v12 = FIELD_U32(a1, 3176);
    v13 = FIELD_U32(a1, 3184);
    FIELD_U32(a1, 3180) |= 0x1408800u;
    FIELD_U32(a1, 3188) = v11 | 0x1408800;
    FIELD_U32(a1, 3176) = v12 | 0x1D008640;
    FIELD_U32(a1, 3184) = v13 | 0x1D008640;
    CollisionMgr_init((CollisionMgr *)(a1 + 6672), (StateActor *)a1, &stru_60AFE9B0, 0, 0);
    FIELD_U32(a1, 9224) |= 0x40u;
    FIELD_U32(a1, 9228) |= 0x1408800u;
    CollisionMgr_init((CollisionMgr *)(a1 + 17376), (StateActor *)a1, &stru_60AFE9BC, 0, 0);
    FIELD_U32(a1, 19928) |= 0x40u;
    FIELD_U32(a1, 19932) |= 0x1408800u;
    CollisionMgr_init((CollisionMgr *)(a1 + 12024), (StateActor *)a1, &stru_60AFE9C8, 0, 0);
    FIELD_U32(a1, 14576) |= 0x40u;
    FIELD_U32(a1, 14580) |= 0x1408800u;
    CollisionMgr_init((CollisionMgr *)(a1 + 22728), (StateActor *)a1, &stru_60AFE9D4, 0, 0);
    FIELD_U32(a1, 25280) |= 0x40u;
    FIELD_U32(a1, 25284) |= 0x1408800u;
    v15 = CollisionMgr_process((_BYTE *)(a1 + 648), v14);
    v16 = FIELD_U32(a1, 2872) & 1;
    FIELD_U8(a1, 6314) = v16;
    FIELD_U8(a1, 6313) = v16 ^ 1;
    (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91748, v15);
    return 1;
  }
  return result;
}
