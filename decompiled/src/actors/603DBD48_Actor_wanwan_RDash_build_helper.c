/* Actor_wanwan_RDash_build_helper
 * address: 0x603DBD48   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_wanwan_RDash_build_helper(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60BF84D0;
  RectCollider_ctor((RectCollider *)(a1 + 6112));
  FIELD_U32(a1, 6112) = off_60BC30D8;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6820) = 0;
  memset((void *)(a1 + 6768), 0, 45);
  return a1;
}
