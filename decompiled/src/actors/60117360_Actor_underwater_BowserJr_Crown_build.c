/* Actor_underwater_BowserJr_Crown_build
 * address: 0x60117360   size: 548   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_underwater_BowserJr_Crown_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2578u);
  sub_600D0154(v2, a1);
  *(_DWORD *)v2 = off_60BD0CBC;
  FIELD_U32(v2, 7656) = 0;
  FIELD_U32(v2, 7660) = 0;
  FIELD_U32(v2, 7668) = &off_60BD1040;
  FIELD_U32(v2, 7672) = v2;
  FIELD_U32(v2, 7820) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7824));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8128));
  CircularCollider_ctor((ColliderBase *)(v2 + 8432));
  FIELD_U32(v2, 8848) = 0;
  FIELD_U32(v2, 8844) = 0;
  FIELD_U32(v2, 8840) = 0;
  FIELD_U32(v2, 8836) = 0;
  FIELD_U32(v2, 8832) = 0;
  FIELD_U32(v2, 8900) = 0;
  FIELD_U32(v2, 8896) = 0;
  FIELD_U32(v2, 8892) = 0;
  FIELD_U32(v2, 8888) = 0;
  FIELD_U32(v2, 8904) = 0x80000000;
  FIELD_U32(v2, 8908) = 0;
  FIELD_U32(v2, 8912) = 0x40000000;
  memset((void *)(v2 + 8916), 0, 136);
  memset((void *)(v2 + 9196), 0, 47);
  FIELD_U32(v2, 9244) = -1;
  FIELD_U8(v2, 9268) = 0;
  FIELD_U32(v2, 9264) = 0;
  FIELD_U32(v2, 9260) = 0;
  FIELD_U32(v2, 9256) = 0;
  FIELD_U32(v2, 9252) = 0;
  FIELD_U32(v2, 9248) = 0;
  memset(v2 + 9272, 0, 44);
  FIELD_U8(v2, 9316) = 1;
  FIELD_U8(v2, 9330) = 0;
  FIELD_U8(v2, 9326) = 0;
  FIELD_U8(v2, 9322) = 0;
  FIELD_U8(v2, 9333) = 0;
  FIELD_U8(v2, 9318) = 0;
  FIELD_U8(v2, 9329) = 0;
  FIELD_U8(v2, 9332) = 0;
  FIELD_U8(v2, 9331) = 0;
  FIELD_U8(v2, 9325) = 0;
  FIELD_U8(v2, 9328) = 0;
  FIELD_U8(v2, 9327) = 0;
  FIELD_U8(v2, 9321) = 0;
  FIELD_U8(v2, 9324) = 0;
  FIELD_U8(v2, 9323) = 0;
  FIELD_U8(v2, 9317) = 0;
  FIELD_U8(v2, 9320) = 0;
  FIELD_U8(v2, 9319) = 0;
  memset(v2 + 9336, 0, 81);
  sub_6040E90C(v2 + 9420, 10);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 9484));
  FIELD_U32(v2, 9484) = off_60BC1450;
  return v2;
}
