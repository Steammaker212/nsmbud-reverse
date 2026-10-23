/* Fuzzy__executeState_DieFall
 * address: 0x6027845C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
void __fastcall Fuzzy__executeState_DieFall(int a1)
{
  unsigned int v2; // r1
  int v3; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  Enemy__executeState_DieFall(a1);
  v2 = FIELD_U32(a1, 6524);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( sub_605ED718(v3) != 1 )
        return;
    }
    else
    {
      FIELD_U32(a1, 6524) = 0;
    }
  }
  StageActor__cullCheck((StageActor *)a1, 0);
}
