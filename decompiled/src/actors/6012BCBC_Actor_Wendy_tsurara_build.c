/* Actor_Wendy_tsurara_build
 * address: 0x6012BCBC   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wendy_tsurara_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1DA8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BD18FC;
  FIELD_U32(v2, 6300) = 0;
  sub_600A4300(v2 + 6304);
  FIELD_U32(v2, 6972) = 0;
  FIELD_U32(v2, 6968) = 0;
  FIELD_U32(v2, 6960) = 0;
  FIELD_U32(v2, 6964) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6976));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7280));
  FIELD_U32(v2, 7584) = off_60BD1BCC;
  return v2;
}
