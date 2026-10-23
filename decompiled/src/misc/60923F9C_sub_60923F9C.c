/* sub_60923F9C
 * address: 0x60923F9C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60923F9C(unsigned int *result, unsigned int a2)
{
  unsigned __int16 *v2; // r2
  int v3; // r1
  unsigned int v4; // r2
  bool v5; // cc
  signed int v6; // r9
  int v7; // r11
  _DWORD *v8; // r5
  int v9; // r10
  int v10; // r2
  signed int v11; // r6
  unsigned int v12; // r7
  int v13; // r0
  unsigned int v14; // r4
  _DWORD *v15; // r0
  int v16; // r10
  int v17; // r4
  int v18; // r7
  signed int v19; // r6
  _DWORD *v20; // r0
  _DWORD v21[10]; // [sp+8h] [bp-28h] BYREF

  v2 = (unsigned __int16 *)result[4];
  if ( result[3] > a2 )
    v2 += 2 * a2;
  v3 = v2[1];
  if ( v2[1] )
  {
    v4 = *v2;
    result += 5;
    v5 = *result > v4;
    if ( *result > v4 )
      v5 = *result > v3 + v4 - 1;
    if ( v5 )
    {
      v6 = v3 - 1;
      if ( v3 - 1 >= 1 )
      {
        v7 = v3;
        v8 = (_DWORD *)(result[1] + 4 * v4);
        v9 = v3 / 2;
        do
        {
          v10 = v9 - 1;
          v11 = 2 * v9;
          v12 = v9;
          v13 = v8[v9 - 1];
          v21[0] = v13;
          if ( 2 * v9 <= v7 )
          {
            v14 = v9;
            while ( 1 )
            {
              v12 = v11 <= v6 ? v11 | ((unsigned int)sub_60924160(&v8[v11 - 1]) >> 31) : v11;
              if ( sub_60924160(v21) >= 0 )
                break;
              v15 = &v8[v14];
              v11 = 2 * v12;
              v14 = v12;
              *(v15 - 1) = v8[v12 - 1];
              if ( (int)(2 * v12) > v7 )
                goto LABEL_19;
            }
            v12 = v14;
LABEL_19:
            v13 = v21[0];
            v10 = v9 - 1;
          }
          v5 = v9 <= 1;
          v9 = v10;
          v8[v12 - 1] = v13;
        }
        while ( !v5 );
        do
        {
          v16 = v7;
          v17 = 1;
          v21[0] = v8[--v7];
          v8[v7] = *v8;
          if ( v16 >= 3 )
          {
            v18 = 1;
            v19 = 2;
            while ( 1 )
            {
              v17 = v19 >= v7 ? v19 : v19 | ((unsigned int)sub_60924160(&v8[v19 - 1]) >> 31);
              if ( sub_60924160(v21) >= 0 )
                break;
              v20 = &v8[v18];
              v19 = 2 * v17;
              v18 = v17;
              *(v20 - 1) = v8[v17 - 1];
              if ( 2 * v17 >= v16 )
                goto LABEL_31;
            }
            v17 = v18;
          }
LABEL_31:
          result = &v8[v17];
          *(result - 1) = v21[0];
        }
        while ( v7 > 1 );
      }
    }
  }
  return result;
}
