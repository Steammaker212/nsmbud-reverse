/* sub_6067BCEC
 * address: 0x6067BCEC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6067BCEC(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 6100;
  result = (StateMethodExecuter *)sub_6067F184(a1 + 6100);
  if ( result == (StateMethodExecuter *)1 )
  {
    sub_6067EFAC(v2);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
    sub_6067F108(v2, v7);
    FIELD_U32(a1, 120) = v7[0];
    FIELD_U32(a1, 124) = v7[1];
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 9152));
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_U32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v4;
    FIELD_U32(a1, 588) = v5;
    FIELD_U32(a1, 592) = v6;
    FIELD_U32(a1, 608) = v4;
    FIELD_U32(a1, 612) = v5;
    FIELD_U32(a1, 616) = v6;
    sub_60160948((_DWORD *)(a1 + 9152));
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7EEC);
  }
  return result;
}
