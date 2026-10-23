/* Actor_buroku_child_build
 * address: 0x605FC880   size: 264   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_buroku_child_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B38u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0E730;
  FIELD_U32(v2, 6164) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6168));
  FIELD_U32(v2, 6168) = off_60BC30D8;
  FIELD_U16(v2, 6824) = 0;
  memset((void *)(v2 + 6104), 0, 64);
  memset((void *)(v2 + 6828), 0, 76);
  FIELD_U32(v2, 6904) = -1082130432;
  FIELD_U32(v2, 6908) = -1082130432;
  FIELD_U32(v2, 6912) = -1082130432;
  FIELD_U32(v2, 6916) = -1082130432;
  FIELD_U32(v2, 6920) = -1082130432;
  FIELD_U32(v2, 6924) = -1082130432;
  FIELD_U32(v2, 6928) = -1082130432;
  FIELD_U32(v2, 6932) = -1082130432;
  FIELD_U32(v2, 6936) = -1082130432;
  FIELD_U32(v2, 6940) = -1082130432;
  FIELD_U32(v2, 6944) = -1082130432;
  FIELD_U32(v2, 6948) = -1082130432;
  FIELD_U32(v2, 6952) = -1082130432;
  FIELD_U32(v2, 6956) = -1082130432;
  FIELD_U32(v2, 6960) = -1082130432;
  return v2;
}
