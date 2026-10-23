/* Actor_tariporigon_2_build
 * address: 0x606A1C7C   size: 288   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tariporigon_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1F50u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C18EB8;
  memset((void *)(v2 + 6100), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6248));
  FIELD_U32(v2, 6248) = off_60BC6E38;
  FIELD_U32(v2, 6264) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6268));
  FIELD_U32(v2, 6268) = off_60BC6E38;
  FIELD_U32(v2, 6284) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6288));
  FIELD_U32(v2, 6288) = off_60BC6E38;
  FIELD_U32(v2, 6304) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6308));
  FIELD_U32(v2, 6308) = off_60BC6E38;
  memset((void *)(v2 + 6324), 0, 870);
  FIELD_U8(v2, 7196) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 7200));
  FIELD_U32(v2, 7200) = off_60BC30D8;
  sub_606BB7B8(v2 + 7896);
  FIELD_U8(v2, 8010) = 0;
  FIELD_U16(v2, 8008) = 0;
  FIELD_U32(v2, 8004) = 0;
  FIELD_U32(v2, 8000) = 0;
  FIELD_U32(v2, 7992) = 0;
  FIELD_U32(v2, 7996) = 0;
  return v2;
}
