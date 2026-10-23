/* sub_6042D94C
 * address: 0x6042D94C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042D94C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r7
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r0
  int v14; // r5
  int v15; // r6
  int v16; // r2
  bool v17; // cc
  int v18; // r0
  int v19; // r5

  v4 = (_DWORD *)a1[1];
  if ( v4 )
  {
    v5 = 4;
    if ( v4[222] == 1 )
      v5 = 0;
  }
  else
  {
    v5 = 4;
  }
  v6 = sub_604267D0(dword_60C9BBD4, v5);
  v7 = *a1;
  v8 = v6;
  sub_6091D95C(*a1);
  v9 = FIELD_U32(v7, 636);
  if ( FIELD_U32(v7, 632) > 1u )
    v9 += 12;
  sub_60920FDC(v8, a2, v9, -1, 0);
  if ( !v4 )
  {
    v13 = sub_60426814(dword_60C9BBD4, v5);
    v14 = *a1;
    v15 = v13;
    sub_6091D95C(*a1);
    v16 = FIELD_U32(v14, 636);
    v17 = FIELD_U32(v14, 632) > 2u;
    v18 = v15;
    goto LABEL_17;
  }
  v10 = v4[221];
  if ( v10 == 2 )
  {
    v11 = v4[220];
    v12 = (int)(a1 + 88);
  }
  else
  {
    if ( v10 != 1 )
    {
      v12 = sub_60426814(dword_60C9BBD4, v5);
      goto LABEL_16;
    }
    v11 = v4[219];
    v12 = (int)(a1 + 2);
  }
  sub_60920EC8(v12, v11);
LABEL_16:
  v19 = *a1;
  sub_6091D95C(*a1);
  v16 = FIELD_U32(v19, 636);
  v17 = FIELD_U32(v19, 632) > 2u;
  v18 = v12;
LABEL_17:
  if ( v17 )
    v16 += 24;
  return sub_60920FDC(v18, a2, v16, -1, 0);
}
