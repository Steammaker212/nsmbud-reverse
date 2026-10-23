/* sub_605F32FC
 * address: 0x605F32FC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F32FC(int a1)
{
  unsigned int v2; // r1
  int v3; // r0

  v2 = FIELD_U32(a1, 6304);
  if ( !v2 )
    goto LABEL_4;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( v3 )
  {
    FIELD_U32(a1, 6312) = FIELD_U32(v3, 648);
    FIELD_U8(a1, 6319) = FIELD_U8(v3, 668);
LABEL_4:
    StateMgr__execute((StateMgr *)(a1 + 6084));
    return 1;
  }
  StageActor__delete((StateActor *)a1, 1);
  return 1;
}
