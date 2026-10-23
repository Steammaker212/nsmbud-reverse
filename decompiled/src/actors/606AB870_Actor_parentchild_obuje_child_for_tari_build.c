/* Actor_parentchild_obuje_child_for_tari_build
 * address: 0x606AB870   size: 136   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_parentchild_obuje_child_for_tari_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19D0u);
  sub_606AAF6C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1A624;
  sub_6063044C(v2 + 6144);
  FIELD_U32(v2, 6184) = 0;
  FIELD_U32(v2, 6180) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6168) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6192));
  FIELD_U8(v2, 6600) = 0;
  return v2;
}
