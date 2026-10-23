/* sub_6041CC20
 * address: 0x6041CC20   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041CC20(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r4
  int v4; // r1
  int result; // r0
  int v6; // r6
  unsigned int i; // r7
  unsigned int v8; // r0
  _DWORD *v9; // r4
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // t1

  v3 = a1 + 352;
  v2 = a1[352];
  if ( (v2 & a1[353]) != 0xFFFFFFFF )
  {
    sub_60916A94(dword_60CCFC8C, v2);
    *v3 = -1;
    v3[1] = -1;
  }
  if ( *((_QWORD *)a1 + 177) != -1 )
  {
    sub_60916A94(dword_60CCFC8C, a1[354]);
    a1[354] = -1;
    a1[355] = -1;
  }
  if ( *((_QWORD *)a1 + 179) != -1 )
  {
    sub_60916A94(dword_60CCFC8C, a1[358]);
    a1[358] = -1;
    a1[359] = -1;
  }
  v4 = a1[360];
  result = ~v4 | ~a1[361];
  if ( *((_QWORD *)a1 + 180) != -1 )
  {
    result = sub_60916A94(dword_60CCFC8C, v4);
    a1[360] = -1;
    a1[361] = -1;
  }
  v6 = a1[350];
  if ( v6 >= 1 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = 0;
      if ( i < 0x13 )
        v8 = i;
      v9 = &a1[2 * v8];
      v12 = v9[362];
      v11 = v9 + 362;
      v10 = v12;
      result = ~v12 | ~v11[1];
      if ( result )
      {
        result = sub_60916A94(dword_60CCFC8C, v10);
        *v11 = -1;
        v11[1] = -1;
      }
    }
  }
  return result;
}
