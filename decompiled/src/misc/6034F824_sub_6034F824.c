/* sub_6034F824
 * address: 0x6034F824   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6034F824(Enemy *a1)
{
  StateBase *CurrentState; // r0
  StateBase **v3; // r6
  int v4; // r5
  int (__fastcall *v5)(Enemy *, int *); // r2
  int *v6; // r1
  StateBase *v7; // r0
  int v8; // r5

  v3 = (StateBase **)&FIELD_U32(a1, 0x0).field_17D4;
  CurrentState = (StateBase *)FIELD_U32(a1, 0x0).field_17D4;
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C94E30 + 8))() )
  {
    sub_6015907C(&FIELD_U32(a1, 0x0)._._.aCollider, 32775);
    FIELD_U32(a1, 0x0)._._.speed.y = 0.0;
    v5 = *(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192);
    v6 = &dword_60C945D8;
    return (StateMethodExecuter *)v5(a1, v6);
  }
  v7 = *v3;
  if ( !*v3 )
    v7 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C9468C + 8))() )
  {
    FIELD_U32(a1, 0x0)._._.speed.y = 0.0;
    v5 = *(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192);
    v6 = &dword_60C945B4;
    return (StateMethodExecuter *)v5(a1, v6);
  }
  return Enemy__vfDC(a1);
}
