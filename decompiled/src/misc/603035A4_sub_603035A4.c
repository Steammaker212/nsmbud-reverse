/* sub_603035A4
 * address: 0x603035A4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603035A4(int a1)
{
  unsigned int v2; // r1
  int v3; // r0

  v2 = FIELD_U32(a1, 6988);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
      FIELD_U8(v3, 19) = 1;
    FIELD_U32(a1, 6988) = 0;
  }
  return CollisionActor__onDelete(a1);
}
