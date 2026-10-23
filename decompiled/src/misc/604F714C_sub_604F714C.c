/* sub_604F714C
 * address: 0x604F714C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F714C(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r5
  unsigned int i; // r6
  int v7; // r7
  int v8; // r0
  char v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r0
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int result; // r0

  v3 = a3;
  if ( a3 >= 5 )
    v3 = 5;
  a1[5] = v3;
  *(_BYTE *)(a1[8] + 64) &= ~1u;
  *(_BYTE *)(a1[9] + 64) &= ~1u;
  *(_BYTE *)(a1[10] + 64) &= ~1u;
  *(_BYTE *)(a1[11] + 64) &= ~1u;
  *(_BYTE *)(a1[12] + 64) &= ~1u;
  if ( v3 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v7 = a1[i];
      v8 = *(_DWORD *)(a2 + 4 * i);
      FIELD_U8(v7, 3597) = 1;
      *(_BYTE *)(FIELD_U32(v7, 3584) + 64) &= ~1u;
      v9 = 0;
      FIELD_U32(v7, 3592) = v8;
      if ( v8 != 10 )
      {
        sub_60473DE4((_DWORD *)v7, 0, &dword_60CA6ACC[2 * v8], 0);
        v9 = FIELD_U8(v7, 3597) ^ 1;
      }
      v10 = &a1[i];
      FIELD_U8(v7, 3580) = v9;
      *(_BYTE *)(v10[8] + 64) |= 1u;
    }
  }
  v11 = v3 - 1;
  v12 = a1[7];
  if ( v3 - 1 >= 5 )
    v11 = 0;
  v13 = (_DWORD *)a1[v11 + 13];
  v14 = v13[6];
  v15 = v13[7];
  v16 = v13[8];
  FIELD_U32(v12, 24) = v14;
  FIELD_U32(v12, 28) = v15;
  FIELD_U32(v12, 32) = v16;
  result = FIELD_U8(v12, 64) | 0x10;
  FIELD_U8(v12, 64) = result;
  return result;
}
