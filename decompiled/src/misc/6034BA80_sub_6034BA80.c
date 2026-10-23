/* sub_6034BA80
 * address: 0x6034BA80   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034BA80(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // s0
  float v6; // s2
  int v7; // r1
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C94C80 + 8))() )
  {
    v5 = -1.0;
    v6 = FIELD_F32(a1, 7784);
    if ( v6 >= -1.0 )
    {
      v5 = FIELD_F32(a1, 7784);
      if ( v6 > 1.0 )
        v5 = 1.0;
    }
    FIELD_F32(a1, 108) = v5 + FIELD_F32(a1, 108);
  }
  v7 = FIELD_U32(a1, 7780);
  if ( v7 )
    FIELD_U32(a1, 7780) = v7 - 1;
  if ( FIELD_U32(a1, 6352) == 1 )
  {
    v8 = StateMgr__getCurrentState(v2);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6824));
  }
  v10 = StateMgr__getCurrentState(v2);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
  {
    StateMgr__execute(v2);
    if ( ((int (__fastcall *)(int))loc_6034BC18)(a1) == 1 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94C80);
  }
  sub_603A2194(a1);
  sub_6000897C((_DWORD *)ActorMgr__instance, a1);
  FIELD_U32(a1, 7784) = 0;
  FIELD_U32(a1, 7788) = 0;
  return 1;
}
