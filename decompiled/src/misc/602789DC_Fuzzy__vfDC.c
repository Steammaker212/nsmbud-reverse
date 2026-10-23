/* Fuzzy__vfDC
 * address: 0x602789DC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
StateMethodExecuter *__fastcall Fuzzy__vfDC(Enemy *a1)
{
  Enemy *v2; // r5
  int v3; // r0
  int (__fastcall *v4)(int, __int64 *); // r2
  unsigned __int8 v5; // r0
  StateBase *CurrentState; // r0
  StateBase **v7; // r6
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r5
  __int64 v12[8]; // [sp+0h] [bp-40h] BYREF

  v2 = a1 + 1;
  v3 = *(_DWORD *)a1[1]._._._._.vtable;
  v4 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v3 + 84);
  LODWORD(v12[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v12[0]) = "skl_root";
  v5 = v4(v3, v12);
  (*(void (__fastcall **)(_DWORD, _DWORD, __int64 *))(**(_DWORD **)FIELD_U32(v2, 0x0) + 108))(
    *(_DWORD *)FIELD_U32(v2, 0x0),
    v5,
    v12);
  sub_602372C0((int)&a1[1]._._.collisionMgr[5068], 593, v12, 0);
  v7 = (StateBase **)&FIELD_U32(a1, 0x17D4);
  CurrentState = (StateBase *)FIELD_U32(a1, 0x17D4);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C8ECA0 + 8))() )
    return (StateMethodExecuter *)(*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(
                                    a1,
                                    &dword_60C8ECA0);
  v9 = *v7;
  if ( !*v7 )
    v9 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C8EDB0 + 8))() )
    return (StateMethodExecuter *)(*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(
                                    a1,
                                    &dword_60C8ECA0);
  else
    return Enemy__vfDC(a1);
}
