/* Actor_mamemariofor_OBJpipe_4_build
 * address: 0x6069C714   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mamemariofor_OBJpipe_4_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x560u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C182F0;
  FIELD_U32(v2, 648) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 688));
  FIELD_U32(v2, 688) = off_60BC30D8;
  FIELD_U32(v2, 1360) = 0;
  FIELD_U32(v2, 1364) = 0;
  FIELD_U32(v2, 1368) = 0;
  FIELD_U32(v2, 680) = 0;
  FIELD_U32(v2, 676) = 0;
  FIELD_U32(v2, 672) = 0;
  FIELD_U32(v2, 668) = 0;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U16(v2, 1356) = 0;
  FIELD_U8(v2, 1358) = 0;
  FIELD_U32(v2, 1352) = 0;
  FIELD_U32(v2, 1348) = 0;
  FIELD_U32(v2, 1344) = 0;
  *(_DWORD *)v2 = off_60C18520;
  return v2;
}
