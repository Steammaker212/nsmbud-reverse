/* BossBase__collisionThrowableObject
 * address: 0x60025720   size: 628   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A68EC
// 
// Overridden by:
//   - 0x60072364 : FinalBowser
signed int __fastcall BossBase__collisionThrowableObject(BossBase *a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r6
  char v6; // r12
  int v7; // r7
  StateBase *CurrentState; // r0
  int v9; // r9
  StateBase *v10; // r0
  int v11; // r8
  void (__fastcall *v12)(BossBase *, int); // r6
  int v13; // r0
  int v14; // r7
  int vtable; // r0

  v3 = FIELD_U32(a3, 64);
  v5 = 0;
  if ( !v3
    || FIELD_U8(v3, 19)
    || LOBYTE(FIELD_U32(a1, 0x0).freezeMgr.field_44)
    || Actor__getProfileId(*(Actor **)(a3 + 64)) != 392 )
  {
    return v5;
  }
  if ( ((unsigned int)&dword_60C7B39C & ~(1610766208 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  v7 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B398);
  if ( v7 )
    v7 = v3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v9 == (*(int (**)(void))(stru_60C92684 + 8))()
    || (v10 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
        v11 == (*(int (**)(void))(stru_60C92664 + 8))()) )
  {
    sub_602EE940(v7);
    sub_602EE7B8(v7, FIELD_U32(v7, 80), FIELD_S8(v7, 84));
    v12 = *(void (__fastcall **)(BossBase *, int))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x2DC);
    v13 = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 760))(a1);
    v12(a1, v13);
    FIELD_U32(a1, 0x18A4) = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 788))(a1);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x300))(a1);
    v14 = FIELD_U32(a1, 0x189C);
    (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 916))(a1);
    vtable = FIELD_U32(a1, 0x0)._._._._.vtable;
    if ( v14 <= 0 )
    {
      (*(void (__fastcall **)(BossBase *))(vtable + 912))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 952))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 980))(a1);
      FIELD_U32(a1, 0x189C) = 0;
      (*(void (__fastcall **)(BossBase *, int))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x35C))(a1, v3);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x370))(a1);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x320))(a1);
    }
    else
    {
      (*(void (__fastcall **)(BossBase *))(vtable + 0x3A4))(a1);
      (*(void (__fastcall **)(BossBase *, int))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x358))(a1, v3);
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 0x36C))(a1);
    }
    return 1;
  }
  sub_602EE7B8(v7, FIELD_U32(v7, 80), -1);
  return 0;
}
