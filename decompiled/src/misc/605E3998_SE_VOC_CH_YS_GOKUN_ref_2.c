/* SE_VOC_CH_YS_GOKUN_ref_2
 * address: 0x605E3998   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_VOC_CH_YS_GOKUN_ref_2(StateMethodExecuter *result)
{
  char *vtable; // r4
  char *v2; // r11
  _DWORD *p_owner; // r10
  int *p_currentState; // r8
  StateMethodExecuter *v5; // r9
  int v6; // r5
  int v7; // r0
  int v8; // r6
  char v9; // r12
  int v10; // r0
  int *v11; // r0
  StateMethodExecuter *v12; // [sp+4h] [bp-44h]
  int v13; // [sp+8h] [bp-40h]

  vtable = (char *)result[538].vtable;
  if ( vtable && (result[521].currentState & 0x1000000) == 0 && (BYTE1(result[522].vtable) & 0x20) == 0 )
  {
    v12 = result + 538;
    v13 = (int)result;
    v2 = 0;
    p_owner = &result[537].owner;
    p_currentState = &result[537].currentState;
    v5 = result + 537;
    v6 = ActorMgr__instance + 27168;
    do
    {
      v7 = *p_currentState;
      if ( (int)&v2[*p_currentState] >= *p_owner )
        v7 -= *p_owner;
      v8 = ActorMgrRelated_getById(v6, *((_DWORD *)FIELD_U32(v5, 0x0) + 5 * (_DWORD)&v2[v7]));
      if ( ((unsigned int)&dword_60C7B364 & ~(1616788108 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
      {
        v10 = FIELD_U32(v8, 624);
        if ( v10 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 20))(v10, v13);
      }
      ++v2;
    }
    while ( vtable != v2 );
    FIELD_U32(v12, 0x0) = 0;
    *p_currentState = 0;
    sub_605D8994((_DWORD *)v13);
    v11 = sub_60002B90(FIELD_S8(v13, 6336), unk_60C26404);
    sub_605D8938(v13, "SE_VOC_CH_YS_GOKUN", (int)v11);
    return StateMgr__changeState((StateMgr *)(v13 + 6424), (StateBase *)&dword_60CB1AA4);
  }
  return result;
}
