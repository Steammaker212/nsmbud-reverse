/* polygon_ctrl_ref
 * address: 0x6043FCB8   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall polygon_ctrl_ref(int a1, int a2)
{
  _DWORD *v2; // r7
  int i; // r8
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  _BYTE v13[12]; // [sp+14h] [bp+0h] BYREF
  _BYTE v14[428]; // [sp+20h] [bp+Ch] BYREF
  _BYTE v15[95]; // [sp+1CCh] [bp+1B8h] BYREF
  char v16; // [sp+22Bh] [bp+217h]
  char v17; // [sp+22Ch] [bp+218h]
  bool v18; // [sp+22Dh] [bp+219h]
  bool v19; // [sp+22Eh] [bp+21Ah]
  bool v20; // [sp+22Fh] [bp+21Bh]

  v2 = (_DWORD *)(a1 + 604);
  for ( i = 0; i < 64; ++i )
  {
    *v2 = "polygon ctrl";
    v4 = sub_60913508(v14);
    sub_60913564(v4, v2 - 145);
    v5 = dword_60C9CCB8;
    sub_60440C2C(v13, dword_60C9CCB8);
    v6 = sub_60440CA4(v5);
    if ( sub_60919084(v2 - 145, v13, v6, 1) == 1 )
    {
      sub_6090B350(v15);
      v7 = i & 3;
      v18 = (i & 4) != 0;
      v19 = v18;
      v20 = v18;
      v8 = i & 8;
      switch ( v7 )
      {
        case 1:
          v9 = 2 - (v8 >> 3);
          break;
        case 2:
          LOBYTE(v9) = 0;
          break;
        case 3:
          LOBYTE(v9) = 3;
          break;
        default:
          v9 = (v8 >> 3) + 1;
          break;
      }
      v15[89] = v9;
      v16 = 0x1020200u >> (((unsigned int)i >> 1) & 0x18 ^ 0x10);
      v17 = v16;
      sub_6090BC48(v15, v14);
      sub_609191BC(v2 - 145, a2);
    }
    sub_60440C9C(v5);
    sub_60913598(v14);
    v2 += 146;
  }
  sub_609214AC(a1 + 37688, 7, a2);
  sub_60921540(a1 + 37688, 6, 3, 0);
  sub_60921540(a1 + 37688, 1, 1, 0);
  sub_60921540(a1 + 37688, 3, 1, 0);
  sub_60921540(a1 + 37688, 1, 1, 0);
  sub_60921540(a1 + 37688, 6, 1, 0);
  sub_60921540(a1 + 37688, 6, 1, 0);
  sub_60921540(a1 + 37688, 3, 1, 0);
  sub_609214AC(a1 + 37784, 1, a2);
  sub_60921540(a1 + 37784, 6, 16, 0);
  sub_609216EC(a1 + 37784, a2, 1, 1);
  sub_609214AC(a1 + 37592, 8, a2);
  sub_60921540(a1 + 37592, 3, 6, 0);
  sub_60921540(a1 + 37592, 3, 6, 0);
  sub_60921540(a1 + 37592, 3, 6, 0);
  sub_60921540(a1 + 37592, 1, 1, 0);
  sub_60921540(a1 + 37592, 1, 1, 0);
  sub_60921540(a1 + 37592, 1, 1, 0);
  sub_60921540(a1 + 37592, 1, 1, 0);
  return sub_60921540(a1 + 37592, 6, 1, 0);
}
