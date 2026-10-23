/* sub_604F7AB4
 * address: 0x604F7AB4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F7AB4(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v6; // r9
  unsigned int v7; // r7
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  unsigned int v15; // r6
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r0
  int v19; // r1
  unsigned int v20; // r0
  unsigned int i; // r5
  int result; // r0
  int v23; // r1
  unsigned int v24; // r0

  sub_604F8C4C(a1[887]);
  sub_604F8C4C(a1[888]);
  sub_604F8C4C(a1[889]);
  sub_604F8C4C(a1[890]);
  sub_604F8C4C(a1[891]);
  v6 = FIELD_U32(a2, 44) + a3[6] - 1;
  if ( v6 >= 4 )
    v6 = 4;
  if ( *(_BYTE *)(*a3 + 3596) )
  {
    sub_608589FC(
      a1[dword_60B03514[5 * v6] + 892],
      *(_DWORD *)(a1[887] + 4 * dword_60B03578[*(_DWORD *)(*a3 + 3592)] + 40));
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v8 = a3[1];
  if ( FIELD_U8(v8, 3596) )
  {
    v9 = *(_DWORD *)(a1[v7 + 887] + 4 * dword_60B03578[FIELD_U32(v8, 3592)] + 40);
    v10 = dword_60B03514[5 * v6 + v7];
    if ( v10 >= 0x10 )
      v10 = 0;
    sub_608589FC(a1[v10 + 892], v9);
    ++v7;
  }
  v11 = a3[2];
  if ( FIELD_U8(v11, 3596) )
  {
    v12 = *(_DWORD *)(a1[v7 + 887] + 4 * dword_60B03578[FIELD_U32(v11, 3592)] + 40);
    v13 = dword_60B03514[5 * v6 + v7];
    if ( v13 >= 0x10 )
      v13 = 0;
    sub_608589FC(a1[v13 + 892], v12);
    ++v7;
  }
  v14 = a3[3];
  if ( !FIELD_U8(v14, 3596) )
    goto LABEL_19;
  v15 = 5;
  if ( v7 <= 4 )
  {
    v16 = *(_DWORD *)(a1[v7 + 887] + 4 * dword_60B03578[FIELD_U32(v14, 3592)] + 40);
    v17 = dword_60B03514[5 * v6 + v7];
    if ( v17 >= 0x10 )
      v17 = 0;
    sub_608589FC(a1[v17 + 892], v16);
    ++v7;
LABEL_19:
    v18 = a3[4];
    if ( FIELD_U8(v18, 3596) )
    {
      v15 = 5;
      if ( v7 <= 4 )
      {
        v19 = *(_DWORD *)(a1[v7 + 887] + 4 * dword_60B03578[FIELD_U32(v18, 3592)] + 40);
        v20 = dword_60B03514[5 * v6 + v7];
        if ( v20 >= 0x10 )
          v20 = 0;
        sub_608589FC(a1[v20 + 892], v19);
        v15 = v7 + 1;
      }
    }
    else
    {
      v15 = v7;
    }
  }
  for ( i = 0; i < 0xA; ++i )
  {
    result = *(_DWORD *)(a2 + 4 * i);
    if ( FIELD_U8(result, 3596) )
    {
      if ( v15 > 4 )
        return result;
      v23 = *(_DWORD *)(a1[v15 + 887] + 4 * dword_60B03578[FIELD_U32(result, 3592)] + 40);
      v24 = dword_60B03514[5 * v6 + v15];
      if ( v24 >= 0x10 )
        v24 = 0;
      result = sub_608589FC(a1[v24 + 892], v23);
      ++v15;
    }
  }
  return result;
}
