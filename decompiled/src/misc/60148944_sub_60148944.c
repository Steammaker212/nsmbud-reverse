/* sub_60148944
 * address: 0x60148944   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60148944(int a1)
{
  int result; // r0

  result = *(_DWORD *)(ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6412)) + 80);
  FIELD_U32(a1, 80) = result;
  return result;
}
