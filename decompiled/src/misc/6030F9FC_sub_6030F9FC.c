/* sub_6030F9FC
 * address: 0x6030F9FC   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030F9FC(Enemy *a1)
{
  StateBase *CurrentState; // r0
  Actor *v3; // r5
  Actor **p_parent; // r6
  int result; // r0
  float z; // s2
  int v7; // r1
  bool v8; // zf
  sead_ListNode *v9; // r1
  char v10; // r12
  Enemy *v11; // r1
  _DWORD v12[17]; // [sp+4h] [bp-44h] BYREF

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v3 = (Actor *)(*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  p_parent = &a1[1]._._._._.parent;
  if ( v3 == (Actor *)(*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    *(_BYTE *)p_parent = 0;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)p_parent )
    {
      v3 = (Actor *)v12;
      memset(&v12[1], 0, 40);
      v12[0] = FIELD_U32(a1, 0x50) | (16 * dword_60AF1F38[a1[1]._._._._.heap]);
      v12[3] = Profile__get(520u);
      v12[7] = FIELD_U32(a1, 0xA0);
      z = FIELD_F32(a1, 0x74);
      v7 = *(_DWORD *)&a1[1]._._._._.movementId;
      v12[4] = a1[1]._._._._.settings1;
      v12[5] = v7;
      *(float *)&v12[6] = z + -100.0;
      LOBYTE(v12[8]) = FIELD_U8(a1, 0x56);
      v12[2] = FIELD_U32(a1, 0x8);
      sub_600080BC((_DWORD *)ActorMgr__instance, v12);
      *(_BYTE *)p_parent = 0;
    }
    result = FIELD_U32(a1, 0x28);
    if ( result >= 1 )
    {
      result = (int)FIELD_U32(a1, 0x24);
      v8 = result == 0;
      if ( result )
      {
        v9 = (sead_ListNode *)FIELD_U32(a1, 0x2C);
        v3 = (Actor *)(result - (_DWORD)v9);
        v8 = result == (_DWORD)v9;
      }
      if ( !v8 )
      {
        while ( 1 )
        {
          result = Actor__getProfileId(v3);
          if ( result == 520 )
            break;
          result = FIELD_U32(a1, 0x2C);
          v11 = *(Enemy **)((char *)&FIELD_U32(v3, 0x4) + result);
          v3 = (Actor *)((char *)&FIELD_U32(v11, 0x0) - result);
          if ( v11 == (Enemy *)&FIELD_U32(a1, 0x20) )
            v3 = 0;
          if ( !v3 )
            return result;
        }
        if ( v3 )
        {
          if ( ((unsigned int)&dword_60C7B364 & ~(1613822848 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          result = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI);
          if ( result == 1 )
          {
            v3[1].field_20.next = *(sead_ListNode **)&a1[1]._._._._.movementId;
            v3[1].field_20.previous = (sead_ListNode *)a1[1]._._._._.settigns2;
            result = a1[1]._._._._.settings1;
            *(_DWORD *)&v3[1].movementId = result;
          }
        }
      }
    }
  }
  return result;
}
