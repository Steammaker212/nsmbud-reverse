/* Pokey__removeActiveColliders
 * address: 0x603816C0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000968
// 
// Overridden by: None
ActiveColliderMgr *__fastcall Pokey__removeActiveColliders(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  ActiveCollider *v4; // r4
  ActiveColliderMgr *v5; // r5

  v2 = FIELD_U32(a1, 6300);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 6304);
    do
    {
      if ( sub_60387A1C(*v3) == 1 )
        sub_60387714(*v3);
      --v2;
      ++v3;
    }
    while ( v2 );
  }
  v4 = (ActiveCollider *)(a1 + 188);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v4);
  ActiveColldierMgr_removeFromCreateList(v5, v4);
  return ActiveColldierMgr_removeFromList3(v5, (int)v4);
}
