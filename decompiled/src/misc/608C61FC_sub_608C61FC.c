/* sub_608C61FC
 * address: 0x608C61FC   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C61FC(_DWORD *a1, int a2)
{
  int *v4; // r6
  int *v5; // r1
  int v6; // r2
  int *v7; // r1
  int i; // r0
  int *v9; // r4
  int v10; // r7
  int *v11; // r0
  int **v12; // r7
  int *v13; // t1
  int *v14; // r5
  void (__fastcall *v15)(int, int, int); // r3
  void (__fastcall *v16)(int); // r1
  int *v17; // t1
  int *v18; // r3
  int v19; // r5
  int *v20; // r3
  int v21; // r7
  int *v22; // r1
  int v23; // r2
  int *v24; // r1
  int *v25; // r5
  int v26; // r4
  int *v27; // r3
  int *v28; // r2
  int j; // r1
  int result; // r0
  int *v31; // r8
  int v32; // t1

  if ( a2 )
  {
    v4 = a1 + 1;
    if ( sub_608C6070((int)a1, a2) )
    {
      while ( 1 )
      {
        v22 = (int *)a1[2];
        v23 = 0;
        if ( v22 != v4 )
        {
          v23 = 0;
          do
          {
            v22 = (int *)v22[1];
            ++v23;
          }
          while ( v22 != v4 );
        }
        if ( v23 <= a2 )
          break;
        v24 = (int *)*v4;
        *(_BYTE *)(*v4 + 16) = 0;
        while ( 1 )
        {
          v27 = (int *)v24[3];
          if ( v27 == v24 + 2 )
            break;
          v25 = (int *)v27[1];
          v26 = *v25;
          *(_DWORD *)(*v27 + 4) = v25;
          *v25 = *v27;
          FIELD_U32(v26, 4) = v27;
          *v27 = v26;
        }
        if ( v24 != v4 )
        {
          v20 = (int *)v24[1];
          v21 = *v20;
          *(_DWORD *)(*v24 + 4) = v20;
          *v20 = *v24;
          FIELD_U32(v21, 4) = v24;
          *v24 = v21;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v7 = (int *)a1[2];
        for ( i = 0; v7 != v4; ++i )
          v7 = (int *)v7[1];
        if ( i <= a2 )
          break;
        v9 = (int *)*v4;
        v10 = *v4;
        if ( *(_BYTE *)(*v4 + 16) )
        {
          v13 = *(int **)(v10 + 12);
          v12 = (int **)(v10 + 12);
          v11 = v13;
          v14 = (int *)(v12 - 1);
          if ( v12 - 1 != (int **)v13 )
          {
            do
            {
              while ( 1 )
              {
                v14 = (int *)*v14;
                v15 = (void (__fastcall *)(int, int, int))v14[4];
                if ( v15 )
                  v15(v14[2], v14[3], v14[5]);
                v16 = (void (__fastcall *)(int))v14[6];
                if ( !v16 )
                  break;
                v16(v14[7]);
                v11 = *v12;
                if ( v14 == *v12 )
                  goto LABEL_16;
              }
              v11 = *v12;
            }
            while ( v14 != *v12 );
          }
        }
        else
        {
          v17 = *(int **)(v10 + 12);
          v12 = (int **)(v10 + 12);
          v11 = v17;
        }
LABEL_16:
        if ( v11 != v9 + 2 )
        {
          do
          {
            v18 = (int *)v11[1];
            v19 = *v18;
            *(_DWORD *)(*v11 + 4) = v18;
            *v18 = *v11;
            FIELD_U32(v19, 4) = v11;
            *v11 = v19;
            v11 = *v12;
          }
          while ( *v12 != v9 + 2 );
        }
        if ( v9 != v4 )
        {
          v5 = (int *)v9[1];
          v6 = *v5;
          *(_DWORD *)(*v9 + 4) = v5;
          *v5 = *v9;
          FIELD_U32(v6, 4) = v9;
          *v9 = v6;
        }
      }
    }
    sub_608CF338(*a1, a2);
    v28 = (int *)a1[2];
    for ( j = 0; v28 != v4; ++j )
      v28 = (int *)v28[1];
    sub_608CF2A8(*a1, j);
    result = sub_608CF170(*a1, 20, 4);
    if ( result )
    {
      FIELD_U8(result, 18) = 0;
      FIELD_U8(result, 17) = 0;
      FIELD_U8(result, 19) = 0;
      *(_DWORD *)result = result;
      FIELD_U32(result, 4) = result;
      FIELD_U32(result, 8) = result + 8;
      FIELD_U32(result, 12) = result + 8;
      FIELD_U8(result, 16) = 1;
      *(_DWORD *)result = *v4;
      FIELD_U32(result, 4) = v4;
      *(_DWORD *)(*v4 + 4) = result;
      *v4 = result;
    }
  }
  else
  {
    sub_608C5D2C((int)a1);
    sub_608CF21C(*a1, 3);
    result = sub_608CF170(*a1, 20, 4);
    if ( result )
    {
      FIELD_U8(result, 18) = 0;
      FIELD_U8(result, 17) = 0;
      FIELD_U8(result, 19) = 0;
      *(_DWORD *)result = result;
      FIELD_U32(result, 4) = result;
      FIELD_U32(result, 8) = result + 8;
      FIELD_U32(result, 12) = result + 8;
      FIELD_U8(result, 16) = 1;
      v32 = a1[1];
      v31 = a1 + 1;
      *(_DWORD *)result = v32;
      FIELD_U32(result, 4) = v31;
      *(_DWORD *)(*v31 + 4) = result;
      *v31 = result;
    }
  }
  return result;
}
