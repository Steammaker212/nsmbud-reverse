/* Pokey__addActiveColliders
 * address: 0x60381740   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x600009A8
// 
// Overridden by: None
ActiveColliderMgr *__fastcall Pokey__addActiveColliders(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *result; // r0

  v2 = FIELD_U32(a1, 6300);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 6304);
    do
    {
      if ( !sub_60387A1C(*v3) )
        sub_60387988(*v3);
      --v2;
      ++v3;
    }
    while ( v2 );
  }
  v4 = (ActiveCollider *)(a1 + 188);
  v5 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v4);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v5, v4);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v5, v4);
  }
  return result;
}
