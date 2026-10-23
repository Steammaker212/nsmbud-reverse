/* Actor_gatan_build
 * address: 0x602BC510   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gatan_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B68u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE49B0;
  FIELD_U8(v2, 6333) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U8(v2, 6308) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6352));
  FIELD_U32(v2, 6352) = off_60BC30D8;
  FIELD_U8(v2, 7008) = 0;
  return v2;
}
