/* sub_606D7644
 * address: 0x606D7644   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D7644(int a1)
{
  float v2; // s0
  int v3; // r7
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_605CC4D8(a1, v2);
  v3 = a1 + 648;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (**)(void))(dword_60CBB75C + 8))() )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB75C);
  }
  v6 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0 )
  {
    sub_605CC8F8(a1);
  }
}
