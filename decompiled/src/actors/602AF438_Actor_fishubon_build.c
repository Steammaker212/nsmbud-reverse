/* Actor_fishubon_build
 * address: 0x602AF438   size: 420   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall Actor_fishubon_build(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r0
  unsigned int v6; // r0
  float result; // s0

  v2 = operator_new(0x1AE8u);
  Enemy__ctor((Enemy *)v2, (ActorBuildInfo *)a1);
  *(_DWORD *)v2 = off_60BE3588;
  memset((void *)(v2 + 6300), 0, 184);
  FIELD_U32(v2, 6484) = 3;
  v3 = FIELD_U32(a1, 16);
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(v2, 6496) = FIELD_U32(a1, 24);
  FIELD_U32(v2, 6492) = v4;
  FIELD_U32(v2, 6488) = v3;
  v5 = FIELD_U32(v2, 20);
  FIELD_F32(v2, 6500) = (float)((v5 & 0xF) + 1) * 16.0;
  FIELD_U32(v2, 6504) = (v5 >> 12) & 1;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6508));
  FIELD_U32(v2, 6812) = 0;
  FIELD_U32(v2, 6816) = 64;
  FIELD_U32(v2, 6820) = 0;
  FIELD_U32(v2, 6824) = 0;
  FIELD_U32(v2, 6828) = -1;
  FIELD_U8(v2, 6832) = 0;
  FIELD_U8(v2, 6833) = 0;
  FIELD_U32(v2, 6836) = 0;
  FIELD_U8(v2, 6840) = 0;
  FIELD_U32(v2, 6844) = &ActorScaler_vtable;
  FIELD_U32(v2, 6848) = 1065353216;
  FIELD_U32(v2, 6852) = 1065353216;
  FIELD_U32(v2, 6856) = 1065353216;
  FIELD_U32(v2, 6860) = 1065353216;
  FIELD_U32(v2, 6864) = 0;
  FIELD_U32(v2, 6868) = 0;
  FIELD_U32(v2, 6872) = v2;
  FIELD_U32(v2, 6876) = off_60BE382C;
  FIELD_U32(v2, 6880) = 0;
  FIELD_U8(v2, 6884) = 0;
  v6 = FIELD_U32(v2, 20);
  FIELD_U32(v2, 80) = (v6 >> 4) & 1;
  result = 1532.0 - (float)((float)((v6 >> 8) & 0xF) * 16.0);
  FIELD_F32(v2, 116) = result;
  return result;
}
