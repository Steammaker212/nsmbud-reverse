/* sub_601D43F8
 * address: 0x601D43F8   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D43F8(int a1, int a2)
{
  int v3; // r8
  int result; // r0
  int v5; // r6
  signed int v6; // r7
  _DWORD *v7; // r10
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r7
  unsigned int v11; // r1
  _DWORD *v12; // r5
  int v13; // r6
  int v14; // t1
  int v15; // r1
  char *v16; // r0
  bool v17; // cc

  FIELD_U32(a1, 1092) = 6;
  v3 = a1 + 1032;
  if ( (FIELD_U8(a1, 1121) & 4) != 0 )
  {
    if ( sub_601DA4BC(v3, a2) == 1 )
    {
      result = FIELD_U32(a1, 1120) & 0xFFFFFBFF;
      FIELD_U32(a1, 1120) = result;
      return result;
    }
    v9 = sub_601DFFE4(v3);
    v10 = 2;
    v11 = ((FIELD_U32(a1, 1120) & 8) != 0) | 4;
    FIELD_U32(a1, 1092) = v11;
    v12 = (_DWORD *)sub_60178694(v9, v11);
    if ( !v12 )
    {
      v12 = (_DWORD *)sub_60178694(v9, 2u);
      if ( !v12 )
      {
        v10 = 3;
        v12 = (_DWORD *)sub_60178694(v9, 3u);
      }
      FIELD_U32(a1, 1092) = v10;
    }
    v14 = FIELD_U32(v9, 4);
    v13 = v9 + 4;
    (*(void (__fastcall **)(int))(v14 + 12))(v13);
    v15 = 0;
    v16 = *(char **)(v13 + 4);
    while ( v16[v15] )
    {
      if ( !v16[v15 + 1] )
      {
        ++v15;
        break;
      }
      if ( !v16[v15 + 2] )
      {
        v15 += 2;
        break;
      }
      v17 = v15 + 2 < 0x80000;
      v15 += 3;
      if ( !v17 )
      {
        v15 = 0;
        break;
      }
    }
    if ( v15 < 0 )
      v16 = &byte_60B3BA34;
    if ( *v16 == 70 )
      sub_601D8284(a1);
    FIELD_U32(a1, 1044) = v12[21];
    FIELD_U32(a1, 1048) = v12[22];
    result = v12[24];
    FIELD_U32(a1, 1052) = result;
  }
  else
  {
    result = sub_601E1158(v3, a2);
    if ( !result )
    {
      v5 = sub_601DFFE4(v3);
      v6 = 0;
      v7 = 0;
      do
      {
        result = sub_60178694(v5, v6);
        v8 = (_DWORD *)result;
        if ( result )
        {
          if ( FIELD_U32(a1, 1028) != FIELD_U32(result, 96)
            || (result = FIELD_U32(result, 84), FIELD_U32(a1, 1020) != result) )
          {
            result = RW9M0W909_ref_22AE5C(dword_60C8D864, v3, v6, 0);
            if ( result == 1 )
            {
              if ( v7 )
              {
                FIELD_U32(a1, 1092) = 6;
                FIELD_U32(a1, 1044) = -1;
                FIELD_U32(a1, 1048) = -1;
                FIELD_U32(a1, 1052) = -1;
                return -1;
              }
              v7 = v8;
              FIELD_U32(a1, 1044) = v8[21];
              FIELD_U32(a1, 1048) = v8[22];
              result = v8[24];
              FIELD_U32(a1, 1052) = result;
              FIELD_U32(a1, 1092) = v6;
            }
          }
        }
        ++v6;
      }
      while ( v6 < 6 );
    }
  }
  return result;
}
