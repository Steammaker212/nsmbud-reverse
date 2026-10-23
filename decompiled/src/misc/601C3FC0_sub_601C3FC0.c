/* sub_601C3FC0
 * address: 0x601C3FC0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C3FC0(int a1, unsigned __int8 *a2)
{
  sub_60185C70((Actor *)a1, a2);
  *(_DWORD *)a1 = off_60BD683C;
  FIELD_U32(a1, 264) = *a2;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U8(a1, 280) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 296) = 1065353216;
  FIELD_U32(a1, 300) = 8;
  FIELD_U32(a1, 304) = 12;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 316) = -1;
  FIELD_U32(a1, 320) = -1;
  FIELD_U32(a1, 324) = -1;
  FIELD_U8(a1, 328) = 0;
  FIELD_U32(a1, 332) = -1082130432;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 352) = 0;
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 376) = 0;
  FIELD_U32(a1, 380) = 0;
  memset((void *)(a1 + 384), 0, 48);
  FIELD_U32(a1, 432) = -1;
  FIELD_U32(a1, 436) = 0;
  FIELD_U16(a1, 440) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 444));
  FIELD_U32(a1, 444) = off_60BC1450;
  FIELD_U32(a1, 548) = 0;
  FIELD_U16(a1, 552) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 556));
  FIELD_U32(a1, 556) = off_60BC1450;
  FIELD_U32(a1, 660) = 0;
  FIELD_U8(a1, 664) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 668));
  FIELD_U32(a1, 668) = off_60BC1450;
  FIELD_U32(a1, 772) = 0;
  FIELD_U8(a1, 776) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 780));
  FIELD_U32(a1, 780) = off_60BC1450;
  return a1;
}
