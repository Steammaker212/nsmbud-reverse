/* sub_605D7738
 * address: 0x605D7738   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D7738(int a1)
{
  int v2; // r1
  float v3; // s0
  int *v4; // r1
  int v5; // r0
  StateMgr *v6; // r0
  int *v7; // r1

  if ( dword_60CB1BE4 )
    FIELD_U32(a1, 6800) = sub_605E8C84(dword_60CB1BE4, a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  sub_605DD398(a1);
  sub_605DA750(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  v2 = 0x40000000;
  if ( FIELD_U32(a1, 80) == 1 )
    v2 = -1073741824;
  FIELD_U32(a1, 160) = v2;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 96) = -1065353216;
  if ( FIELD_S32(a1, 6264) >= 0 )
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
    {
      v4 = dword_605D7914;
      if ( !FIELD_U8(a1, 86) )
        v4 = &dword_605D7914[1];
      v3 = *(float *)v4;
    }
    else
    {
      v3 = -2850.0;
    }
    FIELD_F32(a1, 116) = v3 + (float)((float)FIELD_U32(a1, 6800) * 16.0);
  }
  FIELD_U32(a1, 7024) = 1;
  FIELD_U32(a1, 620) = a1 + 7008;
  sub_605E398C(a1, &dword_60CB1AA4);
  sub_605E0870(a1, &dword_60CB18A0, 0);
  v5 = FIELD_U32(a1, 6256);
  if ( v5 == 2 )
  {
    sub_605DAD24(a1, 1);
    FIELD_U32(a1, 8000) = 0;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    v7 = &dword_60CB1744;
    v6 = (StateMgr *)(a1 + 6292);
    goto LABEL_16;
  }
  if ( !v5 )
  {
    sub_605DAD24(a1, 1);
    FIELD_U32(a1, 8000) = 50331648;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    v6 = (StateMgr *)(a1 + 6292);
    v7 = &dword_60CB1690;
LABEL_16:
    StateMgr__changeState(v6, (StateBase *)v7);
  }
  return 1;
}
