/* sub_60329400
 * address: 0x60329400   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60329400(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1
  int v5; // r3
  int v6; // r2
  StateBase *CurrentState; // r0
  int v8; // r5

  ActorScaler_execute((ActorScaler *)(a1 + 87992));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = sub_60328190(a1);
  ((void (__fastcall *)(int, float))loc_6032963C)(a1, v2);
  v3 = FIELD_U32(a1, 87268);
  v4 = FIELD_U32(a1, 87272);
  FIELD_U32(a1, 304) = v3;
  FIELD_U32(a1, 308) = v4;
  v5 = FIELD_U32(a1, 87288);
  v6 = FIELD_U32(a1, 87284);
  FIELD_U32(a1, 87084) = v5;
  FIELD_U32(a1, 87080) = v6;
  FIELD_U32(a1, 87504) = v4;
  FIELD_U32(a1, 87500) = v3;
  FIELD_U32(a1, 87808) = v5;
  FIELD_U32(a1, 87804) = v6;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C93BC0 + 8))() )
  {
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 6408) + 16))(a1 + 6408);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 11760) + 16))(a1 + 11760);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 17112) + 16))(a1 + 17112);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 22464) + 16))(a1 + 22464);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 27816) + 16))(a1 + 27816);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 33168) + 16))(a1 + 33168);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 38520) + 16))(a1 + 38520);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 43872) + 16))(a1 + 43872);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 49224) + 16))(a1 + 49224);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 54576) + 16))(a1 + 54576);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 59928) + 16))(a1 + 59928);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 65280) + 16))(a1 + 65280);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 70632) + 16))(a1 + 70632);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 75984) + 16))(a1 + 75984);
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 81336) + 16))(a1 + 81336);
  }
  return 1;
}
