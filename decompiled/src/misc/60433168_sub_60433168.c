/* sub_60433168
 * address: 0x60433168   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60433168(int *result, signed int a2, int a3)
{
  int *v5; // r6
  __int64 v6; // r0
  void *v7; // r0
  int v8; // r7
  unsigned int v9; // r4
  int v10; // r8
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r1
  int i; // r2
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r5

  v5 = result;
  if ( a2 >= 1 )
  {
    v6 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok(8u, a2) )
      HIDWORD(v6) = 1;
    if ( HIDWORD(v6) )
      LODWORD(v6) = -1;
    v7 = (void *)sub_608DE334(v6, a3, 4);
    v8 = (int)v7;
    if ( v7 )
    {
      memset(v7, 0, 8 * a2);
      v5[80] = a2;
      v5[81] = v8;
    }
    v9 = 0;
    do
    {
      v10 = *((unsigned __int16 *)v5 + 32);
      v11 = (_DWORD *)v5[81];
      if ( v5[80] > v9 )
        v11 += 2 * v9;
      v12 = operator_new_8DE2C8((4 * v10 + 31) & 0x7FFE0, a3, 32);
      if ( v10 && v12 )
      {
        *v11 = v10;
        v11[1] = v12;
      }
      result = (int *)v5[81];
      if ( v5[80] > v9 )
        result += 2 * v9;
      v13 = *result;
      if ( *result >= 1 )
      {
        for ( i = 0; (v13 & 3) != i; *(_DWORD *)(result[1] + 4 * i++) = 0 )
          ;
        if ( (unsigned int)(v13 - 1) >= 3 )
        {
          v15 = i - v13;
          v16 = 4 * i;
          v17 = 0;
          do
          {
            *(_DWORD *)(result[1] + v16 - 4 * v17) = 0;
            *(_DWORD *)(result[1] + v16 - 4 * v17 + 4) = 0;
            *(_DWORD *)(result[1] + v16 - 4 * v17 + 8) = 0;
            v18 = result[1] + v16 - 4 * v17;
            v17 -= 4;
            FIELD_U32(v18, 12) = 0;
          }
          while ( v15 != v17 );
        }
      }
      ++v9;
    }
    while ( v9 != a2 );
  }
  return result;
}
