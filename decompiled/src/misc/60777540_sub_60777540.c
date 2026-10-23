/* sub_60777540
 * address: 0x60777540   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777540(int a1)
{
  sead_IDisposer *v2; // r0
  sead_IDisposer *v3; // r0
  sead_IDisposer *v4; // r0
  int v5; // r0
  sead_IDisposer *v6; // r0
  sead_IDisposer *v7; // r0
  sead_IDisposer *v8; // r0
  sead_IDisposer *v9; // r0

  FIELD_U32(a1, 16) = &off_60C24944;
  FIELD_U32(a1, 20) = &off_60C24954;
  FIELD_U32(a1, 24) = &off_60C24978;
  FIELD_U32(a1, 28) = a1;
  FIELD_U32(a1, 32) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 36), (StateExecuter *)(a1 + 20), &NullState);
  FIELD_U32(a1, 16) = &off_60C24934;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = a1 + 64;
  FIELD_U32(a1, 64) = a1 + 64;
  FIELD_U32(a1, 76) = a1 + 88;
  FIELD_U32(a1, 88) = a1 + 100;
  FIELD_U32(a1, 100) = a1 + 112;
  FIELD_U32(a1, 112) = a1 + 124;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 80) = a1 + 88;
  FIELD_U32(a1, 84) = 4;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 140) = a1 + 136;
  FIELD_U32(a1, 136) = a1 + 136;
  FIELD_U32(a1, 148) = a1 + 160;
  FIELD_U32(a1, 160) = a1 + 172;
  FIELD_U32(a1, 172) = a1 + 184;
  FIELD_U32(a1, 184) = a1 + 196;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 152) = a1 + 160;
  FIELD_U32(a1, 156) = 4;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U8(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U8(a1, 248) = 0;
  FIELD_U16(a1, 272) = 0;
  FIELD_U8(a1, 274) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 292) = 0;
  memset((void *)(a1 + 308), 0, 33);
  FIELD_U32(a1, 344) = a1 + 360;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 352) = 0;
  FIELD_U32(a1, 348) = 4;
  FIELD_U32(a1, 376) = a1 + 392;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 380) = 4;
  FIELD_U32(a1, 408) = a1 + 424;
  FIELD_U32(a1, 420) = 0;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 412) = 4;
  FIELD_U32(a1, 440) = -1;
  FIELD_U32(a1, 444) = 0;
  FIELD_U8(a1, 448) = 0;
  FIELD_U16(a1, 460) = 0;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  v2 = (sead_IDisposer *)operator_new(0x1Cu);
  FIELD_U32(a1, 468) = sub_603E8C80(v2);
  v3 = (sead_IDisposer *)operator_new(0x1Cu);
  FIELD_U32(a1, 472) = sub_603E4E38(v3);
  v4 = (sead_IDisposer *)operator_new(0x18u);
  FIELD_U32(a1, 476) = sub_603EBC68(v4);
  v5 = operator_new(0x18u);
  FIELD_U32(a1, 480) = sub_603E3E5C(v5);
  v6 = (sead_IDisposer *)operator_new(0x18u);
  FIELD_U32(a1, 484) = sub_603E9138(v6);
  v7 = (sead_IDisposer *)operator_new(0x18u);
  FIELD_U32(a1, 488) = sub_603E4424(v7);
  v8 = (sead_IDisposer *)operator_new(0x18u);
  FIELD_U32(a1, 492) = sub_603EB960(v8);
  v9 = (sead_IDisposer *)operator_new(0x1Cu);
  FIELD_U32(a1, 496) = sub_603E59C4(v9);
  return a1;
}
