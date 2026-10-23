/* sub_607ECFAC
 * address: 0x607ECFAC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ECFAC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  float v4; // s2
  float v5; // s4
  float v6; // s6
  float v7; // s8
  float v8; // s10

  v3 = (_DWORD *)(a1 + 66756);
  v2 = FIELD_U32(a1, 66756);
  *v3 = v2 - 1;
  if ( v2 < 2 )
  {
    FIELD_U32(a1, 556) = 0;
    FIELD_U32(a1, 560) = 1145896960;
    FIELD_U32(a1, 564) = 1160380416;
    FIELD_U32(a1, 568) = 0;
    FIELD_U32(a1, 572) = 1101004800;
    FIELD_U32(a1, 576) = 1133903872;
    StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60CC5CAC);
  }
  else
  {
    v4 = FIELD_F32(a1, 560) + FIELD_F32(a1, 1040);
    v5 = FIELD_F32(a1, 564) + FIELD_F32(a1, 1044);
    v6 = FIELD_F32(a1, 568) + FIELD_F32(a1, 1048);
    v7 = FIELD_F32(a1, 572) + FIELD_F32(a1, 1052);
    v8 = FIELD_F32(a1, 576) + FIELD_F32(a1, 1056);
    FIELD_F32(a1, 556) = FIELD_F32(a1, 556) + FIELD_F32(a1, 1036);
    FIELD_F32(a1, 560) = v4;
    FIELD_F32(a1, 564) = v5;
    FIELD_F32(a1, 568) = v6;
    FIELD_F32(a1, 572) = v7;
    FIELD_F32(a1, 576) = v8;
    sub_604AADB4(dword_60CA146C);
  }
  return (*(int (__fastcall **)(int, int))(FIELD_U32(a1, 504) + 16))(a1 + 504, a1 + 508);
}
