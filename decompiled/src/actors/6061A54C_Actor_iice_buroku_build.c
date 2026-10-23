/* Actor_iice_buroku_build
 * address: 0x6061A54C   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_iice_buroku_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AD8u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C10910;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  FIELD_U8(v2, 6844) = 0;
  FIELD_U32(v2, 6848) = 0;
  FIELD_U32(v2, 6852) = 0;
  FIELD_U8(v2, 6856) = 0;
  FIELD_U32(v2, 6860) = 0;
  FIELD_U32(v2, 6864) = 0;
  FIELD_U32(v2, 6868) = off_60C109DC;
  return v2;
}
