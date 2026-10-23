/* sub_6083C540
 * address: 0x6083C540   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083C540(int *a1, int a2, unsigned __int8 *a3)
{
  int v5; // r7
  int v6; // r9
  int *v7; // r5
  int *v8; // r4
  __int16 v9; // r0
  int v10; // r6
  int v11; // r0
  _BYTE *v12; // r9
  int v13; // r10
  int v14; // r5
  int v15; // r8
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int *v21; // [sp+Ch] [bp-4Ch]
  int *v22; // [sp+28h] [bp-30h]
  int v23; // [sp+2Ch] [bp-2Ch]
  int *v24; // [sp+30h] [bp-28h]

  v5 = *a1;
  v6 = *((_DWORD *)a3 + 6);
  v7 = a1 + 2;
  a1[4] = *((_DWORD *)a3 + 1);
  a1[5] = *((_DWORD *)a3 + 2);
  a1[6] = *((_DWORD *)a3 + 3);
  a1[7] = *((_DWORD *)a3 + 4);
  dword_60CC76B0(a1 + 2);
  v8 = a1 + 3;
  dword_60CC76CC(a1 + 3);
  v21 = a1;
  *((_BYTE *)a1 + 37) = *a3;
  v9 = *((_WORD *)a3 + 1);
  if ( *a3 )
  {
    v10 = 0;
    v24 = v7;
    v23 = v6;
    v22 = v8;
    do
    {
      v11 = v9 & 4;
      if ( v11 )
        v11 = v10;
      v12 = (_BYTE *)(v23 + 32 * v11);
      ((void (__fastcall *)(int *, int, int))dword_60CC76B4)(v7, v10, *v12 & 1);
      ((void (__fastcall *)(int))dword_60CC7674)(v5);
      ((void (__fastcall *)(int, int))dword_60CC7678)(v5, v10);
      v13 = sub_6083AB00((unsigned __int8)v12[1]);
      v14 = sub_6083AB00((unsigned __int8)v12[2]);
      v15 = sub_6083AB00((unsigned __int8)v12[4]);
      v16 = sub_6083AB00((unsigned __int8)v12[5]);
      ((void (__fastcall *)(int, int, int, int, int))dword_60CC767C)(v5, v13, v14, v15, v16);
      v17 = sub_6083AAEC((unsigned __int8)v12[3]);
      v18 = sub_6083AAEC((unsigned __int8)v12[6]);
      ((void (__fastcall *)(int, int, int))dword_60CC7680)(v5, v17, v18);
      ((void (__fastcall *)(int *, int, int, int, int, int))dword_60CC76D0)(
        v22,
        v10,
        v12[7] & 1,
        ((unsigned __int8)v12[7] >> 1) & 1,
        ((unsigned __int8)v12[7] >> 2) & 1,
        ((unsigned __int8)v12[7] >> 3) & 1);
      v7 = v24;
      v9 = *((_WORD *)a3 + 1);
      ++v10;
      v5 += 8;
    }
    while ( v10 < *a3 );
  }
  if ( (v9 & 8) != 0 )
  {
    v19 = sub_6083AB14(a3[1]);
    dword_60CC76B8(v7, v19);
  }
  *((_BYTE *)v21 + 36) = 1;
  return 1;
}
