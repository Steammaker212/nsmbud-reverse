/* SE_OBJ_TARU_HIT_ref
 * address: 0x6028A100   size: 1136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_TARU_HIT_ref(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  Actor *v6; // r7
  int ProfileId; // r0
  char v8; // r12
  bool v9; // zf
  float v10; // s16
  StageActor *v11; // r4
  int v12; // r0
  float v13; // s0
  int v14; // r0
  float lastCollisionOffsetX; // s16
  StageActor *owner; // r5
  int v17; // r4
  float v18; // s0
  StateBase *CurrentState; // r0
  int v20; // r6
  char v21; // r12
  StateBase *v22; // r0
  int v23; // r5
  _DWORD *v24; // r0
  int v25; // r6
  int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r0
  int v29; // r0
  bool v30; // zf
  float v31; // r1
  int v32; // r5
  float v33; // s4
  int v34; // r1
  unsigned int v35; // r0
  Vec3 position; // [sp+4h] [bp-44h] BYREF
  Vec2 out; // [sp+10h] [bp-38h] BYREF

  v6 = &FIELD_U32(a3, 0x40);
  ProfileId = Actor__getProfileId(v6);
  v9 = ProfileId == 381;
  if ( ProfileId != 381 )
    v9 = ProfileId == 512;
  if ( v9 || ProfileId == 513 )
  {
    lastCollisionOffsetX = FIELD_F32(a2, 0xBC);
    owner = FIELD_U32(a2, 0x40);
    if ( ((unsigned int)&dword_60C8F37C & ~(1613275752 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
    {
      dword_60C8F378 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8F37C);
    }
    if ( owner )
    {
      v17 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C8F378);
      if ( v17 )
        v17 = (int)owner;
    }
    else
    {
      v17 = 0;
    }
    v18 = FIELD_F32(v17, 108) + (float)(lastCollisionOffsetX * 0.5);
    FIELD_F32(v17, 108) = v18;
    FIELD_F32(v17, 6568) = v18;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v20 == (*(int (**)(void))(dword_60C8F22C + 8))()
      || (v22 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22),
          v23 == (*(int (**)(void))(dword_60C8F24C + 8))()) )
    {
      v25 = a1 + 6300;
      v24 = *(_DWORD **)(a1 + 6300);
      v26 = v24[3];
      v27 = v24[2];
      v28 = v24[17];
      if ( v27 > v28 )
        v26 += 4 * v28;
      v29 = (int)*(float *)(*(_DWORD *)v26 + 20);
      v30 = v29 == 12;
      if ( v29 != 12 )
        v30 = v29 == 0;
      if ( v30 )
      {
        if ( ((unsigned int)&dword_60C830F8 & ~(1613276096 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
        {
          dword_60C830F4 = (int)&off_60BC321C;
          _cxa_guard_release(&dword_60C830F8);
        }
        if ( v6
          && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C830F4) == 1
          && sub_603A1E88(v6, lastCollisionOffsetX >= 0.0) == 1 )
        {
          v31 = FIELD_F32(v17, 112);
          v32 = Global_BasicSoundActor2;
          position.x = FIELD_F32(v17, 108);
          position.y = v31;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v32, "SE_OBJ_TARU_HIT", &out.x, 0);
          v33 = FIELD_F32(v17, 112);
          position.x = FIELD_F32(v17, 108) + (float)((float)byte_60AFE3F4[FIELD_U32(v17, 80)] * 12.0);
          position.y = v33 + 8.0;
          position.z = 4500.0;
          EffectData_create(660, &position, 0, 0);
          FIELD_U32(a1, 6580) = 4;
          FIELD_U16(a1, 6598) = 8;
          FIELD_U32(a1, 6564) = 0;
          v34 = *(_DWORD *)(*(_DWORD *)v25 + 12);
          v35 = *(_DWORD *)(*(_DWORD *)v25 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v25 + 8) > v35 )
            v34 += 4 * v35;
          *(_DWORD *)(*(_DWORD *)v34 + 24) = 0;
          FIELD_U32(a1, 120) = 0;
        }
        else if ( !FIELD_U8(a1, 6607) )
        {
          FIELD_U8(a1, 6607) = 1;
          v14 = FIELD_U32(a1, 80);
          goto LABEL_44;
        }
      }
    }
  }
  else if ( ProfileId == 659 )
  {
    v10 = FIELD_F32(a2, 0xBC);
    v11 = FIELD_U32(a2, 0x40);
    if ( ((unsigned int)&dword_60C8F37C & ~(1613275532 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
    {
      dword_60C8F378 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8F37C);
    }
    v12 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v11, 0x0))(v11, &dword_60C8F378);
    if ( v12 )
      v12 = (int)v11;
    if ( (v13 = FIELD_F32(v12, 108) + (float)(v10 * 0.5),
          FIELD_F32(v12, 108) = v13,
          FIELD_F32(v12, 6568) = v13,
          v14 = FIELD_U32(a1, 80),
          v10 < 0.0)
      && !v14
      || v10 > 0.0 && v14 == 1 )
    {
      if ( !FIELD_U8(a1, 6607) )
      {
        FIELD_U8(a1, 6607) = 1;
LABEL_44:
        FIELD_U32(a1, 80) = v14 ^ 1;
        FIELD_U32(a1, 120) = 0;
      }
    }
  }
  return Enemy__vfE8((Enemy *)a1, a2, a3);
}
