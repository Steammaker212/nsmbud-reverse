/* sub_6089DB50
 * address: 0x6089DB50   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089DB50(int a1)
{
  FIELD_U32(a1, 40) = -1;
  FIELD_U32(a1, 44) = -1;
  FIELD_U32(a1, 48) = -1;
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 56) = -1;
  FIELD_U32(a1, 60) = -1;
  sub_6083C510(a1 + 168);
  sub_6083C79C((_DWORD *)(a1 + 208));
  sub_6083C300((void *)(a1 + 236));
  sub_6083C9C8((_DWORD *)(a1 + 608));
  FIELD_U8(a1, 4) = 0;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  memset((void *)(a1 + 64), 0, 92);
  FIELD_U8(a1, 448) = 1;
  memset((void *)(a1 + 452), 0, 108);
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 0;
  FIELD_U64(a1, 320) = 1065353216;
  FIELD_U64(a1, 328) = 0;
  FIELD_U64(a1, 336) = 0x3F80000000000000LL;
  FIELD_U64(a1, 344) = 0;
  FIELD_U64(a1, 352) = 0;
  FIELD_U64(a1, 360) = 1065353216;
  FIELD_U64(a1, 368) = 0;
  FIELD_U64(a1, 376) = 0;
  FIELD_U64(a1, 384) = 1065353216;
  FIELD_U64(a1, 392) = 0;
  FIELD_U64(a1, 400) = 0x3F80000000000000LL;
  FIELD_U64(a1, 408) = 0;
  FIELD_U64(a1, 416) = 0;
  FIELD_U64(a1, 424) = 1065353216;
  FIELD_U64(a1, 432) = 0;
  FIELD_U64(a1, 440) = 0;
  memset((void *)(a1 + 640), 255, 0x44u);
  return a1;
}
