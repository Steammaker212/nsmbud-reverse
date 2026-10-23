/* sub_606A9094
 * address: 0x606A9094   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A9094(StageActor *a1)
{
  unsigned int x_low; // r1

  x_low = LODWORD(a1[9].aCollider.info.distToEdge.x);
  if ( !x_low )
    goto LABEL_4;
  if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, x_low) )
  {
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 200))(a1);
LABEL_4:
    StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
    StageActor__cullCheck(a1, 16);
    return 1;
  }
  return 0;
}
