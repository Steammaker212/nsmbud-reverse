/* sub_6051256C
 * address: 0x6051256C   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051256C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r7
  int result; // r0
  int v5; // r1
  int m; // r3
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int i; // r5
  unsigned int v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int k; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r1
  int j; // r5

  v2 = (int)(a1 + 14);
  v3 = dword_60CA84C4;
  result = sub_6047482C((int)(a1 + 14), 5u);
  if ( result )
  {
    v5 = FIELD_U32(result, 56);
    if ( v3 == v5 )
    {
LABEL_10:
      result = (int)FIELD_F32(result, 16);
      switch ( result )
      {
        case 0:
        case 2:
        case 3:
          result = a1[1479];
          if ( a1[1183] != result )
          {
            v7 = dword_60CA84C4;
            v8 = sub_6047482C(v2, 5u);
            v9 = 0;
            if ( !v8 )
              goto LABEL_47;
            v10 = FIELD_U32(v8, 56);
            if ( v7 != v10 )
            {
              for ( i = 1; ; i += 2 )
              {
                if ( *(unsigned __int8 *)(v7 + i - 1) != *(unsigned __int8 *)(v10 + i - 1) )
                  goto LABEL_47;
                if ( !*(_BYTE *)(v7 + i - 1) )
                  break;
                if ( i >= 524289 || *(unsigned __int8 *)(v7 + i) != *(unsigned __int8 *)(v10 + i) )
                  goto LABEL_47;
                if ( !*(_BYTE *)(v7 + i) )
                  break;
              }
            }
            v12 = (int)FIELD_F32(v8, 16);
            if ( v12 > 4 )
              goto LABEL_47;
            goto LABEL_46;
          }
          break;
        case 1:
          result = a1[1480];
          if ( a1[1183] != result )
          {
            v17 = dword_60CA84C4;
            v18 = sub_6047482C(v2, 5u);
            v9 = 0;
            if ( !v18 )
              goto LABEL_47;
            v19 = FIELD_U32(v18, 56);
            if ( v17 != v19 )
            {
              for ( j = 1; ; j += 2 )
              {
                if ( *(unsigned __int8 *)(v17 + j - 1) != *(unsigned __int8 *)(v19 + j - 1) )
                  goto LABEL_47;
                if ( !*(_BYTE *)(v17 + j - 1) )
                  break;
                if ( j >= 524289 || *(unsigned __int8 *)(v17 + j) != *(unsigned __int8 *)(v19 + j) )
                  goto LABEL_47;
                if ( !*(_BYTE *)(v17 + j) )
                  break;
              }
            }
            v12 = (int)FIELD_F32(v18, 16);
            if ( v12 > 4 )
              goto LABEL_47;
            goto LABEL_46;
          }
          break;
        case 4:
          v13 = dword_60CA84C4;
          v14 = sub_6047482C(v2, 5u);
          v9 = 0;
          if ( v14 )
          {
            v15 = FIELD_U32(v14, 56);
            if ( v13 == v15 )
            {
LABEL_34:
              v12 = (int)FIELD_F32(v14, 16);
              if ( v12 <= 4 )
LABEL_46:
                v9 = dword_60B03830[v12];
            }
            else
            {
              for ( k = 1; *(unsigned __int8 *)(v13 + k - 1) == *(unsigned __int8 *)(v15 + k - 1); k += 2 )
              {
                if ( !*(_BYTE *)(v13 + k - 1) )
                  goto LABEL_34;
                if ( k >= 524289 || *(unsigned __int8 *)(v13 + k) != *(unsigned __int8 *)(v15 + k) )
                  break;
                if ( !*(_BYTE *)(v13 + k) )
                  goto LABEL_34;
              }
            }
          }
LABEL_47:
          result = sub_6051240C((int)a1, 1, v9);
          break;
        default:
          return result;
      }
    }
    else
    {
      for ( m = 1; *(unsigned __int8 *)(v3 + m - 1) == *(unsigned __int8 *)(v5 + m - 1); m += 2 )
      {
        if ( !*(_BYTE *)(v3 + m - 1) )
          goto LABEL_10;
        if ( m >= 524289 || *(unsigned __int8 *)(v3 + m) != *(unsigned __int8 *)(v5 + m) )
          break;
        if ( !*(_BYTE *)(v3 + m) )
          goto LABEL_10;
      }
    }
  }
  return result;
}
