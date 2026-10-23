/* sub_6086C75C
 * address: 0x6086C75C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6086C75C(unsigned int *a1, int a2, int a3)
{
  int v4; // r2
  unsigned int result; // r0
  unsigned int v6; // r1
  __int64 v7; // r0
  unsigned int v8; // r5
  int v9; // r11
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r8
  int v15; // r2
  int (__fastcall *v16)(_BYTE *, int, int, unsigned int); // r6
  int v17; // r3
  int v18; // r0
  int v19; // r1
  unsigned int v20; // [sp+4h] [bp-7Ch]
  int v21; // [sp+8h] [bp-78h]
  int v23; // [sp+10h] [bp-70h]
  _BYTE v25[104]; // [sp+18h] [bp-68h] BYREF

  v4 = 0;
  result = *a1;
  v6 = FIELD_U16(result, 170) + 31;
  if ( v6 >> 5 )
  {
    v21 = FIELD_U32(result, 128);
    v20 = v6 >> 5;
    do
    {
      LODWORD(v7) = *(_DWORD *)(a3 + 4 * v4);
      v23 = v4;
      HIDWORD(v7) = *(_DWORD *)(v21 + 4 * v4);
      v8 = HIDWORD(v7) | v7;
      if ( v7 )
      {
        v9 = 32 * v4;
        do
        {
          v10 = v8 | (v8 >> 1) | ((v8 | (v8 >> 1)) >> 2);
          v11 = v10 | (v10 >> 4) | ((v10 | (v10 >> 4)) >> 8);
          v12 = ((~(v11 | HIWORD(v11)) >> 1) & 0x55555555) + (~(v11 | HIWORD(v11)) & 0x55555555);
          v13 = (((((v12 >> 2) & 0x33333333) + (v12 & 0x33333333)) >> 4) & 0x7070707)
              + ((((v12 >> 2) & 0x33333333) + (v12 & 0x33333333)) & 0x7070707);
          v14 = (((((v13 >> 8) & 0xF000F) + (v13 & 0xF000F)) >> 16) ^ 0x1F)
              - ((((v13 >> 8) & 0xF000F) + (v13 & 0xF000F)) & 0x1F);
          v15 = *(_DWORD *)(*a1 + 88) + 32 * (v14 + v9);
          v16 = *(int (__fastcall **)(_BYTE *, int, int, unsigned int))v15;
          v17 = FIELD_U32(v15, 20);
          if ( *(_DWORD *)v15 )
          {
            v18 = *(_DWORD *)(*a1 + 88) + 32 * (v14 + v9);
            v19 = a1[11] + FIELD_U16(v15, 18);
            if ( !FIELD_U8(v18, 28) )
              v15 = FIELD_U8(v18, 16);
            qmemcpy((void *)(a2 + v17), v25, (v16(v25, v19, v15, a1[15]) + 3) & 0xFFFFFFFC);
          }
          else
          {
            sub_6086F110(v15, a2 + v17, a1[11] + FIELD_U16(v15, 18));
          }
          v8 ^= 1 << v14;
        }
        while ( v8 );
      }
      result = v20;
      v4 = v23 + 1;
    }
    while ( v23 + 1 != v20 );
  }
  return result;
}
