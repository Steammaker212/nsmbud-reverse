/* Actor_StaffRoll_Manager_build
 * address: 0x6074A900   size: 432   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_StaffRoll_Manager_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x4E8u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C23910;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 672) = v2 + 680;
  FIELD_U32(v2, 668) = &off_60BFCA1C;
  FIELD_U32(v2, 676) = 128;
  sub_608FDDB4(v2 + 668);
  **(_WORD **)(v2 + 672) = 0;
  FIELD_U32(v2, 668) = &off_60BFD314;
  FIELD_U8(v2, 952) = 0;
  FIELD_U32(v2, 936) = 0;
  FIELD_U32(v2, 940) = 0;
  FIELD_U32(v2, 944) = 0;
  FIELD_U32(v2, 948) = 0;
  memset((void *)(v2 + 972), 0, 96);
  FIELD_U32(v2, 956) = v2 + 972;
  FIELD_U32(v2, 960) = 24;
  FIELD_U32(v2, 964) = 0;
  FIELD_U32(v2, 968) = 0;
  memset((void *)(v2 + 1084), 0, 96);
  FIELD_U32(v2, 1068) = v2 + 1084;
  FIELD_U32(v2, 1080) = 0;
  FIELD_U32(v2, 1076) = 0;
  FIELD_U32(v2, 1072) = 24;
  FIELD_U32(v2, 1196) = 0;
  FIELD_U32(v2, 1192) = 0;
  FIELD_U32(v2, 1188) = 0;
  FIELD_U32(v2, 1184) = 0;
  FIELD_U32(v2, 1180) = 0;
  FIELD_U32(v2, 1208) = 0;
  FIELD_U32(v2, 1204) = 0;
  FIELD_U32(v2, 1200) = 0;
  FIELD_U8(v2, 1212) = 0;
  FIELD_U32(v2, 1216) = 0;
  FIELD_U32(v2, 1220) = &off_60C239C8;
  FIELD_U32(v2, 1224) = &off_60C239D8;
  FIELD_U32(v2, 1228) = &off_60C239FC;
  FIELD_U32(v2, 1232) = v2;
  FIELD_U32(v2, 1236) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 1240), (StateExecuter *)(v2 + 1224), &NullState);
  FIELD_U32(v2, 1220) = &off_60C239B8;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 968) = 0;
  FIELD_U32(v2, 964) = 0;
  FIELD_U32(v2, 1080) = 0;
  FIELD_U32(v2, 1076) = 0;
  FIELD_U32(v2, 1216) = 0;
  return v2;
}
