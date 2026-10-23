/* Actor_reru_atariporigon_build
 * address: 0x606C1530   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_reru_atariporigon_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B00u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1BE88;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = &off_60BE27A8;
  FIELD_U32(v2, 6108) = &off_60BE27B8;
  FIELD_U32(v2, 6112) = &off_60BE27DC;
  FIELD_U32(v2, 6116) = v2 + 6104;
  FIELD_U32(v2, 6120) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6124), (StateExecuter *)(v2 + 6108), &NullState);
  FIELD_U32(v2, 6104) = &off_60BE2798;
  memset((void *)(v2 + 6140), 0, 66);
  RectCollider_ctor((RectCollider *)(v2 + 6208));
  FIELD_U32(v2, 6208) = off_60BC30D8;
  FIELD_U32(v2, 6904) = 0;
  FIELD_U32(v2, 6908) = 0;
  return v2;
}
