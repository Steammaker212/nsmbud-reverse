/* PowBlock_onCreate
 * address: 0x606BCB34   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall PowBlock_onCreate(int a1)
{
  int v2; // r5
  ActiveColliderMgr *v3; // r6
  TileCheck *v4; // r0
  float v5; // s0
  Vec2 positionOffset; // [sp+8h] [bp-98h] BYREF
  Vec2 a3; // [sp+10h] [bp-90h] BYREF
  TileCheck_Result v9; // [sp+18h] [bp-88h] BYREF
  TileCheck v10; // [sp+44h] [bp-5Ch] BYREF

  v2 = 2;
  if ( !sub_603FD6E0(
          dword_60C99DF4,
          FIELD_U8(LevelInfo_instance, 18),
          FIELD_F32(a1, 6824),
          FIELD_F32(a1, 6828))
    && Actor__onCreate() != 2 )
  {
    fb_dummy_ref(a1);
    FIELD_U32(a1, 576) = dword_60CBA78C;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1098907648;
    FIELD_U32(a1, 116) = 1137836032;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1B750, 0);
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B08874, &stru_60B08880, &stru_60B0888C);
    ShapedCollider_init((ShapedCollider *)(a1 + 0x1818), (StageActor *)a1, &stru_60CBA730);
    FIELD_U32(a1, 0x1950) = SE_OBJ_POW_BLOCK_QUAKE_ref_6BD03C;
    FIELD_U32(a1, 0x1954) = SE_OBJ_POW_BLOCK_QUAKE_ref_6BD27C;
    FIELD_U32(a1, 0x1958) = SE_OBJ_POW_BLOCK_QUAKE_ref_6BD514;
    FIELD_U32(a1, 0x1968) = a1 + 0x1AE8;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 0x1818));
    if ( (FIELD_U8(a1, 20) & 0xF) != 0 )
    {
      v4 = sub_6015D0AC(&v10);
      v9.field_C = 0;
      v9.field_10 = 0;
      v5 = FIELD_F32(a1, 112);
      a3.x = FIELD_F32(a1, 108);
      positionOffset.x = a3.x;
      a3.y = v5 + -1.0;
      positionOffset.y = v5 + -128.0;
      if ( TileCheck_check(v4, &v9, &a3, &positionOffset, 8) == 1 )
        FIELD_F32(a1, 112) = v9.field_8;
    }
    FIELD_U32(a1, 620) = a1 + 6848;
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0ECC._._);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
    return 1;
  }
  return v2;
}
