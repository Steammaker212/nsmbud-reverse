/* sub_60870390
 * address: 0x60870390   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870390(int result, int a2, int a3, float a4)
{
  int v5; // r10
  int v6; // r5
  int v7; // r11
  int v8; // r0
  int v9; // r4
  int v10; // r9
  int v11; // r11
  int v12; // r5
  int v13; // r0
  int v14; // r3
  int v15; // r7
  _DWORD *v16; // r10
  float *v17; // r4
  int v19; // [sp+8h] [bp-50h]
  int v20; // [sp+Ch] [bp-4Ch]
  int v21; // [sp+10h] [bp-48h]
  int v23; // [sp+18h] [bp-40h]
  _DWORD v24[15]; // [sp+1Ch] [bp-3Ch] BYREF

  v5 = a3;
  v23 = FIELD_U16(result, 50);
  if ( FIELD_U16(result, 50) )
  {
    v6 = 0;
    v19 = FIELD_U32(result, 24);
    v7 = FIELD_U32(result, 8);
    do
    {
      if ( *(unsigned __int16 *)(v5 + 2 * v6) != 0xFFFF )
      {
        v8 = v7;
        v9 = v6;
        v10 = FIELD_U16(v7, 10);
        v11 = FIELD_U16(v7, 12);
        v12 = v8;
        v13 = FIELD_U16(v8, 8);
        v14 = v11 + v13;
        v15 = v19 + 48 * v13;
        if ( v11 )
        {
          v21 = v11 + v13;
          v16 = (_DWORD *)(a2 + 4 * v13);
          v20 = v19 + 48 * v14;
          do
          {
            v24[0] = 2139095040;
            *v16++ = ((int (__fastcall *)(int, _DWORD *, float))loc_6086E97C)(v15, v24, a4);
            --v11;
            v15 += 48;
          }
          while ( v11 );
          v15 = v20;
          v5 = a3;
          v14 = v21;
        }
        v7 = v12;
        v6 = v9;
        if ( v10 )
        {
          v17 = (float *)(a2 + 4 * v14);
          do
          {
            v24[0] = 2139095040;
            *v17 = ((float (__fastcall *)(int, _DWORD *, float))loc_6086E838)(v15, v24, a4);
            --v10;
            v15 += 48;
            ++v17;
          }
          while ( v10 );
        }
      }
      result = v23;
      ++v6;
      v7 += 24;
    }
    while ( v6 != v23 );
  }
  return result;
}
