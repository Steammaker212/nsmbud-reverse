/* ShellEnemy__collisionEnemy
 * address: 0x603A0C74   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D50
// 
// Overridden by: None
int __fastcall ShellEnemy__collisionEnemy(int a1, int a2, int a3)
{
  Actor *v6; // r0
  int result; // r0
  StateBase *CurrentState; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  float v12; // s0
  int v13; // r1

  if ( FIELD_U8(a1, 6609)
    && FIELD_U32(a3, 136) == 10
    && (v6 = *(Actor **)(a3 + 64)) != 0
    && (result = Actor__getProfileId(v6), result == 222) )
  {
    if ( FIELD_F32(a1, 124) <= 0.0 )
    {
      FIELD_U8(a1, 6610) = 1;
      return 6610;
    }
  }
  else
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))()
      && (FIELD_U8(a3, 149) & 2) != 0
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a2, a3) == 1 )
    {
      goto LABEL_16;
    }
    if ( ((int (__fastcall *)(int, int))loc_603A0E5C)(a2, a3) == 1 )
    {
      FIELD_U8(a2, 110) |= 2u;
      result = FIELD_U8(a3, 110) | 2;
      FIELD_U8(a3, 110) = result;
      return result;
    }
    v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    if ( v11 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))()
      && (FIELD_U8(a3, 153) & 1) != 0
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a2, a3) == 1 )
    {
LABEL_16:
      result = FIELD_U8(a2, 110) | 2;
      FIELD_U8(a2, 110) = result;
      return result;
    }
    v12 = FIELD_F32(a2, 188);
    result = FIELD_U32(a1, 80);
    if ( v12 < 0.0 && !result || v12 > 0.0 && result == 1 )
    {
      v13 = FIELD_U32(a3, 64);
      if ( v13 )
      {
        result = sub_6000ADDC(a1, v13);
        if ( FIELD_U32(a1, 80) != result )
          return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 712))(a1);
      }
    }
  }
  return result;
}
