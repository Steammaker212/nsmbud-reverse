/* sub_606C12E0
 * address: 0x606C12E0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C12E0(int a1)
{
  int result; // r0

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  if ( result )
    FIELD_U8(result, 6247) = 1;
  return result;
}
