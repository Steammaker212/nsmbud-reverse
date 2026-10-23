/* Actor_majikuhandogu_RDash_build
 * address: 0x60682C60   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_majikuhandogu_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x2258u);
  sub_60680830(v2, a1);
  *(_DWORD *)v2 = off_60C16CB0;
  sub_60682CCC(v2 + 7600);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8688));
  FIELD_U32(v2, 8688) = off_60BC1450;
  return v2;
}
