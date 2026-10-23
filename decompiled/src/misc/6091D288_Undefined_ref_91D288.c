/* Undefined_ref_91D288
 * address: 0x6091D288   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Undefined_ref_91D288(_DWORD *a1, signed int a2, int a3)
{
  unsigned int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r7
  int v8; // r1
  _DWORD *v9; // r0
  _DWORD *result; // r0
  int v11; // r4
  unsigned int v12; // r6
  int v13; // r9
  _DWORD *v14; // r2
  int v15; // r1
  int v16; // [sp+4h] [bp-2Ch]

  if ( a2 >= 1 )
  {
    v5 = 12 * a2 + 8;
    if ( v5 < 12 * a2 )
      v5 = -1;
    if ( !is_mul_ok(0xCu, a2) )
      v5 = -1;
    v6 = (_DWORD *)sub_608DE334(v5, a3, 4);
    if ( v6 )
    {
      *v6 = 12;
      v6[1] = a2;
      v7 = v6 + 2;
      v8 = (int)&v6[3 * a2 + 2];
      v9 = v6 + 2;
      do
      {
        *v9 = -1;
        v9[1] = &sead__SafeStringBase__vtable;
        v9[2] = "Undefined";
        v9 += 3;
      }
      while ( v9 != (_DWORD *)v8 );
      a1[154] = a2;
      a1[155] = v7;
    }
  }
  result = (_DWORD *)a1[1];
  v11 = result[4];
  if ( v11 )
  {
    v12 = 12 * a2 + 8;
    if ( v12 < 12 * a2 )
      v12 = -1;
    if ( !is_mul_ok(0xCu, a2) )
      v12 = -1;
    if ( a2 >= 1 )
    {
      v13 = 0;
      v16 = result[5];
      do
      {
        result = (_DWORD *)sub_608DE334(v12, a3, 4);
        if ( result )
        {
          *result = 12;
          result[1] = a2;
          result += 2;
          v14 = result;
          do
          {
            *v14 = -1;
            v14[1] = &sead__SafeStringBase__vtable;
            v14[2] = "Undefined";
            v14 += 3;
          }
          while ( v14 != &result[3 * a2] );
          v15 = v16 + 936 * v13;
          FIELD_U32(v15, 616) = a2;
          FIELD_U32(v15, 620) = result;
        }
        ++v13;
      }
      while ( v13 != v11 );
    }
  }
  return result;
}
