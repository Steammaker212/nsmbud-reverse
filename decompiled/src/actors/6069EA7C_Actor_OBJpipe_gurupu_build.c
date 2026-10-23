/* Actor_OBJpipe_gurupu_build
 * address: 0x6069EA7C   size: 268   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_OBJpipe_gurupu_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AC0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1878C;
  FIELD_U32(v2, 6104) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6144));
  FIELD_U32(v2, 6144) = off_60BC30D8;
  FIELD_U32(v2, 6816) = 0;
  FIELD_U32(v2, 6820) = 0;
  FIELD_U32(v2, 6824) = 0;
  FIELD_U32(v2, 6136) = 0;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U8(v2, 6814) = 0;
  FIELD_U16(v2, 6812) = 0;
  FIELD_U32(v2, 6808) = 0;
  FIELD_U32(v2, 6804) = 0;
  FIELD_U32(v2, 6800) = 0;
  FIELD_U32(v2, 6836) = 0;
  FIELD_U32(v2, 6840) = 0;
  *(_DWORD *)v2 = off_60C18858;
  FIELD_U32(v2, 6844) = 0;
  return v2;
}
