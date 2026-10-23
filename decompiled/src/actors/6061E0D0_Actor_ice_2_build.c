/* Actor_ice_2_build
 * address: 0x6061E0D0   size: 224   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_2_build(ActorBuildInfo *a1)
{
  int v2; // r4
  unsigned int v3; // r0

  v2 = operator_new(0x558u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C10F84;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 656));
  FIELD_U32(v2, 656) = off_60BC30D8;
  v3 = FIELD_U32(v2, 20) & 0xF;
  if ( v3 >= 3 )
    v3 = 0;
  FIELD_U32(v2, 1312) = v3;
  FIELD_U64(v2, 1316) = *(_QWORD *)&dword_60CB36E8;
  FIELD_U32(v2, 1328) = &off_60C11034;
  FIELD_U32(v2, 1332) = &off_60C11044;
  FIELD_U32(v2, 1336) = &off_60C11068;
  FIELD_U32(v2, 1340) = v2;
  FIELD_U32(v2, 1344) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 1348), (StateExecuter *)(v2 + 1332), &NullState);
  FIELD_U32(v2, 1328) = &off_60C11024;
  return v2;
}
