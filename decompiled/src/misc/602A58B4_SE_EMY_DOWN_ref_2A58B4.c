/* SE_EMY_DOWN_ref_2A58B4
 * address: 0x602A58B4   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2A58B4(int a1, int a2)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r5
  _BOOL4 v7; // r5
  char v8; // r6
  char v9; // r12
  float *v10; // r0
  float v11; // r1
  float v12; // s0
  float v13; // r1
  int v14; // r5
  Vec2 v15; // [sp+0h] [bp-38h] BYREF
  Vec3 position; // [sp+8h] [bp-30h] BYREF
  int v17; // [sp+14h] [bp-24h]
  StateVirtual *v18; // [sp+18h] [bp-20h]
  char v19; // [sp+1Ch] [bp-1Ch]
  _BOOL4 v20; // [sp+20h] [bp-18h]
  char v21; // [sp+24h] [bp-14h]

  result = FIELD_U8(a1, 6136);
  if ( !result )
  {
    result = FIELD_U8(a1, 536);
    if ( !FIELD_U8(a1, 536) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()
        || (result = FIELD_U8(a1, 6226), !FIELD_U8(a1, 6226)) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        v7 = sub_6000ADDC(a1, a2);
        v8 = FIELD_U8(a2, 84);
        if ( ((unsigned int)&dword_60C907F4 & ~(1613388128 << v9) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C907F4) )
          {
            dword_60C9081C = 1.5;
            dword_60C90820 = 3.9;
            dword_60C90824 = -1.5;
            dword_60C90828 = 3.9;
            _cxa_guard_release(&dword_60C907F4);
          }
        }
        v10 = (float *)((char *)&unk_60C907F0 + 8 * v7);
        v11 = v10[11];
        position.y = v10[12];
        position.x = v11;
        position.z = -4.0;
        v17 = unk_60C906E8;
        v18 = &stru_60C90710;
        v19 = -1;
        v20 = v7;
        v21 = v8;
        sub_602A852C(a1 + 6104, &position);
        v12 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
        position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
        position.x = flt_60AF1FF0[FIELD_U32(a1, 6128)] + v12;
        sub_602A38A4(a1, &position.x);
        v13 = FIELD_F32(a1, 112);
        v14 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v13;
        mapPositionToScreen(&v15, &position);
        return BasicSoundActor1_playSound(v14, "SE_EMY_DOWN", (int)&v15, 0);
      }
    }
  }
  return result;
}
