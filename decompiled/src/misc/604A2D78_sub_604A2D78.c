/* sub_604A2D78
 * address: 0x604A2D78   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A2D78(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  float v4; // s2
  float v5; // s0
  float v6; // s4
  float v7; // s6
  int v8; // r0
  _DWORD *v9; // r0

  v2 = FIELD_U32(a1, 20448);
  if ( v2 )
  {
    v3 = FIELD_U8(v2, 67);
    v4 = FIELD_F32(v2, 92);
    v5 = FIELD_F32(v2, 108);
    v6 = FIELD_F32(v2, 56) * 0.5;
    if ( (v3 & 3) == 2 )
    {
      v4 = v4 - v6;
    }
    else if ( (v3 & 3) == 1 )
    {
      v4 = v4 + v6;
      v5 = v5 + 0.0;
    }
    v7 = FIELD_F32(v2, 60) * 0.5;
    v8 = (v3 >> 2) & 3;
    if ( v8 == 1 )
    {
      v5 = v7 + v5;
      v4 = v4 + 0.0;
    }
    else if ( v8 == 2 )
    {
      v5 = v5 - v7;
    }
    FIELD_F32(a1, 20512) = v4 - v6;
    FIELD_F32(a1, 20516) = v5 - v7;
    FIELD_F32(a1, 20520) = v6 + v4;
    FIELD_F32(a1, 20524) = v7 + v5;
  }
  sub_60502548(a1 + 3936);
  FIELD_U16(a1, 4988) = 0;
  v9 = sub_6047EABC((_DWORD *)(a1 + 3976));
  if ( sub_60835008(v9) == 1 && !FIELD_U8(a1, 20541) )
  {
    sub_60502C04(a1 + 3936, &unk_60B02D20, 2);
    FIELD_U8(a1, 4979) = 0;
    FIELD_U8(a1, 4976) = 1;
  }
  else
  {
    sub_60502A24(a1 + 3936, &unk_60B02D20, 2, 1);
  }
  FIELD_U8(a1, 20540) = 1;
  FIELD_U8(a1, 20547) = 0;
  return 20547;
}
