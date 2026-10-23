/* sub_606CA1A4
 * address: 0x606CA1A4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CA1A4(int a1)
{
  return ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6140));
}
