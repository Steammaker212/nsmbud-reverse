/* Actor_Lift_4_build
 * address: 0x6067B6D0   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Lift_4_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x27D8u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1673C;
  sub_6067BE94(v2 + 6100);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 9152));
  RectCollider_ctor((RectCollider *)(v2 + 9520));
  FIELD_U32(v2, 9520) = off_60BC30D8;
  FIELD_U32(v2, 10176) = off_60C16818;
  FIELD_U8(v2, 10188) = 0;
  FIELD_U32(v2, 10184) = 0;
  FIELD_U32(v2, 10180) = 0;
  FIELD_U8(v2, 10189) = 1;
  FIELD_U8(v2, 10194) = 0;
  FIELD_U8(v2, 10191) = 0;
  FIELD_U8(v2, 10190) = 0;
  FIELD_U8(v2, 10193) = 0;
  FIELD_U8(v2, 10192) = 0;
  return v2;
}
