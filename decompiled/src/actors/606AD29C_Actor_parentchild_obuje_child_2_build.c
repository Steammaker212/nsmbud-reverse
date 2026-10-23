/* Actor_parentchild_obuje_child_2_build
 * address: 0x606AD29C   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_parentchild_obuje_child_2_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1820u);
  sub_606AAF6C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1AAD8;
  sub_6063044C(v2 + 6144);
  FIELD_U32(v2, 6164) = 0;
  FIELD_U8(v2, 6168) = 0;
  return v2;
}
