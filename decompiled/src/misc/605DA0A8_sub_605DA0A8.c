/* sub_605DA0A8
 * address: 0x605DA0A8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DA0A8(int a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // lr
  int v5; // r12
  int v6; // r1
  int v7; // r12

  v4 = *a2;
  v5 = FIELD_U32(a1, 116);
  v6 = a2[1];
  FIELD_U32(a1, 108) = v4;
  FIELD_U32(a1, 112) = v6;
  FIELD_U32(a1, 584) = v4;
  FIELD_U32(a1, 588) = v6;
  FIELD_U32(a1, 592) = v5;
  FIELD_U32(a1, 608) = v4;
  FIELD_U32(a1, 612) = v6;
  FIELD_U32(a1, 616) = v5;
  v7 = a3[1];
  FIELD_U32(a1, 120) = *a3;
  FIELD_U32(a1, 124) = v7;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 80) = *(float *)a3 <= 0.0;
  FIELD_U32(a1, 8000) = a4;
  FIELD_U32(a1, 8004) = 0;
  FIELD_U32(a1, 8008) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 6292), (StateBase *)&dword_60CB1808);
}
