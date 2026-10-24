/* Actor_StaffRoll_Manager_2_build_helper
 * address: 0x6074B0D0   size: 416   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_StaffRoll_Manager_2_build_helper(StageActor *a1, ActorBuildInfo *a2)
{
  StageActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C23910;
  FIELD_U32(a1 + (1) * 644, 0x14) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x10) = 0;
  FIELD_U32(a1 + (1) * 644, 0xC) = 0;
  FIELD_U32(a1 + (1) * 644, 0x8) = 0;
  FIELD_U32(a1 + (1) * 644, 0x4) = 0;
  FIELD_U32(a1 + (1) * 644, 0x0) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x1C) = (char *)a1 + 680;
  FIELD_U32(a1 + (1) * 644, 0x18) = (int)&off_60BFCA1C;
  FIELD_U32(a1 + (1) * 644, 0x20) = (sead_ListNode *)128;
  sub_608FDDB4(&FIELD_U32(a1 + (1) * 644, 0x18));
  **(_WORD **)&FIELD_U8(a1 + (1) * 644, 0x1C) = 0;
  FIELD_U32(a1 + (1) * 644, 0x18) = (int)&off_60BFD314;
  LOBYTE(FIELD_F32(a1 + (1) * 644, 0x134)) = 0;
  FIELD_U32(a1 + (1) * 644, 0x124) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x128) = 0;
  FIELD_U32(a1 + (1) * 644, 0x12C) = 0;
  FIELD_F32(a1 + (1) * 644, 0x130) = 0.0;
  memset(&FIELD_U32(a1 + (1) * 644, 0x148), 0, 96);
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x138)) = &FIELD_U32(a1 + (1) * 644, 0x148);
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x13C)) = 24;
  FIELD_U32(a1 + (1) * 644, 0x140) = 0;
  FIELD_U32(a1 + (1) * 644, 0x144) = 0;
  memset(&a1[1].aCollider.field_FC, 0, 96);
  FIELD_U32(a1 + (1) * 644, 0x1A8) = (int)&a1[1].aCollider.field_FC;
  FIELD_U32(a1 + (1) * 644, 0x1B4) = 0;
  FIELD_U32(a1 + (1) * 644, 0x1B0) = 0;
  FIELD_U32(a1 + (1) * 644, 0x1AC) = 24;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x228) = 0;
  FIELD_U32(a1 + (1) * 644, 0x224) = 0;
  FIELD_U32(a1 + (1) * 644, 0x220) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x21C) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x218) = 0;
  FIELD_U32(a1 + (1) * 644, 0x234) = 0;
  FIELD_U32(a1 + (1) * 644, 0x230) = 0;
  FIELD_U32(a1 + (1) * 644, 0x22C) = 0;
  LOBYTE(FIELD_U32(a1 + (1) * 644, 0x238)) = 0;
  FIELD_F32(a1 + (1) * 644, 0x23C) = 0.0;
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x240)) = &off_60C239C8;
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x244)) = &off_60C239D8;
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x248)) = &off_60C239FC;
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x24C)) = a1;
  FIELD_F32(a1 + (1) * 644, 0x250) = 0.0;
  StateMgr_ctor((StateMgr *)&a1[1].field_254, (StateExecuter *)&FIELD_F32(a1 + (1) * 644, 0x244), &NullState);
  LODWORD(FIELD_F32(a1 + (1) * 644, 0x240)) = &off_60C239B8;
  FIELD_U32(a1 + (1) * 644, 0xC) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x10) = 0;
  FIELD_U32(a1 + (1) * 644, 0x144) = 0;
  FIELD_U32(a1 + (1) * 644, 0x140) = 0;
  FIELD_U32(a1 + (1) * 644, 0x1B4) = 0;
  FIELD_U32(a1 + (1) * 644, 0x1B0) = 0;
  FIELD_F32(a1 + (1) * 644, 0x23C) = 0.0;
  return a1;
}
