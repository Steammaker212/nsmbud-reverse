/* sub_6007E2CC
 * address: 0x6007E2CC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6007E2CC(int a1)
{
  int v2; // r0

  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0(a1);
  StageActor__cullCheck((StageActor *)a1, 6);
  if ( v2 == 1 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C818A8);
}
