/* Actor_reru_atariporigon_parent_build
 * address: 0x606C1DEC   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_reru_atariporigon_parent_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1868u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1BF50;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6112) = &off_60BE27A8;
  FIELD_U32(v2, 6116) = &off_60BE27B8;
  FIELD_U32(v2, 6120) = &off_60BE27DC;
  FIELD_U32(v2, 6124) = v2 + 6112;
  FIELD_U32(v2, 6128) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6132), (StateExecuter *)(v2 + 6116), &NullState);
  FIELD_U32(v2, 6112) = &off_60BE2798;
  memset((void *)(v2 + 6148), 0, 66);
  FIELD_U8(v2, 6216) = 0;
  FIELD_U32(v2, 6220) = 0;
  FIELD_U32(v2, 6224) = 0;
  FIELD_U8(v2, 6228) = 0;
  FIELD_U32(v2, 6244) = 0;
  FIELD_U32(v2, 6240) = 0;
  FIELD_U32(v2, 6232) = 0;
  FIELD_U32(v2, 6236) = 0;
  return v2;
}
