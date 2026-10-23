/* GoombaBase__beginState_DieFall
 * address: 0x6033E22C   size: 136   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall GoombaBase__beginState_DieFall(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // r0

  Enemy__beginState_DieFall((Enemy *)a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6380));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 6380));
  ActiveColldierMgr_removeFromList3(v2, a1 + 6380);
  v3 = FIELD_U32(a1, 6376);
  if ( v3 )
    ++FIELD_U32(v3, 6960);
  FIELD_U32(a1, 6692) = 1065353216;
  FIELD_U32(a1, 6696) = 0;
  FIELD_U8(a1, 6700) = 0;
  return 6700;
}
