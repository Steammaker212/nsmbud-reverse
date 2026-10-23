/* Actor_grass_flower_build
 * address: 0x60695218   size: 444   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_grass_flower_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1880u);
  CollisionActor__ctor((CollisionActor *)v2, a1);
  *(_DWORD *)v2 = off_60C17CBC;
  FIELD_U32(v2, 6068) = 0;
  FIELD_U32(v2, 6072) = 0;
  FIELD_U32(v2, 6076) = 0;
  FIELD_U32(v2, 6084) = &off_60C17DCC;
  FIELD_U32(v2, 6088) = &off_60C17DDC;
  FIELD_U32(v2, 6092) = &off_60C17E00;
  FIELD_U32(v2, 6096) = v2;
  FIELD_U32(v2, 6100) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6104), (StateExecuter *)(v2 + 6088), (StateBase *)&dword_60CB92CC);
  FIELD_U32(v2, 6084) = &off_60C17DBC;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6128) = 3;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U8(v2, 6136) = 0;
  FIELD_U8(v2, 6137) = -1;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6164) = 32;
  FIELD_U32(v2, 6168) = 0x20000;
  FIELD_U32(v2, 6172) = 0x8000000;
  FIELD_U32(v2, 6176) = 0x80000;
  FIELD_U32(v2, 6180) = 0x800000;
  FIELD_U32(v2, 6184) = 0x400000;
  FIELD_U8(v2, 6188) = 0;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6196) = 0;
  FIELD_U32(v2, 6200) = 32;
  FIELD_U32(v2, 6204) = 0x20000;
  FIELD_U32(v2, 6208) = 0x8000000;
  FIELD_U32(v2, 6212) = 0x80000;
  FIELD_U32(v2, 6216) = 0x800000;
  FIELD_U32(v2, 6220) = 0x400000;
  FIELD_U8(v2, 6224) = 0;
  FIELD_U32(v2, 6260) = 0;
  return v2;
}
