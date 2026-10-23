/* StoneEye_vf8
 * address: 0x606CA2E0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StoneEye_vf8(StateActor *a1)
{
  unsigned int childCount; // r1

  if ( (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 204))(a1) )
    return 1;
  childCount = a1[1]._._._.childCount;
  if ( !childCount )
  {
LABEL_5:
    StateMgr__execute(&FIELD_U32(a1, 0x17C4));
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 208))(a1);
    return 1;
  }
  if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, childCount) )
  {
    a1[1]._._._.field_20.next = a1[1]._._._.field_20.previous;
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 196))(a1);
    goto LABEL_5;
  }
  StageActor__delete(a1, 1);
  return 1;
}
