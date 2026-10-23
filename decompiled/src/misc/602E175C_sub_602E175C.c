/* sub_602E175C
 * address: 0x602E175C   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E175C(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE6D90;
  memset((void *)(a1 + 6300), 0, 72);
  FIELD_U32(a1, 6312) = 1065353216;
  FIELD_U32(a1, 6316) = 1065353216;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6332) = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U8(a1, 6340) = 0;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6348) = 1065353216;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6356) = 1;
  FIELD_U32(a1, 6360) = 1;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U16(a1, 6368) = 0;
  memset((void *)(a1 + 6372), 0, 36);
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6528));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6832));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7136));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7440));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7744));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8048));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8352));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8656));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8960));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9264));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9568));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9872));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 10176));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 10480));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 10784));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 11088));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 11392));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 11696));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12000));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12304));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12608));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12912));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 13216));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 13520));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 13824));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 14128));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 14432));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 14736));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 15040));
  FIELD_U32(a1, 15388) = 0;
  FIELD_U8(a1, 15392) = 0;
  FIELD_U32(a1, 15396) = 0;
  FIELD_U8(a1, 15400) = 0;
  FIELD_U32(a1, 15404) = 0;
  FIELD_U32(a1, 15408) = 0;
  FIELD_U8(a1, 15412) = 0;
  FIELD_U8(a1, 15366) = 0;
  FIELD_U16(a1, 15364) = 0;
  FIELD_U32(a1, 15360) = 0;
  FIELD_U32(a1, 15356) = 0;
  FIELD_U32(a1, 15352) = 0;
  FIELD_U32(a1, 15348) = 0;
  FIELD_U32(a1, 15344) = 0;
  FIELD_U8(a1, 15384) = 0;
  FIELD_U32(a1, 15380) = 0;
  FIELD_U32(a1, 15376) = 0;
  FIELD_U32(a1, 15372) = 0;
  FIELD_U32(a1, 15368) = 0;
  FIELD_U8(a1, 15413) = 1;
  FIELD_U32(a1, 15428) = 0;
  FIELD_U32(a1, 15432) = 0;
  FIELD_U8(a1, 15438) = 0;
  FIELD_U8(a1, 15439) = 0;
  FIELD_U16(a1, 15424) = 0;
  FIELD_U32(a1, 15420) = 0;
  FIELD_U32(a1, 15440) = &ActorScaler_vtable;
  FIELD_U32(a1, 15444) = 1065353216;
  FIELD_U32(a1, 15448) = 1065353216;
  FIELD_U32(a1, 15452) = 1065353216;
  FIELD_U32(a1, 15456) = 1065353216;
  FIELD_U32(a1, 15460) = 0;
  FIELD_U32(a1, 15464) = 0;
  FIELD_U32(a1, 15468) = a1;
  FIELD_U32(a1, 15472) = off_60BE7094;
  FIELD_U32(a1, 15476) = off_60BE70C4;
  FIELD_U8(a1, 15480) = 0;
  FIELD_U8(a1, 6298) = 6;
  FIELD_U32(a1, 15416) = 0;
  FIELD_U8(a1, 15436) = 0;
  FIELD_U8(a1, 15437) = 0;
  FIELD_U32(a1, 6524) = 0;
  FIELD_U32(a1, 6520) = 0;
  FIELD_U32(a1, 6516) = 0;
  FIELD_U32(a1, 6512) = 0;
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6504) = 0;
  return a1;
}
