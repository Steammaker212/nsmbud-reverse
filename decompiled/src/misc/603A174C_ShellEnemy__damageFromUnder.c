/* ShellEnemy__damageFromUnder
 * address: 0x603A174C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1E1C
// 
// Overridden by: None
signed int __fastcall ShellEnemy__damageFromUnder(Enemy *a1)
{
  signed int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  float v8[6]; // [sp+8h] [bp-18h] BYREF

  result = sub_602A588C((int)a1);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    if ( v4 != result )
    {
      v5 = (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 732))(a1);
      v6 = FIELD_U32(a1, 0x0)._._.field_224;
      if ( v5 == 1 )
      {
        FIELD_U32(a1, 0x0)._._.direction = v6;
        return Enemy__damageFromUnder(a1);
      }
      else
      {
        v7 = FIELD_U32(a1, 0x0)._._.direction == (v6 ^ 1);
        v8[0] = *(float *)&dword_60AFE3F8[v6] * 0.5;
        v8[1] = 3.5;
        return ((int (__fastcall *)(Enemy *, _DWORD, float *, int, bool))SE_EMY_DOWN_ref_3A1830)(a1, 0, v8, 1, !v7);
      }
    }
  }
  return result;
}
