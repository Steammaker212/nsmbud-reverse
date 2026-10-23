/* sub_602F2C84
 * address: 0x602F2C84   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2C84(int a1)
{
  int v2; // r9
  _DWORD *v3; // r10
  int v5; // [sp+0h] [bp-28h]

  FIELD_U8(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = off_60BE75D4;
  v2 = a1 + 52;
  FIELD_U8(a1, 96) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = off_60BE7674;
  v5 = a1 + 76;
  FIELD_U8(a1, 120) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 100) = off_60BE75C0;
  v3 = (_DWORD *)(a1 + 100);
  EffectWrapper_ctor((EffectWrapper *)(a1 + 124));
  FIELD_U32(a1, 124) = off_60BC1450;
  *v3 = off_60BE75E8;
  FIELD_U8(a1, 248) = 0;
  FIELD_U32(a1, 232) = 0;
  FIELD_U32(a1, 236) = 0;
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 228) = off_60BE75C0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 252));
  FIELD_U32(a1, 252) = off_60BC1450;
  FIELD_U32(a1, 228) = off_60BE7688;
  FIELD_U8(a1, 376) = 0;
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 356) = off_60BE75FC;
  FIELD_U8(a1, 400) = 0;
  FIELD_U32(a1, 396) = 0;
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 380) = off_60BE7624;
  FIELD_U8(a1, 424) = 0;
  FIELD_U32(a1, 420) = 0;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 404) = off_60BE7638;
  FIELD_U8(a1, 448) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 428) = off_60BE764C;
  FIELD_U8(a1, 472) = 0;
  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 452) = off_60BE7660;
  FIELD_U8(a1, 496) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 476) = off_60BE769C;
  FIELD_U8(a1, 520) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 504) = 0;
  FIELD_U32(a1, 500) = off_60BE76AC;
  FIELD_U8(a1, 544) = 0;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 524) = off_60BE7610;
  FIELD_U32(a1, 548) = 1065353216;
  FIELD_U32(a1, 552) = 1065353216;
  FIELD_U32(a1, 556) = 1065353216;
  FIELD_U8(a1, 560) = 0;
  FIELD_U8(a1, 561) = 0;
  *(_DWORD *)a1 = v2;
  FIELD_U32(a1, 20) = v2;
  FIELD_U32(a1, 4) = v5;
  FIELD_U32(a1, 8) = v3;
  FIELD_U32(a1, 12) = a1 + 228;
  FIELD_U32(a1, 16) = a1 + 356;
  FIELD_U32(a1, 24) = a1 + 380;
  FIELD_U32(a1, 28) = a1 + 404;
  FIELD_U32(a1, 32) = a1 + 428;
  FIELD_U32(a1, 40) = a1 + 452;
  FIELD_U32(a1, 44) = a1 + 476;
  FIELD_U32(a1, 48) = a1 + 500;
  FIELD_U32(a1, 36) = a1 + 524;
  return a1;
}
