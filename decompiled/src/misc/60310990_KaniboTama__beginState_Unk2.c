/* KaniboTama__beginState_Unk2
 * address: 0x60310990   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KaniboTama__beginState_Unk2(int a1)
{
  ActiveCollider *v2; // r4
  ActiveColliderMgr *v3; // r5

  FIELD_U64(a1, 96) = 0xBE400000C0800000LL;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF358, 0, 0);
  if ( FIELD_U8(a1, 6420) )
  {
    v2 = (ActiveCollider *)(a1 + 188);
    v3 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v2);
    ActiveColldierMgr_removeFromCreateList(v3, v2);
    ActiveColldierMgr_removeFromList3(v3, (int)v2);
  }
}
