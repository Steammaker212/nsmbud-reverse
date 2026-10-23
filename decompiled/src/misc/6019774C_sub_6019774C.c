/* sub_6019774C
 * address: 0x6019774C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019774C(int a1)
{
  _DWORD *v2; // r3
  int v3; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r2

  v2 = (_DWORD *)(a1 + 360);
  v4 = a1 + 80;
  v3 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 348) = v3;
  v5 = FIELD_U32(a1, 84);
  FIELD_U32(a1, 352) = v5;
  v6 = FIELD_U32(a1, 88);
  FIELD_U32(a1, 356) = v6;
  *v2 = v3;
  v2[1] = v5;
  v2[2] = v6;
  sub_60197820(a1);
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 212) = 1140457472;
  sub_60197CE4(a1);
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89B90);
  if ( FIELD_U32(dword_60CC6D78, 416) == 1 )
    FIELD_U32(a1, 472) = sub_601E4EA4(dword_60C8B13C, 101, 0, v4, 1);
  return 1;
}
