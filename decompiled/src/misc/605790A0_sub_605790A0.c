/* sub_605790A0
 * address: 0x605790A0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605790A0(int a1)
{
  int v2; // r1
  signed int result; // r0

  FIELD_U8(a1, 7320) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 7481) = FIELD_U32(a1, 20);
  FIELD_U32(a1, 7392) = 0;
  sub_60579AE4(a1);
  v2 = sub_605D00B8(a1);
  result = 2;
  if ( !v2 )
  {
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    FIELD_U16(a1, 7376) = 0;
    FIELD_U32(a1, 7356) = 1082130432;
    FIELD_U32(a1, 6776) = -1056964608;
    FIELD_U32(a1, 6780) = 1094713344;
    FIELD_U32(a1, 6784) = 1090519040;
    FIELD_U32(a1, 6788) = -1069547520;
    ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAED1C);
    ColliderBase_setType((ColliderBase *)(a1 + 6120), 1);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    sub_605791F0(a1);
    return 1;
  }
  return result;
}
