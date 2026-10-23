/* sub_60175900
 * address: 0x60175900   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175900(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r0
  StateBase *v6; // r1

  v2 = (_DWORD *)sub_601DFFE4(a1 + 300);
  v3 = v2[18];
  FIELD_U32(a1, 80) = v3;
  v4 = v2[19];
  FIELD_U32(a1, 84) = v4;
  v5 = v2[20];
  FIELD_U32(a1, 88) = v5;
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 492) = v3;
  FIELD_U32(a1, 496) = v4;
  FIELD_U32(a1, 500) = v5;
  FIELD_U32(a1, 504) = v3;
  FIELD_U32(a1, 508) = v4;
  FIELD_U32(a1, 512) = v5;
  sub_601759F4(a1);
  FIELD_U32(a1, 128) = 0x40000000;
  FIELD_U32(a1, 132) = 0x40000000;
  FIELD_U32(a1, 136) = 0x40000000;
  FIELD_U32(a1, 596) = 0x40000000;
  FIELD_U32(a1, 600) = 0x40000000;
  FIELD_U32(a1, 604) = 0x40000000;
  FIELD_U32(a1, 212) = 1128792064;
  sub_6017793C(a1 + 324, a1, &dword_60C88E4C);
  sub_60175C54(a1);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    FIELD_U8(a1, 630) = 1;
  if ( sub_601EABD0(dword_60C8B144) == 1 )
    v6 = &stru_60C88C78;
  else
    v6 = (StateBase *)&dword_60C88C38;
  StateMgr__changeState((StateMgr *)(a1 + 284), v6);
  return 1;
}
