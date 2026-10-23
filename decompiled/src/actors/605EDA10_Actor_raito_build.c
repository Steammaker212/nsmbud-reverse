/* Actor_raito_build
 * address: 0x605EDA10   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_raito_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1828u);
  sub_60676744((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0B994;
  LightMask__ctor((RevealMaskRelated *)(v2 + 6136));
  FIELD_U32(v2, 6176) = 0;
  return v2;
}
