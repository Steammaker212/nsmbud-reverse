/* sub_607C0DA4
 * address: 0x607C0DA4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C0DA4(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r0
  float v5; // s0
  int v6; // r1
  char *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3

  result = sub_60793CA8(FIELD_U32(a1, 11360));
  if ( result == 1 )
  {
    sub_60794954(a1 + 11356, 54, 0.0, 0.0);
    FIELD_U32(a1, 11480) = 10;
    FIELD_U32(a1, 1212) |= 0x10000u;
    FIELD_U32(a1, 9940) = 4;
    v3 = sub_6079B2CC((_DWORD *)a1);
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_F32(a1, 112) - (float)(v3 + 2.0);
    FIELD_F32(a1, 112) = v5;
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v4;
    FIELD_F32(a1, 588) = v5;
    FIELD_U32(a1, 592) = v6;
    FIELD_U32(a1, 608) = v4;
    FIELD_F32(a1, 612) = v5;
    FIELD_U32(a1, 616) = v6;
    sub_6075F970(a1, 0);
    v7 = sub_6079A6E8((_DWORD *)a1);
    v8 = *(_DWORD *)v7;
    v9 = *((_DWORD *)v7 + 1);
    v10 = *((_DWORD *)v7 + 2);
    FIELD_U32(a1, 6716) = *((_DWORD *)v7 + 3);
    FIELD_U32(a1, 6712) = v10;
    FIELD_U32(a1, 6708) = v9;
    FIELD_U32(a1, 6704) = v8;
    FIELD_U32(a1, 6720) = 0x40000000;
    if ( sub_60154550(a1 + 1328) == 1 )
    {
      return sub_601549C4(a1 + 1328, 0.0);
    }
    else
    {
      FIELD_U32(a1, 12840) = 30;
      return Player_changeState(a1, (StateBase *)&unk_60CC4C04, 0);
    }
  }
  return result;
}
