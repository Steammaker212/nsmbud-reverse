/* g3d_SkeletonUniformBlock_ref
 * address: 0x6087D844   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_SkeletonUniformBlock_ref(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v7; // r9
  int v8; // r10
  int v9; // r6
  int v10; // r6
  int v11; // r0
  int result; // r0
  int v14; // [sp+10h] [bp-48h] BYREF
  int v15; // [sp+14h] [bp-44h]
  int v16; // [sp+18h] [bp-40h]
  int v17; // [sp+1Ch] [bp-3Ch]
  int v18; // [sp+20h] [bp-38h] BYREF
  int v19; // [sp+24h] [bp-34h]
  int v20; // [sp+28h] [bp-30h]
  int v21; // [sp+2Ch] [bp-2Ch]

  a1[9] = 48 * (*(unsigned __int16 *)(*a1 + 80) + *(unsigned __int16 *)(*a1 + 78));
  if ( *((_BYTE *)a1 + 6) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v17 = 0;
      v16 = 0;
      v15 = 0;
      v14 = 0;
      sub_6083D5B0(&v14);
      v14 = a1[9];
      v15 = 80;
      v9 = a1[8] + v7;
      sub_608353A4(v9);
      sub_608353C0(v9, a2, &v14, a3, a4);
      sub_608A7D8C(v9, "g3d_SkeletonUniformBlock");
      v10 = a1[9];
      v21 = 0;
      v20 = 0;
      v19 = 0;
      v18 = 0;
      sub_6083D5B0(&v18);
      v18 = 48 * (*(unsigned __int16 *)(*a1 + 80) + *(unsigned __int16 *)(*a1 + 78));
      v19 = 80;
      v11 = sub_608352A0(a2, (int)&v18);
      ++v8;
      v7 += 72;
      a4 += (v10 + v11 - 1) & -v11;
    }
    while ( v8 < *((unsigned __int8 *)a1 + 6) );
  }
  result = *((unsigned __int16 *)a1 + 2) | 1;
  *((_WORD *)a1 + 2) = result;
  return result;
}
