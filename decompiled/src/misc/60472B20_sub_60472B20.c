/* sub_60472B20
 * address: 0x60472B20   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60472B20(_DWORD *a1, float a2, float a3)
{
  int v4; // r6
  int v5; // r9
  int v6; // r0
  int v7; // r1
  int v8; // r8
  float v9; // s2
  unsigned int v10; // r1
  float v11; // s16
  float v12; // s0
  int v13; // r6
  bool v14; // cc
  int v15; // r7
  int v16; // r4
  int v17; // r1
  int v18; // r7

  v4 = 1;
  v5 = a1[824];
  if ( v5 )
  {
    v6 = a1[823];
    if ( v6 >= 1 )
    {
      if ( v6 == 1 )
      {
        (*(void (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 20))(a1, 0, v5);
        return v4;
      }
      v7 = FIELD_U32(v5, 76);
      if ( v7 < 1 )
      {
        v10 = FIELD_U32(v5, 80);
        v11 = 1.0;
        v8 = v6 - 1;
      }
      else
      {
        v8 = 0;
        v9 = (float)v7;
        v10 = FIELD_U32(v5, 80);
        v11 = a2 / v9;
        if ( v10 <= 3 )
        {
          v12 = 1.0 / (float)(v6 - 1);
          v8 = (int)(float)((float)(a3 / v9) / v12);
          v13 = (int)(float)(v11 / v12);
          goto LABEL_10;
        }
      }
      v13 = 0;
LABEL_10:
      switch ( v10 )
      {
        case 0u:
          v14 = v13 <= v8;
          if ( v13 <= v8 )
            v14 = v13 <= v6;
          for ( ; v14; v14 = v13++ < a1[823] )
          {
            (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v13, v5);
            if ( v13 >= v8 )
              break;
          }
          return v11 >= 1.0;
        case 1u:
          if ( v13 <= v8 && v6 >= v13 )
          {
            v18 = ~v13;
            do
            {
              (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v6 + v18, v5);
              if ( v13 >= v8 )
                break;
              v6 = a1[823];
              --v18;
              v14 = v6 <= v13++;
            }
            while ( !v14 );
          }
          return v11 >= 1.0;
        case 2u:
          if ( v13 > v8 )
            return v11 >= 1.0;
          break;
        case 3u:
          if ( v13 <= v8 )
          {
            do
            {
              (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v13 / 2, v5);
              (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, a1[823] + ~(v13 / 2), v5);
              v14 = v13++ < v8;
            }
            while ( v14 );
          }
          return v11 >= 1.0;
        default:
          return v11 >= 1.0;
      }
      while ( 1 )
      {
        v15 = v6 + ((unsigned int)v6 >> 31);
        if ( v6 % 2 == 1 )
        {
          v16 = (v6 - 1) / 2;
          (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v16 - v13 / 2, v5);
          v17 = v16 + v13 / 2;
        }
        else
        {
          if ( !v13 )
            goto LABEL_26;
          (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, ~((v13 - 1) / 2) + v6 / 2, v5);
          v17 = (v15 >> 1) + (v13 - 1) / 2;
        }
        (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 20))(a1, v17, v5);
LABEL_26:
        if ( v13 >= v8 )
          return v11 >= 1.0;
        v6 = a1[823];
        ++v13;
      }
    }
  }
  return v4;
}
