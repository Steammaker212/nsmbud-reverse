/* Actor_surotochibiyoshi_build
 * address: 0x6073D024   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_surotochibiyoshi_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x20D0u);
  BabyYoshiBaseProbably_ctor((CollisionActor *)v2, a1, dword_60B0A48C[(FIELD_U32(a1, 0x0) & 0xF) - 1]);
  *(_DWORD *)v2 = off_60C22C34;
  FIELD_U32(v2, 8060) = 0;
  FIELD_U8(v2, 8064) = 0;
  FIELD_U32(v2, 8084) = 0;
  FIELD_U32(v2, 8088) = 0;
  FIELD_U32(v2, 8092) = 0;
  FIELD_U16(v2, 8056) = 0;
  FIELD_U32(v2, 8052) = 0;
  FIELD_U32(v2, 8048) = 0;
  FIELD_U32(v2, 8044) = 0;
  FIELD_U32(v2, 8036) = 0;
  FIELD_U32(v2, 8040) = 0;
  FIELD_U8(v2, 8080) = 0;
  FIELD_U32(v2, 8076) = 0;
  FIELD_U32(v2, 8072) = 0;
  FIELD_U32(v2, 8068) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8096));
  FIELD_U32(v2, 8084) = 0;
  FIELD_U32(v2, 8088) = 0;
  FIELD_U32(v2, 8092) = 0;
  return v2;
}
