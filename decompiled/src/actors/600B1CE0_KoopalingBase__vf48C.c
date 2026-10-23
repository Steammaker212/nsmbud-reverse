/* KoopalingBase__vf48C
 * address: 0x600B1CE0   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009EC74 : Iggy
int __fastcall KoopalingBase__vf48C(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 7136);
  if ( v1 )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( result )
      FIELD_U8(result, 19) = 1;
  }
  return result;
}
