/* sub_607F1830
 * address: 0x607F1830   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F1830(int a1)
{
  int v2; // r0
  float v3; // s2
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s4

  v2 = FIELD_U32(a1, 1460);
  FIELD_U32(a1, 1460) = v2 - 1;
  if ( v2 < 2 )
  {
    FIELD_U32(a1, 552) = 0;
    FIELD_U32(a1, 556) = 0;
    FIELD_U32(a1, 560) = 1158578176;
    FIELD_U32(a1, 564) = 0;
    FIELD_U32(a1, 568) = 0;
    FIELD_U32(a1, 572) = -1014693888;
    StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)&dword_60CC5F48);
  }
  else
  {
    v3 = FIELD_F32(a1, 556) + FIELD_F32(a1, 1036);
    v4 = FIELD_F32(a1, 564) + FIELD_F32(a1, 1044);
    v5 = FIELD_F32(a1, 568) + FIELD_F32(a1, 1048);
    v6 = FIELD_F32(a1, 572) + FIELD_F32(a1, 1052);
    v7 = FIELD_F32(a1, 560) + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 552) = FIELD_F32(a1, 552) + FIELD_F32(a1, 1032);
    FIELD_F32(a1, 556) = v3;
    FIELD_F32(a1, 560) = v7;
    FIELD_F32(a1, 564) = v4;
    FIELD_F32(a1, 568) = v5;
    FIELD_F32(a1, 572) = v6;
    sub_604A1AC0((_DWORD *)(dword_60C99E2C + 615772));
  }
  return (*(int (__fastcall **)(int, int))(FIELD_U32(a1, 500) + 16))(a1 + 500, a1 + 504);
}
