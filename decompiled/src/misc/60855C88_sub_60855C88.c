/* sub_60855C88
 * address: 0x60855C88   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855C88(_DWORD *a1, int a2)
{
  int *v4; // r0
  int *v5; // r3
  int v6; // r7
  int *v7; // r1
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _BYTE *v10; // r0
  void (__fastcall ***v11)(_DWORD); // r5
  _DWORD *v12; // r5
  _DWORD *v13; // r6
  _DWORD *v14; // r7
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // t1

  v4 = a1 + 10;
  while ( 1 )
  {
    v7 = (int *)a1[11];
    if ( v7 == v4 )
      break;
    v5 = (int *)v7[1];
    v6 = *v5;
    *(_DWORD *)(*v7 + 4) = v5;
    *v5 = *v7;
    FIELD_U32(v6, 4) = v7;
    *v7 = v6;
  }
  v8 = (_DWORD *)a1[4];
  if ( v8 )
  {
    v9 = sub_60855A40(v8);
    dword_60CC7F8C(v9, dword_60CC7F90);
  }
  a1[4] = 0;
  v10 = (_BYTE *)a1[3];
  if ( v10 && (v10[64] & 8) == 0 )
  {
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v10 + 12))(v10, a2);
    v11 = (void (__fastcall ***)(_DWORD))a1[3];
    if ( v11 )
    {
      (**v11)(a1[3]);
      dword_60CC7F8C(v11, dword_60CC7F90);
    }
    a1[3] = 0;
  }
  v12 = (_DWORD *)a1[2];
  v13 = a1 + 1;
  if ( v12 != a1 + 1 )
  {
    do
    {
      v14 = (_DWORD *)v12[1];
      if ( v12 != v13 )
      {
        v15 = *v14;
        *(_DWORD *)(*v12 + 4) = v14;
        *v14 = *v12;
        FIELD_U32(v15, 4) = v12;
        *v12 = v15;
      }
      v17 = *(v12 - 1);
      v16 = v12 - 1;
      (*(void (__fastcall **)(_DWORD *))(v17 + 4))(v16);
      dword_60CC7F8C(v16, dword_60CC7F90);
      v12 = v14;
    }
    while ( v14 != v13 );
  }
  a1[12] = 0;
  a1[13] = 0;
  a1[9] = 0;
  a1[8] = 0;
  a1[7] = 0;
  a1[6] = 0;
  a1[5] = 0;
  return 0;
}
