/* SE_OBJ_TARU_HIT_ref_2
 * address: 0x6028A5DC   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_TARU_HIT_ref_2(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  char v7; // r12
  int v8; // r4
  _BOOL4 v9; // r8
  StateBase *CurrentState; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r5
  _DWORD *v14; // r0
  int v15; // r6
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r0
  bool v20; // zf
  float y; // r1
  int v22; // r4
  float v23; // s4
  int v24; // r0
  int v25; // r1
  unsigned int v26; // r0
  StageActor *v28; // [sp+0h] [bp-48h]
  Vec3 position; // [sp+4h] [bp-44h] BYREF
  Vec2 out; // [sp+10h] [bp-38h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( Actor__getProfileId(&FIELD_U32(owner, 0x0)) == 391 )
  {
    v8 = 0;
    v28 = FIELD_U32(a2, 0x40);
    v9 = FIELD_F32(a2, 0xBC) >= 0.0;
    if ( ((unsigned int)&dword_60C8F384 & ~(1613276744 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F384) )
    {
      dword_60C8F380 = (int)&off_60BDE360;
      _cxa_guard_release(&dword_60C8F384);
    }
    if ( owner )
    {
      v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C8F380);
      if ( v8 )
        v8 = (int)owner;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v11 == (*(int (**)(void))(dword_60C8F22C + 8))()
      || (v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12),
          v13 == (*(int (**)(void))(dword_60C8F24C + 8))()) )
    {
      v15 = a1 + 6300;
      v14 = *(_DWORD **)(a1 + 6300);
      v16 = v14[3];
      v17 = v14[2];
      v18 = v14[17];
      if ( v17 > v18 )
        v16 += 4 * v18;
      v19 = (int)*(float *)(*(_DWORD *)v16 + 20);
      v20 = v19 == 12;
      if ( v19 != 12 )
        v20 = v19 == 0;
      if ( v20 && v8 && SE_OBJ_TARU_HIT_ref_2_helper(v8, v9, COERCE_FLOAT((int)*(float *)(*(_DWORD *)v16 + 20))) == 1 )
      {
        y = FIELD_U32(v28, 0x6C).y;
        v22 = Global_BasicSoundActor2;
        position.x = FIELD_U32(v28, 0x6C).x;
        position.y = y;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v22, "SE_OBJ_TARU_HIT", &out.x, 0);
        v23 = FIELD_U32(v28, 0x6C).y;
        position.x = FIELD_U32(v28, 0x6C).x + (float)((float)byte_60AFE3F4[v9] * 12.0);
        position.y = v23 + 16.0;
        position.z = 4500.0;
        EffectData_create(660, &position, 0, 0);
        v24 = 4;
        if ( (float)(FIELD_U32(v28, 0x6C).y + 16.0) < FIELD_U32(owner, 0x6C).y )
          v24 = 12;
        FIELD_U32(a1, 6580) = v24;
        FIELD_U16(a1, 6598) = 8;
        FIELD_U32(a1, 6564) = 0;
        v25 = *(_DWORD *)(*(_DWORD *)v15 + 12);
        v26 = *(_DWORD *)(*(_DWORD *)v15 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > v26 )
          v25 += 4 * v26;
        *(_DWORD *)(*(_DWORD *)v25 + 24) = 0;
        FIELD_U32(a1, 120) = 0;
      }
    }
  }
  return Enemy__vf100((Enemy *)a1, a2, a3);
}
