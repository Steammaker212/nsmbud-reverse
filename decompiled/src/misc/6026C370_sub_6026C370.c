/* sub_6026C370
 * address: 0x6026C370   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026C370(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B20u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BDC554;
  RectCollider_ctor((RectCollider *)(v2 + 6120));
  FIELD_U32(v2, 6120) = off_60BC30D8;
  FIELD_U32(v2, 6908) = 0;
  FIELD_U32(v2, 6928) = 0;
  FIELD_U32(v2, 6932) = 0;
  FIELD_U8(v2, 6936) = 0;
  memset((void *)(v2 + 6776), 0, 129);
  FIELD_U32(v2, 6912) = 1065353216;
  FIELD_U32(v2, 6916) = 1065353216;
  FIELD_U32(v2, 6920) = 1065353216;
  FIELD_U32(v2, 6924) = 1065353216;
  return v2;
}
