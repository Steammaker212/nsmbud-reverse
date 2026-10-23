/* sub_6086AF38
 * address: 0x6086AF38   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086AF38(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r7
  int v12; // r3
  int v13; // r6
  int v14; // r3
  int v15; // r7

  FIELD_U32(a1, 68) = a2;
  FIELD_U32(a1, 72) = FIELD_U32(a2, 48);
  FIELD_U16(a1, 60) &= ~1u;
  sub_6086A3F0(a1, FIELD_U32(a2, 104), (FIELD_U16(a2, 96) >> 2) & 1);
  FIELD_U16(a1, 64) = FIELD_U16(a2, 100);
  v4 = FIELD_U16(a2, 102);
  FIELD_U32(a1, 40) = v4;
  FIELD_U32(a1, 44) = 2139095040;
  if ( v4 && FIELD_U32(a1, 36) >= v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      *(_DWORD *)(FIELD_U32(a1, 32) + v5) = 2139095040;
      v5 += 12;
    }
    while ( v6 < FIELD_U32(a1, 40) );
  }
  v7 = FIELD_U32(a1, 68);
  result = FIELD_U16(v7, 118);
  if ( FIELD_U16(v7, 118) )
  {
    **(_DWORD **)(a1 + 96) = **(_DWORD **)(v7 + 56);
    *(_QWORD *)FIELD_U32(a1, 100) = *(_QWORD *)*(_DWORD *)(FIELD_U32(a1, 68) + 88);
    if ( result != 1 )
    {
      v9 = 1;
      v10 = 8;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 96) + 4 * v9) = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 68) + 56) + 4 * v9);
        ++v9;
        v11 = FIELD_U32(a1, 100);
        v12 = *(_DWORD *)(FIELD_U32(a1, 68) + 88);
        v13 = *(_DWORD *)(v12 + v10);
        v14 = *(_DWORD *)(v12 + v10 + 4);
        *(_DWORD *)(v11 + v10) = v13;
        v15 = v11 + v10;
        v10 += 8;
        FIELD_U32(v15, 4) = v14;
      }
      while ( result != v9 );
    }
  }
  return result;
}
