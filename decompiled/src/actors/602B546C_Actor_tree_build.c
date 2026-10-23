/* Actor_tree_build
 * address: 0x602B546C   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tree_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A08u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE3B70;
  FIELD_U16(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  sub_602A8564((_DWORD *)(v2 + 6312), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6312) = off_60BE3E14;
  FIELD_U32(v2, 6348) = v2;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6352), 0, 1);
  FIELD_U32(v2, 6352) = off_60BC19B4;
  return v2;
}
