/* SE_OBJ_ICICLE_BREAK_ref_12C56C
 * address: 0x6012C56C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_BREAK_ref_12C56C(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r2
  float v5; // r1
  int v6; // r5
  Vec3 v7; // [sp+0h] [bp-40h] BYREF
  int v8; // [sp+10h] [bp-30h] BYREF
  float v9; // [sp+14h] [bp-2Ch]
  int v10; // [sp+18h] [bp-28h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF
  Vec3 position; // [sp+28h] [bp-18h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 340) = 0;
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 116);
    v8 = FIELD_U32(a1, 108);
    v9 = v3;
    v10 = v4;
    v5 = FIELD_F32(a1, 112);
    v7.x = FIELD_F32(a1, 108);
    v7.y = v5;
    v7.z = 4500.0;
    EffectData_create(1005, &v7, 0, 0);
    v9 = v9 + -40.0;
    BigBlockFragmentHeap_ref(dword_60C99CDC, &v8, 3);
    v6 = Global_BasicSoundActor2;
    position.x = v7.x;
    position.y = v7.y;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v6, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C87364);
  }
  return result;
}
