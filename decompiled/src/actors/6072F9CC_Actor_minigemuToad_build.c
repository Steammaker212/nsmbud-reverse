/* Actor_minigemuToad_build
 * address: 0x6072F9CC   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_minigemuToad_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1CB0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C22450;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U8(v2, 6328) = 1;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6344), 0, 1);
  FIELD_U32(v2, 6652) = 16;
  FIELD_U32(v2, 6656) = 10;
  FIELD_U8(v2, 6660) = 0;
  FIELD_U8(v2, 6661) = 1;
  FIELD_U32(v2, 6344) = off_60C226F4;
  RectCollider_ctor((RectCollider *)(v2 + 6664));
  FIELD_U32(v2, 6664) = off_60BC30D8;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7320));
  FIELD_U32(v2, 7320) = off_60BC6E38;
  FIELD_U32(v2, 7336) = 0;
  return v2;
}
