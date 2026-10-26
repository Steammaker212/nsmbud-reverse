/* TorchFlame__ctor
 * address: 0x606E813C   size: 84   group: misc
 * sym: TorchFlame::TorchFlame(ActorBuildInfo const*) as C3
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall TorchFlame__ctor(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x2C0u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1FB74;
  FIELD_U32(v2, 644) = 0;
  LightMask__ctor((RevealMaskRelated *)(v2 + 648));
  FIELD_U32(v2, 688) = 0;
  FIELD_U32(v2, 692) = 0;
  FIELD_U32(v2, 696) = 0;
  FIELD_U32(v2, 700) = 0;
  return (StageActor *)v2;
}
