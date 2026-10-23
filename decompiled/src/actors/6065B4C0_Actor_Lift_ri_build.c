/* Actor_Lift_ri_build
 * address: 0x6065B4C0   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Lift_ri_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1898u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C14834;
  memset((void *)(v2 + 6112), 0, 58);
  memset((void *)(v2 + 6172), 0, 68);
  FIELD_U32(v2, 6240) = 1065353216;
  FIELD_U32(v2, 6244) = 1065353216;
  FIELD_U32(v2, 6248) = 1065353216;
  FIELD_U32(v2, 6252) = 1065353216;
  FIELD_U32(v2, 6256) = 1065353216;
  FIELD_U32(v2, 6260) = 1065353216;
  FIELD_U32(v2, 6264) = 1065353216;
  FIELD_U32(v2, 6268) = 1065353216;
  FIELD_U32(v2, 6272) = 1065353216;
  FIELD_U32(v2, 6288) = 0;
  FIELD_U32(v2, 6284) = 0;
  FIELD_U32(v2, 6276) = 0;
  FIELD_U32(v2, 6280) = 0;
  return v2;
}
