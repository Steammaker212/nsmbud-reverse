/* sub_609A5790
 * address: 0x609A5790   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A5790(int a1, int a2)
{
  int result; // r0
  int v4; // r6
  int v5; // r8
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r2
  bool v9; // cc
  int v10; // r5
  int v11; // t1
  int v12; // r0
  int v13; // r2

  result = FIELD_U32(a2, 120);
  if ( result >= 1 )
  {
    v4 = FIELD_U32(a2, 116);
    result = a2 + 112;
    if ( v4 != a2 + 112 )
    {
      v5 = a2 + 88;
      v6 = (_DWORD *)(v4 - 24);
      do
      {
        sub_60905558(a1, 32);
        (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
        v7 = v6[1];
        v8 = 0;
        while ( *(_BYTE *)(v7 + v8) )
        {
          if ( !*(_BYTE *)(v7 + v8 + 1) )
          {
            ++v8;
            break;
          }
          if ( !*(_BYTE *)(v7 + v8 + 2) )
          {
            v8 += 2;
            break;
          }
          v9 = v8 + 2 <= 0x7FFFF;
          v8 += 3;
          if ( !v9 )
          {
            v8 = 0;
            break;
          }
        }
        sub_6090567C(a1, (int)v6, v8);
        sub_60905558(a1, 61);
        sub_60905558(a1, 34);
        v11 = v6[3];
        v10 = (int)(v6 + 3);
        (*(void (__fastcall **)(int))(v11 + 12))(v10);
        v12 = FIELD_U32(v10, 4);
        v13 = 0;
        while ( *(_BYTE *)(v12 + v13) )
        {
          if ( !*(_BYTE *)(v12 + v13 + 1) )
          {
            ++v13;
            break;
          }
          if ( !*(_BYTE *)(v12 + v13 + 2) )
          {
            v13 += 2;
            break;
          }
          v9 = v13 + 2 <= 0x7FFFF;
          v13 += 3;
          if ( !v9 )
          {
            v13 = 0;
            break;
          }
        }
        sub_6090567C(a1, v10, v13);
        result = sub_60905558(a1, 34);
        v4 = FIELD_U32(v4, 4);
        v6 = (_DWORD *)(v4 - 24);
      }
      while ( v4 - 24 != v5 );
    }
  }
  return result;
}
