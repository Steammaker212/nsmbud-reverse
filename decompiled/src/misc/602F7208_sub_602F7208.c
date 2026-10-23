/* sub_602F7208
 * address: 0x602F7208   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602F7208(Enemy *a1)
{
  StateBase *CurrentState; // r0
  StateBase **v3; // r6
  int v4; // r5
  Profile *profile; // r0
  int (__fastcall *v6)(Enemy *, int *); // r2
  StateBase *v7; // r0
  int v8; // r5

  v3 = (StateBase **)&FIELD_U32(a1, 0x0).field_17D4;
  CurrentState = (StateBase *)FIELD_U32(a1, 0x0).field_17D4;
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C92870 + 8))() )
  {
    FIELD_U32(a1, 0x0)._._.speed.y = 0.0;
    FIELD_U32(a1, 0x0)._._.rotation.y = Enemy_CommonRotations[FIELD_U32(a1, 0x0)._._.direction];
    profile = a1[1]._._._._.profile;
    FIELD_U32(profile, 0x14) = 1114636288;
    profile[1].buildFunction = (void *)((int)profile[1].buildFunction | 2);
    Animation_update((int)a1[1]._._._._.profile);
    v6 = *(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192);
    return (StateMethodExecuter *)v6(a1, &dword_60C928B0);
  }
  v7 = *v3;
  if ( !*v3 )
    v7 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C92890 + 8))() )
  {
    FIELD_U32(a1, 0x0)._._.speed.y = 0.0;
    v6 = *(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192);
    return (StateMethodExecuter *)v6(a1, &dword_60C928B0);
  }
  return Enemy__vfDC(a1);
}
