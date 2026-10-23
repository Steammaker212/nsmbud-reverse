/* sub_608C5D2C
 * address: 0x608C5D2C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5D2C(int a1)
{
  int result; // r0
  int *v3; // r5
  int *v4; // r1
  int *v5; // r6
  int v6; // r4
  int *v7; // r3
  int *v8; // r3
  int v9; // r7
  int *v10; // r6
  int v11; // r7
  int *v12; // r0
  int **v13; // r7
  int *v14; // t1
  int *v15; // r4
  void (__fastcall *v16)(int, int, int); // r3
  void (__fastcall *v17)(int); // r1
  int *v18; // t1
  int *v19; // r3
  int v20; // r4
  int *v21; // r1
  int v22; // r2

  result = sub_608C6070(a1, 0);
  v3 = (int *)(a1 + 4);
  if ( FIELD_U32(a1, 8) != a1 + 4 )
  {
    if ( result )
    {
      result = 0;
      do
      {
        v4 = (int *)*v3;
        *(_BYTE *)(*v3 + 16) = 0;
        while ( 1 )
        {
          v7 = (int *)v4[3];
          if ( v7 == v4 + 2 )
            break;
          v5 = (int *)v7[1];
          v6 = *v5;
          *(_DWORD *)(*v7 + 4) = v5;
          *v5 = *v7;
          FIELD_U32(v6, 4) = v7;
          *v7 = v6;
        }
        if ( v4 != v3 )
        {
          v8 = (int *)v4[1];
          v9 = *v8;
          *(_DWORD *)(*v4 + 4) = v8;
          *v8 = *v4;
          FIELD_U32(v9, 4) = v4;
          *v4 = v9;
        }
      }
      while ( *(int **)(a1 + 8) != v3 );
    }
    else
    {
      do
      {
        v10 = (int *)*v3;
        v11 = *v3;
        if ( *(_BYTE *)(*v3 + 16) )
        {
          v14 = *(int **)(v11 + 12);
          v13 = (int **)(v11 + 12);
          v12 = v14;
          v15 = (int *)(v13 - 1);
          if ( v13 - 1 != (int **)v14 )
          {
            do
            {
              while ( 1 )
              {
                v15 = (int *)*v15;
                v16 = (void (__fastcall *)(int, int, int))v15[4];
                if ( v16 )
                  v16(v15[2], v15[3], v15[5]);
                v17 = (void (__fastcall *)(int))v15[6];
                if ( !v17 )
                  break;
                v17(v15[7]);
                v12 = *v13;
                if ( v15 == *v13 )
                  goto LABEL_21;
              }
              v12 = *v13;
            }
            while ( v15 != *v13 );
          }
        }
        else
        {
          v18 = *(int **)(v11 + 12);
          v13 = (int **)(v11 + 12);
          v12 = v18;
        }
LABEL_21:
        if ( v12 != v10 + 2 )
        {
          do
          {
            v19 = (int *)v12[1];
            v20 = *v19;
            *(_DWORD *)(*v12 + 4) = v19;
            *v19 = *v12;
            FIELD_U32(v20, 4) = v12;
            *v12 = v20;
            v12 = *v13;
          }
          while ( *v13 != v10 + 2 );
        }
        if ( v10 != v3 )
        {
          v21 = (int *)v10[1];
          v22 = *v21;
          *(_DWORD *)(*v10 + 4) = v21;
          *v21 = *v10;
          FIELD_U32(v22, 4) = v10;
          *v10 = v22;
        }
        result = FIELD_U32(a1, 8);
      }
      while ( (int *)result != v3 );
    }
  }
  return result;
}
