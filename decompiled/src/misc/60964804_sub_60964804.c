/* sub_60964804
 * address: 0x60964804   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60964804(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v7; // r12
  unsigned int v8; // r3
  int result; // r0
  int *v10; // r3
  unsigned int v11; // r2
  int v12; // r3
  unsigned int *v13; // r4
  int v14; // r7
  int *v15; // r2
  int v16; // r5
  int v17; // r3
  int v18; // r10
  unsigned int v19; // r8
  int *v20; // r5
  int v21; // [sp+0h] [bp-48h]
  int v22; // [sp+0h] [bp-48h]
  int v23; // [sp+0h] [bp-48h]
  int v24; // [sp+0h] [bp-48h]
  int v25; // [sp+0h] [bp-48h]
  int v26; // [sp+0h] [bp-48h]
  int v27; // [sp+0h] [bp-48h]
  int v28; // [sp+0h] [bp-48h]
  int v29; // [sp+0h] [bp-48h]
  int v30; // [sp+4h] [bp-44h]
  int v31; // [sp+4h] [bp-44h]
  int v32; // [sp+4h] [bp-44h]
  int v33; // [sp+4h] [bp-44h]
  int v34; // [sp+4h] [bp-44h]
  int v35; // [sp+4h] [bp-44h]
  int v36; // [sp+4h] [bp-44h]
  int v37; // [sp+4h] [bp-44h]
  int v38; // [sp+4h] [bp-44h]
  int v39; // [sp+8h] [bp-40h] BYREF
  int v40; // [sp+Ch] [bp-3Ch]
  int v41; // [sp+10h] [bp-38h]

  sub_6093AC5C(a2, a3, a4);
  sub_6093AD38(a2, a1 + 10, a1 + 13, a5, v21, v30, v39);
  sub_6093AD38(a2, a1 + 13, a1 + 16, a5, v22, v31, v39);
  sub_6093AD38(a2, a1 + 16, a1 + 19, a5, v23, v32, v39);
  sub_6093AD38(a2, a1 + 19, a1 + 10, a5, v24, v33, v39);
  sub_6093AD38(a2, a1 + 22, a1 + 25, a5, v25, v34, v39);
  sub_6093AD38(a2, a1 + 25, a1 + 28, a5, v26, v35, v39);
  sub_6093AD38(a2, a1 + 28, a1 + 31, a5, v27, v36, v39);
  sub_6093AD38(a2, a1 + 31, a1 + 22, a5, v28, v37, v39);
  v7 = a1[9];
  v8 = 0;
  result = 0;
  if ( v7 < 2 )
    v8 = a1[9];
  if ( a1[3 * v8 + 5] >= 1 )
  {
    v29 = (int)a1;
    do
    {
      v10 = &a1[3 * v8];
      v11 = v10[3];
      v12 = v10[4];
      if ( v11 > result )
        v12 += 4 * result;
      v13 = *(unsigned int **)v12;
      v14 = *(_DWORD *)(*(_DWORD *)v12 + 8);
      if ( v14 )
      {
        v15 = (int *)v13[1];
        if ( *v13 > v14 - 1 )
          v15 += 3 * v14 - 3;
        v16 = *v15;
        v17 = v15[1];
        v41 = v15[2];
        v40 = v17;
        v39 = v16;
        if ( v14 >= 1 )
        {
          v18 = 0;
          v19 = 0;
          v38 = result;
          do
          {
            v20 = (int *)v13[1];
            if ( *v13 > v19 )
              v20 = (int *)((char *)v20 + v18);
            sub_6093AD38(a2, &v39, v20, (int)&unk_60B45D2C, v29, v38, v39);
            ++v19;
            v18 += 12;
            v39 = *v20;
            v40 = v20[1];
            v41 = v20[2];
          }
          while ( v14 != v19 );
          a1 = (int *)v29;
          result = v38;
          v7 = FIELD_U32(v29, 36);
        }
      }
      v8 = 0;
      ++result;
      if ( v7 < 2 )
        v8 = v7;
    }
    while ( result < a1[3 * v8 + 5] );
  }
  return result;
}
