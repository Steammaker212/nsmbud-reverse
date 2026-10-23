/* KoopaTroopa_vf176
 * address: 0x6035C488   size: 240   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf176(int a1, signed int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r0
  StateBase *CurrentState; // r0
  int v10; // r7
  int v11; // r5

  result = FIELD_U32(a1, 7476);
  if ( result )
  {
    if ( a2 == 3 )
    {
      if ( !FIELD_U32(a1, 6352) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v10 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
        {
          v11 = FIELD_U32(a4, 64);
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 0x44))(a1, FIELD_S8(v11, 84));
          FIELD_U32(a1, 80) = sub_6000ADDC(a1, v11);
          sub_603A21FC(a1, v11, 0);
          return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Slide);
        }
      }
    }
    else if ( a2 != 1 )
    {
      return result;
    }
    v8 = a1;
    a2 = 1;
  }
  else
  {
    v8 = a1;
  }
  return ShellEnemy__vf2C0(v8, a2, a3, a4);
}
