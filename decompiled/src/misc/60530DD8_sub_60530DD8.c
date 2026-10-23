/* sub_60530DD8
 * address: 0x60530DD8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60530DD8(int a1, int *a2)
{
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2

  FIELD_U32(a1, 64) = 2;
  v4 = (_DWORD *)(a1 + 132);
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  *v4 = v5;
  v4[1] = v6;
  v4[2] = v7;
  sub_60531178(a1 + 68);
  StateMgr__changeState((StateMgr *)(a1 + 88), (StateBase *)&dword_60CAAB14);
  v8 = a2[4];
  v9 = a2[5];
  FIELD_U32(a1, 212) = a2[3];
  FIELD_U32(a1, 216) = v8;
  FIELD_U32(a1, 220) = v9;
  sub_60531178(a1 + 148);
  return StateMgr__changeState((StateMgr *)(a1 + 168), (StateBase *)&dword_60CAAB14);
}
