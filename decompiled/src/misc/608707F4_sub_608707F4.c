/* sub_608707F4
 * address: 0x608707F4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608707F4(int a1)
{
  int v2; // r0
  int v3; // lr
  int v4; // r12
  int v5; // r1
  int v6; // r5
  int v7; // r6
  int i; // r7
  int v9; // r4
  _WORD *v10; // r5
  int v11; // r5
  int v12; // r1
  int j; // r6
  int v14; // r4
  int v15; // r5
  _BYTE *v16; // r6
  _WORD *v17; // r1
  int result; // r0
  int v19; // r8
  int v20; // r6
  int v21; // r0
  int v22; // r7
  _DWORD *v23; // r5
  int v24; // r4
  int v25; // r0

  v2 = 0;
  FIELD_U32(a1, 32) = 0;
  v3 = FIELD_U16(a1, 100);
  if ( FIELD_U16(a1, 100) )
  {
    v4 = FIELD_U32(a1, 40);
    do
    {
      v5 = FIELD_U32(a1, 48) + (v2 << 6);
      v6 = FIELD_U16(v5, 50);
      if ( FIELD_U16(v5, 50) )
      {
        v7 = FIELD_U32(v5, 8);
        for ( i = 0; (v6 & 3) != i; v7 += 24 )
        {
          ++i;
          FIELD_U16(v7, 18) = -1;
        }
        if ( (unsigned int)(v6 - 1) >= 3 )
        {
          v9 = v6 - i;
          v10 = (_WORD *)(v7 + 90);
          do
          {
            *(v10 - 36) = -1;
            *(v10 - 24) = -1;
            *(v10 - 12) = -1;
            *v10 = -1;
            v10 += 48;
            v9 -= 4;
          }
          while ( v9 );
        }
      }
      v11 = FIELD_U16(v5, 52);
      if ( FIELD_U16(v5, 52) )
      {
        v12 = FIELD_U32(v5, 16);
        for ( j = 0; (v11 & 3) != j; v12 += 16 )
        {
          ++j;
          FIELD_U8(v12, 12) = -1;
        }
        if ( (unsigned int)(v11 - 1) >= 3 )
        {
          v14 = j - v11;
          v15 = 0;
          do
          {
            v16 = (_BYTE *)(v12 - 16 * v15);
            v15 -= 4;
            v16[12] = -1;
            v16[28] = -1;
            v16[44] = -1;
            v16[60] = -1;
          }
          while ( v14 != v15 );
        }
      }
      v17 = (_WORD *)(v4 + 2 * v2++);
      *v17 = -1;
    }
    while ( v2 != v3 );
  }
  result = FIELD_U16(a1, 96);
  if ( (result & 1) != 0 )
  {
    v19 = FIELD_U16(a1, 100);
    if ( FIELD_U16(a1, 100) )
    {
      v20 = 0;
      do
      {
        v21 = FIELD_U32(a1, 48) + (v20 << 6);
        v22 = FIELD_U16(v21, 56);
        if ( FIELD_U16(v21, 56) )
        {
          v23 = (_DWORD *)(v21 + 24);
          v24 = 16;
          do
          {
            v25 = *v23 + v24 - 16;
            if ( (*(_WORD *)(*v23 + v24) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v25);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v25);
            v24 += 48;
            --v22;
          }
          while ( v22 );
        }
        ++v20;
      }
      while ( v20 != v19 );
      result = FIELD_U16(a1, 96);
    }
    result ^= 1u;
    FIELD_U16(a1, 96) = result;
  }
  return result;
}
