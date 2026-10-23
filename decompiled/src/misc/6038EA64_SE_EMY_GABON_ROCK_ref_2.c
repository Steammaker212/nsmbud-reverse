/* SE_EMY_GABON_ROCK_ref_2
 * address: 0x6038EA64   size: 1432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_GABON_ROCK_ref_2(int a1)
{
  int v2; // r7
  char v3; // r12
  float v4; // s0
  int v5; // r0
  float v6; // r1
  int v7; // r0
  int v8; // r0
  float v9; // s0
  int result; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  _DWORD *v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  _BYTE *v19; // r0
  int v20; // r2
  unsigned int v21; // r1
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r5
  StateBase *CurrentState; // r0
  int v26; // r6
  _DWORD *v27; // r1
  unsigned int v28; // r0
  float v29; // r1
  int v30; // r5
  const char *v31; // r1
  _DWORD *v32; // r1
  unsigned int v33; // r0
  float v34; // r1
  int *v35; // r1
  unsigned int v36; // r0
  unsigned int v37; // r1
  int v38; // r5
  char v39; // r12
  bool v40; // zf
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( ((unsigned int)&dword_60C96F14 & ~(1614342820 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C96F14) )
  {
    dword_60C96F10 = (int)(float)((float)(2147500000.0 * 5.625) / 180.0);
    _cxa_guard_release(&dword_60C96F14);
  }
  LODWORD(position.x) = dword_60C96F04;
  if ( FIELD_U32(a1, 80) == 1 )
    LODWORD(position.x) = -dword_60C96F04;
  moveValueTo((int *)(a1 + 160), (int *)&position, &dword_60C96F10);
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  v5 = FIELD_U32(a1, 2872);
  if ( (v5 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( !FIELD_U8(a1, 6352) )
    {
      v6 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 6328);
      position.y = v6;
      position.z = 4500.0;
      v7 = FIELD_U8(a1, 5957);
      if ( v7 == 1 )
      {
        v8 = 876;
      }
      else if ( v7 == 2 )
      {
        v8 = 875;
      }
      else
      {
        v8 = 874;
      }
      EffectData_create(v8, &position, 0, 0);
      v5 = FIELD_U32(a1, 2872);
    }
  }
  if ( (v5 & 0x10400) == 0x400 )
  {
    v9 = FIELD_F32(a1, 124);
    if ( v9 > 0.0 )
      FIELD_F32(a1, 124) = v9 * -0.2;
  }
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  result = SE_OBJ_CMN_SPLASH_ref_39057C(a1);
  if ( !result )
  {
    v11 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
      v11 += v12;
    if ( sub_60418548(*v11 + 4) )
    {
      FIELD_U32(a1, 124) = dword_60C96F18;
      FIELD_U32(a1, 100) = dword_60C96F00;
      v13 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v14 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v14 )
        v13 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065571102;
    }
    v15 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v16 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v16 )
      v15 += v16;
    if ( sub_60418548(*v15 + 4) )
    {
      v17 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v18 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v18 )
        v17 += 4 * v18;
      *(_DWORD *)(*(_DWORD *)v17 + 24) = 0;
      FIELD_U8(a1, 6368) = 1;
      v19 = (_BYTE *)(a1 + 6368);
    }
    else
    {
      v19 = (_BYTE *)(a1 + 6368);
      if ( !FIELD_U8(a1, 6368) )
        goto LABEL_37;
    }
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      v20 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v21 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v21 )
        v20 += 4 * v21;
      *(_DWORD *)(*(_DWORD *)v20 + 24) = 1065353216;
      *v19 = 0;
    }
LABEL_37:
    v22 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v23 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v23 )
      v22 += 4 * v23;
    if ( (*(_BYTE *)(*(_DWORD *)v22 + 28) & 0x20) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96E14);
    }
    else
    {
      if ( sub_60418548(*(_DWORD *)v22 + 4) )
      {
        result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6364));
        v24 = result;
        if ( !result )
          return result;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(result + 6084));
        v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v26 == (*(int (**)(void))(dword_60C880E0 + 8))() )
        {
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)v24 + 192))(v24, &unk_60C88100);
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 632))(v24);
        }
        goto LABEL_54;
      }
      v27 = *(_DWORD **)(*(_DWORD *)v2 + 12);
      v28 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v28 )
        v27 += v28;
      if ( sub_60418548(*v27 + 4) )
      {
        v29 = FIELD_F32(a1, 112);
        v30 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v29;
        mapPositionToScreen(&out, &position);
        v31 = "SE_EMY_GABON_ROCK_THROW";
      }
      else
      {
        v32 = *(_DWORD **)(*(_DWORD *)v2 + 12);
        v33 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v33 )
          v32 += v33;
        if ( !sub_60418548(*v32 + 4) )
          goto LABEL_54;
        v34 = FIELD_F32(a1, 112);
        v30 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v34;
        mapPositionToScreen(&out, &position);
        v31 = "SE_EMY_GABON_ROCK_MAKE_ROCK";
      }
      BasicSoundActor1_playSound(v30, v31, (int)&out, 0);
    }
LABEL_54:
    v35 = *(int **)(*(_DWORD *)v2 + 12);
    v36 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v36 )
      v35 += v36;
    result = *v35;
    if ( *(float *)(*v35 + 20) < 102.0 )
    {
      result = 6364;
      v37 = FIELD_U32(a1, 6364);
      if ( v37 )
      {
        v38 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v37);
        if ( ((unsigned int)&dword_60C88164 & ~(1614344024 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
        {
          dword_60C88160 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C88164);
        }
        if ( !v38 )
          goto LABEL_65;
        result = (**(int (__fastcall ***)(int, int *))v38)(v38, &dword_60C88160);
        v40 = result == 1;
        if ( result == 1 )
        {
          result = FIELD_U8(v38, 19);
          v40 = result == 0;
        }
        if ( !v40 )
        {
LABEL_65:
          if ( FIELD_F32(a1, 124) > 0.0 )
            FIELD_U32(a1, 124) = -1086324736;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96E14);
        }
      }
    }
  }
  return result;
}
