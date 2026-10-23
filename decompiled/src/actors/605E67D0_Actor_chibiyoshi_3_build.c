/* Actor_chibiyoshi_3_build
 * address: 0x605E67D0   size: 160   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_chibiyoshi_3_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1888u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0B544;
  Actor_chibiyoshi_3_build_helper(v2 + 6100);
  LightMask__ctor((RevealMaskRelated *)(v2 + 6132));
  LightSource__ctor((LightSource *)(v2 + 6172));
  FIELD_U8(v2, 6244) = 0;
  FIELD_U8(v2, 6272) = 0;
  FIELD_U32(v2, 6268) = 0;
  FIELD_U32(v2, 6264) = 0;
  FIELD_U32(v2, 6260) = 0;
  FIELD_U32(v2, 6256) = 0;
  FIELD_U32(v2, 6248) = 0;
  FIELD_U32(v2, 6252) = 0;
  return v2;
}
