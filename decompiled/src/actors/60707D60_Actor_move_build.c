/* Actor_move_build
 * address: 0x60707D60   size: 260   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_move_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1F00u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C20FDC;
  memset((void *)(v2 + 0x17D4), 0, 145);
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
  FIELD_U32(v2, 7924) = 0;
  FIELD_U32(v2, 7928) = 0;
  memset((void *)(v2 + 7856), 0, 65);
  return v2;
}
