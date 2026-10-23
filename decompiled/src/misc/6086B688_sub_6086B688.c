/* sub_6086B688
 * address: 0x6086B688   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086B688(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r1
  int v5; // r3
  int v6; // r7
  int v7; // r9
  int v8; // r10
  int v9; // r12
  int v10; // r0
  unsigned __int16 *v11; // lr
  int v12; // r8
  int v13; // r5
  _WORD *v14; // r2
  int v15; // r1
  _WORD *v16; // r6
  int v17; // t1
  int v18; // r3
  int v19; // r2
  int v20; // r8
  int v21; // r5
  unsigned __int8 *v22; // r2
  _WORD *v23; // r3
  int v24; // t1
  int v25; // r3
  int result; // r0
  int v27; // r2
  int v28; // [sp+0h] [bp-30h]
  _DWORD *v29; // [sp+4h] [bp-2Ch]
  int v30; // [sp+8h] [bp-28h]

  v3 = (_DWORD *)(a1 + 56);
  sub_6086A2A4(a1 + 56, FIELD_U16(a2, 108));
  sub_6086A340((int)v3, *(unsigned __int16 **)(FIELD_U32(a1, 68) + 40));
  v4 = FIELD_U16(a1, 64);
  if ( FIELD_U16(a1, 64) )
  {
    v5 = 0;
    v6 = 0;
    v28 = FIELD_U16(a1, 64);
    v29 = v3;
    do
    {
      v7 = *(_DWORD *)(*v3 + 4 * v6) & 0x7FFF;
      if ( v7 != 0x7FFF )
      {
        v8 = 0;
        v9 = FIELD_U32(a1, 72) + (v6 << 6);
        v11 = (unsigned __int16 *)(v9 + 50);
        v10 = FIELD_U16(v9, 50);
        if ( FIELD_U16(v9, 50) )
        {
          v12 = v5;
          v13 = 2 * v5;
          v14 = (_WORD *)(FIELD_U32(v9, 8) + 18);
          v15 = 0;
          do
          {
            v16 = (_WORD *)(FIELD_U32(a1, 92) + v13);
            v13 += 2;
            *v16 = *v14;
            v17 = (unsigned __int16)*v14;
            v14 += 12;
            v18 = 1;
            if ( v17 == 0xFFFF )
              v18 = 0x10000;
            --v10;
            v15 |= v18;
          }
          while ( v10 );
          v19 = *v11;
          v5 = v12;
        }
        else
        {
          v19 = 0;
          v15 = 0;
        }
        v20 = FIELD_U16(v9, 52);
        if ( FIELD_U16(v9, 52) )
        {
          v30 = v5;
          v21 = 2 * (v19 + v5);
          v22 = (unsigned __int8 *)(FIELD_U32(v9, 16) + 12);
          do
          {
            v23 = (_WORD *)(FIELD_U32(a1, 92) + v21);
            v21 += 2;
            *v23 = (char)*v22;
            v24 = *v22;
            v22 += 16;
            v25 = 1;
            if ( v24 == 255 )
              v25 = 0x10000;
            --v20;
            v15 |= v25;
          }
          while ( v20 );
          v8 = FIELD_U16(v9, 52);
          v19 = *v11;
          v3 = v29;
          v5 = v30;
        }
        else
        {
          v3 = v29;
        }
        v5 += v19 + v8;
        if ( (v15 & 0x10001) == 0x10000 )
        {
          *(_DWORD *)(*v3 + 4 * v6) |= 0xC0007FFF;
          *(_DWORD *)(*v3 + 4 * v7) |= 0x3FFF8000u;
        }
        v4 = v28;
      }
      ++v6;
    }
    while ( v6 != v4 );
  }
  FIELD_U16(a1, 60) |= 1u;
  FIELD_U32(a1, 44) = 2139095040;
  result = FIELD_U32(a1, 40);
  if ( result >= 1 && result <= FIELD_U32(a1, 36) )
  {
    result = 0;
    v27 = 0;
    do
    {
      ++v27;
      *(_DWORD *)(FIELD_U32(a1, 32) + result) = 2139095040;
      result += 12;
    }
    while ( v27 < FIELD_U32(a1, 40) );
  }
  return result;
}
