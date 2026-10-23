/* sub_60851EA0
 * address: 0x60851EA0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60851EA0(int a1, int a2, _DWORD *a3)
{
  int v4; // r8
  unsigned int v5; // r3
  int v6; // r10
  int v7; // r7
  int v8; // r11
  __int16 v9; // r10
  int i; // r5
  int v11; // r0
  int v12; // r2
  int v13; // r0
  unsigned int v14; // r6
  int v15; // r4
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // [sp+4h] [bp-54h]
  _DWORD v22[18]; // [sp+10h] [bp-48h] BYREF

  v4 = a3[1];
  if ( FIELD_U16(v4, 14) )
  {
    v5 = 0;
    do
    {
      v6 = v4 + *(_DWORD *)(v4 + FIELD_U32(v4, 16) + 4 * v5);
      if ( !FIELD_U8(v6, 29) )
      {
        v7 = 0;
        while ( *(unsigned __int8 *)(v6 + v7) == *(unsigned __int8 *)(a2 + 136 + v7) )
        {
          if ( *(_BYTE *)(v6 + v7) )
          {
            if ( ++v7 < 28 )
              continue;
          }
          goto LABEL_11;
        }
      }
      ++v5;
    }
    while ( v5 < FIELD_U16(v4, 14) );
  }
  v6 = 0;
LABEL_11:
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
  v19 = v6;
  v9 = v6 != 0;
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 44))(a2, i);
      v12 = 0;
      if ( FIELD_U16(v4, 14) )
      {
        v13 = FIELD_U32(v11, 28);
        v14 = 0;
        do
        {
          v12 = v4 + *(_DWORD *)(v4 + FIELD_U32(v4, 16) + 4 * v14);
          if ( FIELD_U8(v12, 29) == 1 )
          {
            v15 = 0;
            while ( *(unsigned __int8 *)(v12 + v15) == *(unsigned __int8 *)(v13 + v15) )
            {
              if ( *(_BYTE *)(v12 + v15) )
              {
                if ( ++v15 < 28 )
                  continue;
              }
              goto LABEL_23;
            }
          }
          ++v14;
        }
        while ( v14 < FIELD_U16(v4, 14) );
        v12 = 0;
      }
LABEL_23:
      v22[i] = v12;
      if ( v12 )
        ++v9;
    }
  }
  if ( v9 )
  {
    v16 = a3[1];
    v17 = a3[2];
    v18 = a3[3];
    *(_DWORD *)a1 = *a3;
    FIELD_U32(a1, 4) = v16;
    FIELD_U32(a1, 8) = v17;
    FIELD_U32(a1, 12) = v18;
    FIELD_U32(a1, 16) = v19;
    FIELD_U8(a1, 58) = v8;
    if ( v8 )
      qmemcpy((void *)(a1 + 20), v22, 4 * (unsigned __int8)(v8 - 1) + 4);
    FIELD_U16(a1, 56) = v9;
  }
}
