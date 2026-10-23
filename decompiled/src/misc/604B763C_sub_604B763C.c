/* sub_604B763C
 * address: 0x604B763C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604B763C(int a1, unsigned int a2)
{
  unsigned int result; // r0
  bool v4; // cf
  bool v5; // zf
  int v6; // r1
  int v7; // r1
  int v8; // r7
  int v9; // r0
  int v10; // r9
  int v11; // r1
  int k; // r3
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int i; // r3
  int v17; // r7
  int v18; // r0
  int v19; // r1
  int j; // r3

  result = FIELD_U32(a1, 2128);
  v4 = 1;
  v5 = result == 0;
  if ( result )
  {
    a2 = FIELD_U32(result, 3724);
    v4 = a2 >= 0x2C;
    v5 = a2 == 44;
  }
  if ( !v5 )
  {
    if ( v4 )
      a2 = 0;
    v6 = 9 * a2;
    if ( &dword_60CA1E08[v6] )
    {
      v7 = dword_60CA1E08[v6 + 8];
      if ( v7 == 2 )
      {
        v10 = 2;
        v13 = dword_60CA24BC;
        v14 = sub_6047482C(result + 4, 2u);
        if ( v14 )
        {
          v15 = FIELD_U32(v14, 56);
          if ( v13 == v15 )
          {
LABEL_30:
            result = (unsigned int)FIELD_F32(v14, 16);
            if ( result >= 4 )
              return result;
            v10 = 3 * result + 2;
          }
          else
          {
            for ( i = 1; *(unsigned __int8 *)(v13 + i - 1) == *(unsigned __int8 *)(v15 + i - 1); i += 2 )
            {
              if ( !*(_BYTE *)(v13 + i - 1) )
                goto LABEL_30;
              if ( i >= 524289 || *(unsigned __int8 *)(v13 + i) != *(unsigned __int8 *)(v15 + i) )
                break;
              if ( !*(_BYTE *)(v13 + i) )
                goto LABEL_30;
            }
          }
        }
      }
      else if ( v7 == 1 )
      {
        v17 = dword_60CA24BC;
        v18 = sub_6047482C(result + 4, 2u);
        if ( v18 )
        {
          v19 = FIELD_U32(v18, 56);
          if ( v17 == v19 )
          {
LABEL_41:
            result = (unsigned int)FIELD_F32(v18, 16);
            if ( result >= 4 )
              return result;
            v10 = 3 * result + 1;
          }
          else
          {
            v10 = 1;
            for ( j = 1; *(unsigned __int8 *)(v17 + j - 1) == *(unsigned __int8 *)(v19 + j - 1); j += 2 )
            {
              if ( !*(_BYTE *)(v17 + j - 1) )
                goto LABEL_41;
              if ( j >= 524289 || *(unsigned __int8 *)(v17 + j) != *(unsigned __int8 *)(v19 + j) )
                break;
              if ( !*(_BYTE *)(v17 + j) )
                goto LABEL_41;
            }
          }
        }
        else
        {
          v10 = 1;
        }
      }
      else
      {
        if ( v7 )
          return result;
        v8 = dword_60CA24BC;
        v9 = sub_6047482C(result + 4, 2u);
        v10 = 0;
        if ( v9 )
        {
          v11 = FIELD_U32(v9, 56);
          if ( v8 == v11 )
          {
LABEL_19:
            result = (unsigned int)FIELD_F32(v9, 16);
            if ( result >= 4 )
              return result;
            v10 = 3 * result;
          }
          else
          {
            for ( k = 1; *(unsigned __int8 *)(v8 + k - 1) == *(unsigned __int8 *)(v11 + k - 1); k += 2 )
            {
              if ( !*(_BYTE *)(v8 + k - 1) )
                goto LABEL_19;
              if ( k >= 524289 || *(unsigned __int8 *)(v8 + k) != *(unsigned __int8 *)(v11 + k) )
                break;
              if ( !*(_BYTE *)(v8 + k) )
                goto LABEL_19;
            }
          }
        }
      }
      result = *(_DWORD *)(a1 + 4 * v10 + 2080);
      if ( result != 256 )
      {
        FIELD_U32(a1, 1028) = result;
        FIELD_U32(a1, 1032) = result;
        FIELD_U8(a1, 1047) = 0;
        FIELD_U8(a1, 1043) = 0;
        FIELD_U8(a1, 1040) = 1;
        return 1;
      }
    }
  }
  return result;
}
