/* SE_EMY_GABON_ROCK_ref
 * address: 0x602BA02C   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_GABON_ROCK_ref(int a1)
{
  int v2; // r7
  float v3; // s0
  float v4; // s0
  char v5; // r5
  _DWORD *v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r0
  float v14; // r1
  int v15; // r5
  const char *v16; // r1
  _DWORD *v17; // r1
  unsigned int v18; // r0
  float v19; // r1
  int *v20; // r1
  unsigned int v21; // r0
  int result; // r0
  unsigned int v23; // r1
  int v24; // r5
  char v25; // r12
  bool v26; // zf
  Vec2 v27; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 640))(a1, v3);
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v5 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v6 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
      v6 += v7;
    if ( sub_60418548(*v6 + 4) )
    {
      sub_602BB404(a1);
      v5 = 1;
    }
    else
    {
      v8 = *(_DWORD **)(*(_DWORD *)v2 + 12);
      v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
        v8 += v9;
      if ( sub_60418548(*v8 + 4) )
      {
        sub_602BB4E0(a1);
        v5 = 1;
      }
      else
      {
        v5 = 1;
        if ( !FIELD_U8(a1, 6360) )
          sub_602BB404(a1);
      }
    }
  }
  FIELD_U8(a1, 6360) = v5;
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += 4 * v11;
  if ( (*(_BYTE *)(*(_DWORD *)v10 + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91094);
    goto LABEL_29;
  }
  if ( sub_60418548(*(_DWORD *)v10 + 4) )
  {
    sub_602BB2F8(a1);
    goto LABEL_29;
  }
  v12 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
    v12 += v13;
  if ( sub_60418548(*v12 + 4) )
  {
    v14 = FIELD_F32(a1, 112);
    v15 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v14;
    mapPositionToScreen(&v27, &position);
    v16 = "SE_EMY_GABON_ROCK_THROW";
LABEL_28:
    BasicSoundActor1_playSound(v15, v16, (int)&v27, 0);
    goto LABEL_29;
  }
  v17 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v18 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v18 )
    v17 += v18;
  if ( sub_60418548(*v17 + 4) )
  {
    v19 = FIELD_F32(a1, 112);
    v15 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v19;
    mapPositionToScreen(&v27, &position);
    v16 = "SE_EMY_GABON_ROCK_MAKE_ROCK";
    goto LABEL_28;
  }
LABEL_29:
  v20 = *(int **)(*(_DWORD *)v2 + 12);
  v21 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v21 )
    v20 += v21;
  result = *v20;
  if ( *(float *)(*v20 + 20) < 102.0 )
  {
    result = 6356;
    v23 = FIELD_U32(a1, 6356);
    if ( v23 )
    {
      v24 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v23);
      if ( ((unsigned int)dword_60C87BD0 & ~(1613472496 << v25) & 1) == 0 && _cxa_guard_acquire(dword_60C87BD0) )
      {
        dword_60C87BCC = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C87BD0);
      }
      if ( !v24 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91094);
      result = (**(int (__fastcall ***)(int, int *))v24)(v24, &dword_60C87BCC);
      v26 = result == 1;
      if ( result == 1 )
      {
        result = FIELD_U8(v24, 19);
        v26 = result == 0;
      }
      if ( !v26 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91094);
    }
  }
  return result;
}
