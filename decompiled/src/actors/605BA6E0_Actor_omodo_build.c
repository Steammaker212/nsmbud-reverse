/* Actor_omodo_build
 * address: 0x605BA6E0   size: 160   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_omodo_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1FF0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0973C;
  Actor_omodo_build_helper(v2 + 6100);
  RectCollider_ctor((RectCollider *)(v2 + 7456));
  FIELD_U32(v2, 7456) = off_60BC30D8;
  FIELD_U32(v2, 8164) = 0;
  FIELD_U32(v2, 8160) = 0;
  FIELD_U32(v2, 8156) = 0;
  FIELD_U32(v2, 8152) = 0;
  FIELD_U16(v2, 8168) = 300;
  FIELD_U16(v2, 8170) = 0;
  FIELD_U16(v2, 8172) = 0;
  return v2;
}
