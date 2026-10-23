/* SE_EMY_DOWN_ref_3A1830
 * address: 0x603A1830   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3A1830(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // r8
  int v10; // r6
  StateBase *CurrentState; // r0
  int v12; // r7
  char v13; // r12
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  bool v18; // zf
  float v19; // r1
  int v20; // r5
  float v21; // r1
  int v22; // r1
  StateBase *v23; // r0
  int v24; // r5
  void (__fastcall *v25)(int, StateVirtual *); // r2
  int v26; // r0
  bool v27; // zf
  float v28; // r1
  int v29; // r5
  unsigned int v30; // r5
  int v31; // r0
  signed int v32; // r2
  float v33; // r1
  int v34; // r1
  StateBase *v35; // r0
  int v36; // r5
  Vec2 v38; // [sp+0h] [bp-38h] BYREF
  Vec3 position; // [sp+8h] [bp-30h] BYREF

  v10 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v12 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v14 = FIELD_U32(a1, 620);
      v15 = v14 == 0;
      if ( v14 )
        v15 = FIELD_U32(v14, 12) == 0;
      if ( v15 )
      {
        v16 = FIELD_U32(a1, 624);
        v17 = v16 == 0;
        if ( v16 )
          v17 = FIELD_U32(v16, 24) == 0;
        if ( v17 )
        {
          v18 = a2 == 0;
          if ( a2 )
          {
            v5 = FIELD_U32(a2, 64);
            v18 = v5 == 0;
          }
          if ( v18 || FIELD_U8(v5, 84) >= 4u )
          {
            v19 = FIELD_F32(a1, 112);
            v20 = Global_BasicSoundActor1;
            position.x = FIELD_F32(a1, 108);
            position.y = v19;
            mapPositionToScreen(&v38, &position);
            BasicSoundActor1_playSound(v20, "SE_EMY_DOWN", (int)&v38, 0);
            v21 = FIELD_F32(a1, 112);
            position.x = FIELD_F32(a1, 108);
            position.y = v21;
            position.z = 0.0;
            sub_602A38A4(a1, &position.x);
            v22 = a3[1];
            FIELD_U32(a1, 120) = *a3;
            FIELD_U32(a1, 124) = v22;
            FIELD_U32(a1, 128) = 0;
            if ( a4 )
            {
              if ( !FIELD_U8(a1, 6386) )
                FIELD_U32(a1, 6388) = a5;
              FIELD_U8(a1, 6386) = 1;
            }
            FIELD_U32(a1, 6376) = 511;
            FIELD_U32(a1, 6380) = 96;
            v23 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
            if ( v24 != (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
            {
              v25 = *(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192);
LABEL_41:
              v25(a1, &ShellEnemy_StateID_Sleep);
              return 1;
            }
          }
          else
          {
            v26 = FIELD_U32(a2, 140);
            v27 = v26 == 10;
            if ( v26 != 10 )
              v27 = v26 == 5;
            if ( !v27 )
              goto LABEL_30;
            if ( ((unsigned int)&dword_60C7B37C & ~(1614420472 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
            {
              SE_EMY_DOWN_COMBO_ref((float *)a1, v5);
            }
            else
            {
LABEL_30:
              v28 = FIELD_F32(a1, 112);
              v29 = Global_BasicSoundActor1;
              position.x = FIELD_F32(a1, 108);
              position.y = v28;
              mapPositionToScreen(&v38, &position);
              BasicSoundActor1_playSound(v29, "SE_EMY_DOWN", (int)&v38, 0);
            }
            v30 = FIELD_S8(v5, 84);
            if ( v30 <= 3 )
            {
              v31 = sub_602855F4(v5);
              v32 = sub_602856EC((int *)(a1 + 6292), v31);
              if ( v32 >= 0 )
                sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v32, v30);
            }
            v33 = FIELD_F32(a1, 112);
            position.x = FIELD_F32(a1, 108);
            position.y = v33;
            position.z = 0.0;
            sub_602A38A4(a1, &position.x);
            v34 = a3[1];
            FIELD_U32(a1, 120) = *a3;
            FIELD_U32(a1, 124) = v34;
            FIELD_U32(a1, 128) = 0;
            if ( a4 )
            {
              if ( !FIELD_U8(a1, 6386) )
                FIELD_U32(a1, 6388) = a5;
              FIELD_U8(a1, 6386) = 1;
            }
            FIELD_U32(a1, 6376) = 511;
            FIELD_U32(a1, 6380) = 96;
            v35 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v36 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v35, 0x0) + 2))(v35);
            if ( v36 != (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
            {
              v25 = *(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192);
              goto LABEL_41;
            }
          }
          (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
            FIELD_U32(a1, 6084),
            FIELD_U32(a1, 6092));
          return 1;
        }
      }
    }
  }
  return v10;
}
