/* sub_60702F30
 * address: 0x60702F30   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60702F30(int a1)
{
  StateMethodExecuter *result; // r0
  char v3; // r12
  StateMethodExecuter *v4; // r5
  float v5; // s8
  float v6; // s10
  float v7; // s2
  int v8; // r5
  char v9; // r12
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s4

  result = (StateMethodExecuter *)sub_606D4BD4(FIELD_U8(a1, 28));
  v4 = result;
  if ( result )
  {
    FIELD_U32(a1, 6932) = FIELD_U32(result, 0x8);
    if ( ((unsigned int)&dword_60C8DECC & ~(1617964908 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
    {
      dword_60C8DEC8 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8DECC);
    }
    if ( (*(int (__fastcall **)(StateMethodExecuter *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C8DEC8) == 1 )
    {
      v5 = *(float *)&v4[509].vtable;
      v6 = FIELD_F32(a1, 6912);
      v7 = FIELD_F32(a1, 6908) - *(float *)&v4[508].currentState;
      FIELD_F32(a1, 6916) = FIELD_F32(a1, 6904) - *(float *)&v4[508].owner;
      FIELD_F32(a1, 6920) = v7;
      FIELD_F32(a1, 6924) = v6 - v5;
    }
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6932));
    if ( v8 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617965172 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
      {
        v10 = FIELD_F32(v8, 108);
        v11 = FIELD_F32(v8, 112);
        v12 = FIELD_F32(a1, 6920);
        v13 = FIELD_F32(a1, 6916);
        FIELD_U32(a1, 116) = 1161527296;
        FIELD_F32(a1, 108) = v10 + v13;
        FIELD_F32(a1, 112) = v11 + v12;
      }
    }
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC7E0);
  }
  return result;
}
