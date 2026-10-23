/* sub_602A1220
 * address: 0x602A1220   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602A1220(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r0
  Vec3 *v8; // r2

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C9032C + 8))() )
  {
    StateMgr__execute((StateMgr *)(a1 + 6424));
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6460);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6464);
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6424));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    v7 = (*(int (**)(void))(dword_60CC5714 + 8))();
    v8 = (Vec3 *)(a1 + 108);
    if ( v6 == v7 )
      FIELD_U8(a1, 19) = 1;
  }
  else
  {
    v8 = (Vec3 *)(a1 + 108);
  }
  LightSource_update1((LightSource *)(a1 + 6508), 60, v8, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)(a1 + 6508));
  ((void (__fastcall *)(int))loc_602A10D0)(a1);
  return 1;
}
