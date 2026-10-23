/* sub_605E7D24
 * address: 0x605E7D24   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7D24(int a1)
{
  StateMgr *v2; // r0

  nullsub_42();
  nullsub_40();
  nullsub_41();
  nullsub_38();
  nullsub_39();
  FIELD_U32(a1, 24) = a1 + 40;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 12;
  FIELD_U32(a1, 88) = a1 + 104;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 92) = 12;
  FIELD_U32(a1, 152) = a1 + 168;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 156) = 12;
  FIELD_U32(a1, 216) = a1 + 232;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 220) = 12;
  FIELD_U32(a1, 300) = 0;
  FIELD_U8(a1, 296) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 304) = -1;
  FIELD_U8(a1, 308) = 0;
  FIELD_U8(a1, 309) = 0;
  FIELD_U32(a1, 312) = &off_60C0B654;
  FIELD_U32(a1, 316) = &off_60C0B664;
  FIELD_U32(a1, 320) = &off_60C0B688;
  FIELD_U32(a1, 324) = a1;
  FIELD_U32(a1, 328) = 0;
  v2 = StateMgr_ctor((StateMgr *)(a1 + 332), (StateExecuter *)(a1 + 316), &NullState);
  FIELD_U32(a1, 312) = &off_60C0B644;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 224) = 0;
  StateMgr__changeState(v2, (StateBase *)&dword_60CB1BE8);
  return a1;
}
