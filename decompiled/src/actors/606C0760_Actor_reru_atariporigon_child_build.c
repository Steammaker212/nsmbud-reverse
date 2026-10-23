/* Actor_reru_atariporigon_child_build
 * address: 0x606C0760   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_reru_atariporigon_child_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1AB0u);
  sub_606C103C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1BCBC;
  FIELD_U32(v2, 6120) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6128));
  FIELD_U32(v2, 6128) = off_60BC30D8;
  FIELD_U32(v2, 6824) = 0;
  FIELD_U32(v2, 6828) = 0;
  return v2;
}
