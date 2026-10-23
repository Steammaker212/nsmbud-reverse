/* Actor_obujekinoko_build
 * address: 0x6069B198   size: 184   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_obujekinoko_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x4A8u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C18264;
  sub_6063044C(v2 + 648);
  memset((void *)(v2 + 668), 0, 80);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 752));
  FIELD_U8(v2, 1132) = 0;
  FIELD_U32(v2, 1128) = 0;
  FIELD_U32(v2, 1124) = 0;
  FIELD_U32(v2, 1120) = 0;
  FIELD_U32(v2, 1136) = 0;
  FIELD_U32(v2, 1140) = 0;
  FIELD_U32(v2, 1144) = 32;
  FIELD_U32(v2, 1148) = 0x20000;
  FIELD_U32(v2, 1152) = 0x8000000;
  FIELD_U32(v2, 1156) = 0x80000;
  FIELD_U32(v2, 1160) = 0x800000;
  FIELD_U32(v2, 1164) = 0x400000;
  FIELD_U8(v2, 1168) = 0;
  FIELD_U16(v2, 1184) = 0;
  FIELD_U8(v2, 1186) = 0;
  FIELD_U32(v2, 1172) = 0;
  FIELD_U32(v2, 1176) = 0;
  FIELD_U32(v2, 1180) = 0;
  return v2;
}
