/* sub_60872574
 * address: 0x60872574   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872574(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // lr
  int v5; // r2
  int v6; // r7
  int v7; // r6
  int i; // r4
  int v9; // r2
  int v10; // r4
  _BYTE *v11; // r5
  _WORD *v12; // r2
  int result; // r0
  int v14; // r8
  int v15; // r6
  int v16; // r0
  int v17; // r7
  _DWORD *v18; // r5
  int v19; // r4
  int v20; // r0

  v2 = 0;
  FIELD_U32(a1, 32) = 0;
  v3 = FIELD_U16(a1, 76);
  if ( FIELD_U16(a1, 76) )
  {
    v4 = FIELD_U32(a1, 40);
    do
    {
      v5 = FIELD_U32(a1, 48) + 48 * v2;
      v6 = FIELD_U16(v5, 34);
      if ( FIELD_U16(v5, 34) )
      {
        v7 = FIELD_U32(v5, 24);
        for ( i = 0; (v6 & 3) != i; v7 += 16 )
        {
          ++i;
          FIELD_U8(v7, 9) = -1;
        }
        if ( (unsigned int)(v6 - 1) >= 3 )
        {
          v9 = i - v6;
          v10 = 0;
          do
          {
            v11 = (_BYTE *)(v7 - 16 * v10);
            v10 -= 4;
            v11[9] = -1;
            v11[25] = -1;
            v11[41] = -1;
            v11[57] = -1;
          }
          while ( v9 != v10 );
        }
      }
      v12 = (_WORD *)(v4 + 2 * v2++);
      *v12 = -1;
    }
    while ( v2 != v3 );
  }
  result = FIELD_U16(a1, 72);
  if ( (result & 1) != 0 )
  {
    v14 = FIELD_U16(a1, 76);
    if ( FIELD_U16(a1, 76) )
    {
      v15 = 0;
      do
      {
        v16 = FIELD_U32(a1, 48) + 48 * v15;
        v17 = FIELD_U16(v16, 32);
        if ( FIELD_U16(v16, 32) )
        {
          v18 = (_DWORD *)(v16 + 8);
          v19 = 16;
          do
          {
            v20 = *v18 + v19 - 16;
            if ( (*(_WORD *)(*v18 + v19) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v20);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v20);
            v19 += 48;
            --v17;
          }
          while ( v17 );
        }
        ++v15;
      }
      while ( v15 != v14 );
      result = FIELD_U16(a1, 72);
    }
    result ^= 1u;
    FIELD_U16(a1, 72) = result;
  }
  return result;
}
