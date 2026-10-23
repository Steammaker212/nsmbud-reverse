/* Actor_castle_Bowser_Demo_manage_Tag_build
 * address: 0x600C78DC   size: 376   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_castle_Bowser_Demo_manage_Tag_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1878u);
  sub_600271A0((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCA850;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U32(v2, 6132) = 2139095039;
  FIELD_U32(v2, 6136) = 2139095039;
  FIELD_U32(v2, 6140) = -8388609;
  FIELD_U32(v2, 6144) = -8388609;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6148) = 0;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6176) = -1;
  FIELD_U32(v2, 6180) = 0;
  FIELD_U32(v2, 6184) = v2 + 6200;
  FIELD_U32(v2, 6196) = 0;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6188) = 4;
  FIELD_U32(v2, 6216) = 0;
  FIELD_U32(v2, 6220) = 0;
  FIELD_U32(v2, 6224) = &off_60BCA9A0;
  FIELD_U32(v2, 6228) = &off_60BCA9B0;
  FIELD_U32(v2, 6232) = &off_60BCA9D4;
  FIELD_U32(v2, 6236) = v2;
  FIELD_U32(v2, 6240) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6244), (StateExecuter *)(v2 + 6228), (StateBase *)&dword_60C83EA0);
  FIELD_U32(v2, 6224) = &off_60BCA990;
  return v2;
}
