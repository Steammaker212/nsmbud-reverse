/* Actor_bosubig_koBowser_airship_boarding_for_build
 * address: 0x600BE4FC   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_bosubig_koBowser_airship_boarding_for_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D50u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCA218;
  sub_600A4300(v2 + 6104);
  RectCollider_ctor((RectCollider *)(v2 + 6760));
  FIELD_U32(v2, 6760) = off_60BC30D8;
  FIELD_U32(v2, 7444) = 0;
  FIELD_U32(v2, 7440) = 0;
  FIELD_U32(v2, 7436) = 0;
  FIELD_U32(v2, 7432) = 0;
  FIELD_U32(v2, 7428) = 0;
  FIELD_U32(v2, 7424) = 0;
  FIELD_U32(v2, 7416) = 0;
  FIELD_U32(v2, 7420) = 0;
  memset((void *)(v2 + 7464), 0, 37);
  FIELD_U32(v2, 7460) = -1;
  FIELD_U32(v2, 7456) = -1;
  FIELD_U32(v2, 7452) = -1;
  FIELD_U32(v2, 7448) = -1;
  return v2;
}
