/* SE_OBJ_PNGN_ICE_SLIDE_ref_2
 * address: 0x606D7408   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_SLIDE_ref_2(int a1)
{
  float v2; // s0
  int v3; // r7
  _BYTE *v4; // r6
  float v5; // r1
  int v6; // r5
  float v7; // r1
  int v8; // r5
  int v9; // r6
  int result; // r0
  int v11; // r0
  int v12; // r2
  StateMgr *v13; // r4
  StateBase *CurrentState; // r0
  int v15; // r5
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_605CC4D8(a1, v2);
  v3 = a1 + 648;
  v4 = (_BYTE *)(a1 + 6849);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( !*v4 )
    {
      v5 = FIELD_F32(a1, 112);
      v6 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_LAND", &out.x, 0);
    }
    *v4 = 1;
    FIELD_U32(a1, 124) = 0;
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 8);
    v9 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v9, "SE_OBJ_PNGN_ICE_SLIDE", v8, &out, 0);
  }
  else
  {
    *v4 = 0;
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v3 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v11 = result + 28;
    v12 = v11 >> 5;
    result = v11 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v12 + 2224) & (1 << result)) == 0 )
    {
      v13 = (StateMgr *)(a1 + 6084);
      CurrentState = StateMgr__getCurrentState(v13);
      v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CBB75C + 8))();
      if ( v15 != result )
        return (int)StateMgr__changeState(v13, (StateBase *)&dword_60CBB75C);
    }
  }
  return result;
}
