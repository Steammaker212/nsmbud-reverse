/* SE_OBJ_POW_BLOCK_QUAKE_ref
 * address: 0x606BC598   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_POW_BLOCK_QUAKE_ref(int a1)
{
  float v2; // s0
  int v3; // r1
  int v4; // r0
  float v5; // r1
  int v6; // r5
  _DWORD v7[2]; // [sp+4h] [bp-2Ch] BYREF
  char v8; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += 100663296 * byte_60B057DC[FIELD_U32(a1, 80)];
  sub_605CC4D8(a1, v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v7[0] = 15;
    v7[1] = unk_60C26434;
    v8 = 0;
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v6, "SE_OBJ_POW_BLOCK_QUAKE", &out.x, (int)v7);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBA6CC);
  }
  else
  {
    v3 = FIELD_U32(a1, 80);
    v4 = a1 + 648;
    if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v3 + 18) >> 5) + 2224) & (1 << ((v3 + 18) & 0x1F))) != 0
       || (*(_DWORD *)(v4 + 4 * ((v3 + 22) >> 5) + 2224) & (1 << ((v3 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v4 + 4 * ((v3 + 28) >> 5) + 2224) & (1 << ((v3 + 28) & 0x1F))) == 0 )
    {
      sub_605CC8F8(a1);
    }
  }
}
