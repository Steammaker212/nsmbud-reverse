/* SE_OBJ_BLOCK_HELP_APPEAL_ref
 * address: 0x6056B308   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BLOCK_HELP_APPEAL_ref(int a1)
{
  ColliderBase *v2; // r5
  int v3; // r1
  int v4; // r1
  float v5; // r1
  int v6; // r5
  int v7; // r6
  float v8; // s0
  int v9; // r1
  int v10; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = (ColliderBase *)(a1 + 6120);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    sub_605D006C(a1);
  v3 = FIELD_U32(a1, 7436);
  if ( v3 )
    FIELD_U32(a1, 7436) = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6984) + FIELD_F32(a1, 6796);
  ShapedCollider_execute(v2);
  sub_6056B158((ModelWrapper **)a1);
  if ( !FIELD_U8(dword_60C99DD4, 1396) )
  {
    v4 = FIELD_U32(a1, 7440);
    if ( v4 < 199 )
    {
      if ( v4 >= 15 )
      {
        v5 = FIELD_F32(a1, 112);
        v6 = FIELD_U32(a1, 8);
        v7 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v5;
        mapPositionToScreen(&out, &position);
        SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v7, "SE_OBJ_BLOCK_HELP_APPEAL", v6, &out, 0);
      }
    }
    else
    {
      FIELD_U8(dword_60C99DD4, 1396) = 1;
    }
    ++FIELD_U32(a1, 7440);
  }
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_U32(a1, 108);
  v10 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 7400) = 1123024896;
  FIELD_U32(a1, 7408) = v9;
  FIELD_F32(a1, 7412) = v8 + 8.0;
  FIELD_U32(a1, 7416) = v10;
  LightMask__update((LightMask *)(a1 + 7396));
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_605B2D70(a1);
  FIELD_U8(a1, 6841) = 0;
  return 1;
}
