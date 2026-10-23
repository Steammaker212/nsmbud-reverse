/* sub_6091AEA0
 * address: 0x6091AEA0   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091AEA0(int **a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r4
  int *v5; // r6
  int v6; // r0
  int *v7; // r6
  int v8; // r4
  int *v9; // r6
  _DWORD *v10; // r11
  int i; // r10
  _DWORD *v12; // r6
  int *v13; // r5
  int v14; // r4
  int *v15; // r5
  int *v16; // r5
  int v17; // r4
  int *v18; // r5
  int *v19; // r5
  int v20; // r4
  int *v21; // r5
  int v22; // r0
  int *v23; // r5
  int v24; // r4
  int *v25; // r5
  int v26; // r0
  int *v27; // r1
  int *v28; // r5
  int v29; // r4
  int *v30; // r5
  _DWORD *v31; // r1
  char *v32; // r1
  int v33; // t1
  int *v34; // r5
  int v35; // r4
  int *v36; // r5
  int v37; // r0
  int v38; // r0
  char *v39; // r6
  int v40; // t1
  int v41; // r0
  char *v42; // r6
  int v43; // t1
  char *v44; // r6
  int v45; // t1
  int *v46; // r5
  int v47; // r4
  _DWORD *v48; // r7
  int *v49; // r6
  int v50; // r9
  int j; // r4
  int *v52; // r6
  int v53; // r8
  int *v54; // r5
  int v55; // r0
  int *v56; // r5
  int v57; // r4
  int *v58; // r5
  int **v60; // [sp+4h] [bp-2Ch]
  int v61; // [sp+8h] [bp-28h]

  if ( ((*a1)[3] & 1) == 0 )
  {
    sub_6091AE30(0, *a1, 0x14u);
    v2 = (int)*a1 + (*a1)[4];
    v3 = v2 + 20;
    sub_6091AE30(0, (int *)(v2 + 20), 8u);
    v4 = FIELD_U32(v2, 24);
    if ( v4 )
    {
      v5 = (int *)(v3 + 8);
      do
      {
        sub_6091AE30(0, v5, 0x18u);
        --v4;
        v5 = (int *)((char *)v5 + *v5);
      }
      while ( v4 );
    }
    v60 = a1;
    v6 = (int)*a1 + (*a1)[4];
    v7 = (int *)(v6 + 20 + FIELD_U32(v6, 20));
    sub_6091AE30(0, v7, 8u);
    v8 = v7[1];
    if ( v8 )
    {
      v9 = v7 + 2;
      do
      {
        sub_6091AE30(0, v9, 0x10u);
        --v8;
        v9 = (int *)((char *)v9 + *v9);
      }
      while ( v8 );
    }
    v61 = FIELD_U32(v3, 4);
    if ( v61 )
    {
      v10 = (_DWORD *)(v3 + 8);
      for ( i = 0; i != v61; ++i )
      {
        v12 = v10 + 6;
        v13 = (_DWORD *)((char *)v10 + v10[1] + 24);
        sub_6091AE30(0, v13, 8u);
        v14 = v13[1];
        if ( v14 )
        {
          v15 = v13 + 2;
          do
          {
            sub_6091AE30(0, v15, 0xCu);
            --v14;
            v15 = (int *)((char *)v15 + *v15);
          }
          while ( v14 );
        }
        v16 = (_DWORD *)((char *)v12 + v10[1] + *(_DWORD *)((char *)v12 + v10[1]));
        sub_6091AE30(0, v16, 8u);
        v17 = v16[1];
        if ( v17 )
        {
          v18 = v16 + 2;
          do
          {
            sub_6091AE30(0, v18, 0xCu);
            --v17;
            v18 = (int *)((char *)v18 + *v18);
          }
          while ( v17 );
        }
        v19 = (_DWORD *)((char *)v12
                       + v10[1]
                       + *(_DWORD *)((char *)v12 + v10[1])
                       + *(_DWORD *)((char *)v12 + v10[1] + *(_DWORD *)((char *)v12 + v10[1])));
        sub_6091AE30(0, v19, 8u);
        v20 = v19[1];
        if ( v20 )
        {
          v21 = v19 + 2;
          do
          {
            sub_6091AE30(0, v21, 0xCu);
            --v20;
            v21 = (int *)((char *)v21 + *v21);
          }
          while ( v20 );
        }
        v22 = v10[1];
        v23 = (_DWORD *)((char *)v12
                       + v22
                       + *(_DWORD *)((char *)v12 + v22)
                       + *(_DWORD *)((char *)v12 + v22 + *(_DWORD *)((char *)v12 + v22))
                       + *(_DWORD *)((char *)v12
                                   + v22
                                   + *(_DWORD *)((char *)v12 + v22)
                                   + *(_DWORD *)((char *)v12 + v22 + *(_DWORD *)((char *)v12 + v22))));
        sub_6091AE30(0, v23, 8u);
        v24 = v23[1];
        if ( v24 )
        {
          v25 = v23 + 2;
          do
          {
            sub_6091AE30(0, v25, 0xCu);
            --v24;
            v25 = (int *)((char *)v25 + *v25);
          }
          while ( v24 );
        }
        v27 = (_DWORD *)((char *)v12 + v10[1]);
        v26 = *v27;
        v28 = (int *)((char *)v27
                    + v26
                    + *(int *)((char *)v27 + v26)
                    + *(int *)((char *)v27 + v26 + *(int *)((char *)v27 + v26))
                    + *(int *)((char *)v27
                             + v26
                             + *(int *)((char *)v27 + v26)
                             + *(int *)((char *)v27 + v26 + *(int *)((char *)v27 + v26))));
        sub_6091AE30(0, v28, 8u);
        v29 = v28[1];
        if ( v29 )
        {
          v30 = v28 + 2;
          do
          {
            sub_6091AE30(0, v30, 0x10u);
            --v29;
            v30 = (int *)((char *)v30 + *v30);
          }
          while ( v29 );
        }
        v31 = (_DWORD *)((char *)v12 + v10[1]);
        v33 = *(_DWORD *)((char *)v31 + *v31);
        v32 = (char *)v31 + *v31;
        v34 = (int *)&v32[v33
                        + *(_DWORD *)&v32[v33]
                        + *(_DWORD *)&v32[v33 + *(_DWORD *)&v32[v33]]
                        + *(_DWORD *)&v32[v33 + *(_DWORD *)&v32[v33] + *(_DWORD *)&v32[v33 + *(_DWORD *)&v32[v33]]]];
        sub_6091AE30(0, v34, 8u);
        v35 = v34[1];
        if ( v35 )
        {
          v36 = v34 + 2;
          do
          {
            sub_6091AE30(0, v36, 0x10u);
            --v35;
            v36 = (int *)((char *)v36 + *v36);
          }
          while ( v35 );
        }
        v37 = v10[1];
        v40 = *(_DWORD *)((char *)v12 + v37);
        v39 = (char *)v12 + v37;
        v38 = v40;
        v43 = *(_DWORD *)&v39[v40];
        v42 = &v39[v38];
        v41 = v43;
        v45 = *(_DWORD *)&v42[v43];
        v44 = &v42[v41];
        v46 = (int *)&v44[v45
                        + *(_DWORD *)&v44[v45]
                        + *(_DWORD *)&v44[v45 + *(_DWORD *)&v44[v45]]
                        + *(_DWORD *)&v44[v45 + *(_DWORD *)&v44[v45] + *(_DWORD *)&v44[v45 + *(_DWORD *)&v44[v45]]]];
        sub_6091AE30(0, v46, 8u);
        v47 = v46[1];
        if ( v47 )
        {
          v48 = v46 + 2;
          v49 = v46 + 2;
          do
          {
            sub_6091AE30(0, v49, 0xCu);
            --v47;
            v49 = (int *)((char *)v49 + *v49);
          }
          while ( v47 );
          v50 = v46[1];
          if ( v50 )
          {
            for ( j = 0; j != v50; ++j )
            {
              v52 = (_DWORD *)((char *)v48 + v48[2]);
              sub_6091AE30(0, v52 + 3, 8u);
              v53 = v52[4];
              if ( v53 )
              {
                v54 = v52 + 5;
                do
                {
                  sub_6091AE30(0, v54, 0xCu);
                  --v53;
                  v54 = (int *)((char *)v54 + *v54);
                }
                while ( v53 );
              }
              v48 = (_DWORD *)((char *)v48 + *v48);
            }
          }
        }
        v10 = (_DWORD *)((char *)v10 + *v10);
      }
    }
    v55 = (int)*v60 + (*v60)[4];
    v56 = (int *)(v55 + 20 + FIELD_U32(v55, 20) + *(_DWORD *)(v55 + 20 + FIELD_U32(v55, 20)));
    sub_6091AE30(0, v56, 8u);
    v57 = v56[1];
    if ( v57 )
    {
      v58 = v56 + 2;
      do
      {
        sub_6091AE30(0, v58, 0x10u);
        --v57;
        v58 = (int *)((char *)v58 + *v58);
      }
      while ( v57 );
    }
    (*v60)[3] |= 1u;
  }
  return 1;
}
