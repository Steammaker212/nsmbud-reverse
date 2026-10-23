/* sub_60153D8C
 * address: 0x60153D8C   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60153D8C(_DWORD *a1, float *a2, float a3)
{
  char v6; // r9
  int *i; // r5
  int v8; // r7
  int v9; // r6
  float v10; // s2
  int v11; // r0
  int v12; // r1
  int *j; // r5
  int v14; // r7
  int v15; // r6
  float v16; // s2
  int v17; // r0
  int v18; // r1
  float v20; // [sp+0h] [bp-30h] BYREF
  float v21; // [sp+4h] [bp-2Ch]

  v6 = 0;
  for ( i = (int *)a1[5]; i; a1[24] = v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *i;
        i = (int *)i[1];
        v9 = FIELD_U32(v8, 336);
        if ( v9 )
        {
          if ( ((int (__fastcall *)(int, float *, float))loc_601616E8)(v8, a2, a3) == 1 )
          {
            v10 = a2[1] - FIELD_F32(v8, 132);
            v20 = *a2 - FIELD_F32(v8, 128);
            v21 = v10;
            if ( (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v9 + 24))(v9, v8, &v20) == 1 )
            {
              (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v9 + 28))(v9, v8, &v20);
              v6 = 1;
              if ( !FIELD_U32(v8, 104) && !FIELD_U32(v8, 108) )
              {
                v11 = v8 + 100;
                if ( a1[23] != v8 + 100 )
                  break;
              }
            }
          }
        }
        if ( !i )
          goto LABEL_14;
      }
      v12 = a1[24];
      if ( !v12 )
        break;
      FIELD_U32(v12, 4) = v11;
      FIELD_U32(v8, 108) = a1[24];
      a1[24] = v11;
      if ( !i )
        goto LABEL_14;
    }
    a1[23] = v11;
  }
LABEL_14:
  for ( j = (int *)a1[20]; j; a1[24] = v17 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *j;
        j = (int *)j[1];
        v15 = FIELD_U32(v14, 336);
        if ( v15 )
        {
          if ( ((int (__fastcall *)(int, float *, float))loc_601616E8)(v14, a2, a3) == 1 )
          {
            v16 = a2[1] - FIELD_F32(v14, 132);
            v20 = *a2 - FIELD_F32(v14, 128);
            v21 = v16;
            if ( (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v15 + 24))(v15, v14, &v20) == 1 )
            {
              v6 = 1;
              if ( !FIELD_U32(v14, 104) && !FIELD_U32(v14, 108) )
              {
                v17 = v14 + 100;
                if ( a1[23] != v14 + 100 )
                  break;
              }
            }
          }
        }
        if ( !j )
          return v6 & 1;
      }
      v18 = a1[24];
      if ( !v18 )
        break;
      FIELD_U32(v18, 4) = v17;
      FIELD_U32(v14, 108) = a1[24];
      a1[24] = v17;
      if ( !j )
        return v6 & 1;
    }
    a1[23] = v17;
  }
  return v6 & 1;
}
