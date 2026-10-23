/* SE_OBJ_BALLOON_BREAK_ref
 * address: 0x60248FA4   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BALLOON_BREAK_ref(int a1)
{
  float v2; // s0
  unsigned int v3; // r1
  Actor *v4; // r1
  float v5; // r1
  int v6; // r5
  _BYTE *v7; // r5
  unsigned int v8; // r1
  Actor *v9; // r1
  int result; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v2 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v2;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
  {
    FIELD_U8(a1, 6336) = 1;
    v3 = FIELD_U32(a1, 6340);
    if ( v3 )
    {
      v4 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( v4 )
        Actor__removeChild((Actor *)a1, v4);
      FIELD_U32(a1, 6340) = 0;
    }
    EffectData_create(
      *(_DWORD *)((char *)&unk_60AF24B4 + ((FIELD_U32(a1, 20) >> 2) & 0xC)),
      (Vec3 *)(a1 + 108),
      0,
      0);
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    sub_60813BDC(v6, "SE_OBJ_BALLOON_BREAK", &out, 1, 0);
    FIELD_U8(a1, 19) = 1;
  }
  v7 = (_BYTE *)(a1 + 6336);
  if ( (float)(FIELD_F32(dword_60CC6484, 124) + -48.0) < FIELD_F32(a1, 112) )
  {
    *v7 = 1;
    v8 = FIELD_U32(a1, 6340);
    if ( v8 )
    {
      v9 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
      if ( v9 )
        Actor__removeChild((Actor *)a1, v9);
      FIELD_U32(a1, 6340) = 0;
    }
  }
  result = (unsigned __int8)*v7;
  if ( *v7 )
  {
    FIELD_U32(a1, 100) = 1036831949;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 1077936128;
    FIELD_U32(a1, 140) = 0;
    return 0;
  }
  return result;
}
