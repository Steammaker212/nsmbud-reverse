/* Actor_JumpStand_build
 * address: 0x60628E38   size: 336   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_JumpStand_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1860u);
  sub_605CC1F8((StateActor *)v2, a1, (void **)&dword_60CB3D74);
  *(_DWORD *)v2 = off_60C11F8C;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U16(v2, 6152) = 0;
  FIELD_U32(v2, 6144) = 0;
  FIELD_U32(v2, 6148) = 0;
  FIELD_U32(v2, 6160) = 1065353216;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U16(v2, 6168) = 0;
  FIELD_U8(v2, 6198) = 0;
  FIELD_U16(v2, 6196) = 0;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6188) = 0;
  FIELD_U32(v2, 6184) = 0;
  FIELD_U32(v2, 6180) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6200) = off_60C120BC;
  FIELD_U32(v2, 6204) = &off_60C12124;
  FIELD_U32(v2, 6208) = &off_60C12134;
  FIELD_U32(v2, 6212) = &off_60C12158;
  FIELD_U32(v2, 6216) = v2;
  FIELD_U32(v2, 6220) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6224), (StateExecuter *)(v2 + 6208), (StateBase *)&dword_60CB3D14);
  FIELD_U32(v2, 6204) = &off_60C12114;
  return v2;
}
