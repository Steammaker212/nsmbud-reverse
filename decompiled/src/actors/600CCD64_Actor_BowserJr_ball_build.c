/* Actor_BowserJr_ball_build
 * address: 0x600CCD64   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_BowserJr_ball_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A80u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BCADD4;
  FIELD_U32(v2, 6312) = 0;
  CircularCollider_ctor((ColliderBase *)(v2 + 6320));
  FIELD_U32(v2, 6732) = v2;
  FIELD_U32(v2, 6736) = off_60BE2BE4;
  FIELD_U8(v2, 6740) = 0;
  memset(v2 + 6744, 0, 36);
  return v2;
}
