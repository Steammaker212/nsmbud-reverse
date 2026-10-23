/* Actor_choropukoinManager_build
 * address: 0x605ECD54   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_choropukoinManager_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2950u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0B8C8;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6144) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6216) = 0;
  FIELD_U32(v2, 6240) = 0;
  FIELD_U32(v2, 6264) = 0;
  FIELD_U32(v2, 6288) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6384) = 0;
  FIELD_U32(v2, 6408) = 0;
  FIELD_U32(v2, 6432) = 0;
  FIELD_U32(v2, 6456) = 0;
  memset((void *)(v2 + 6468), 0, 4103);
  return v2;
}
