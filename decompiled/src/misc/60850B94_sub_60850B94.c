/* sub_60850B94
 * address: 0x60850B94   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60850B94(int a1, int a2, int a3)
{
  int v5; // r10
  unsigned int result; // r0
  int v7; // r11
  unsigned __int16 v8; // r8
  int v9; // r7
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r6
  unsigned int i; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // [sp+4h] [bp-2Ch]

  v5 = FIELD_U32(a1, 12);
  result = FIELD_U16(v5, 14);
  if ( FIELD_U16(v5, 14) )
  {
    v7 = a3 + 136;
    v8 = 0;
    v22 = v5 + FIELD_U32(v5, 16);
    do
    {
      v9 = v5 + *(_DWORD *)(v22 + 4 * v8);
      v10 = FIELD_U8(v9, 29);
      if ( FIELD_U8(v9, 29) )
      {
        if ( v10 == 1 )
        {
          v16 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 40))(a3);
          if ( v16 )
          {
            for ( i = 0; i < v16; ++i )
            {
              v18 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a3 + 44))(a3, i);
              if ( v18 )
              {
                v19 = FIELD_U32(v18, 28);
                v20 = 0;
                while ( *(unsigned __int8 *)(v19 + v20) == *(unsigned __int8 *)(v9 + v20) )
                {
                  if ( *(_BYTE *)(v19 + v20) )
                  {
                    if ( ++v20 < 28 )
                      continue;
                  }
                  v21 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a2 + 44))(a2, i);
                  if ( v21 )
                  {
                    result = sub_60850658(a1, v21, v9);
                    if ( result != 1 )
                      return result;
                  }
                  break;
                }
              }
            }
          }
        }
        else if ( v10 == 2 )
        {
          v11 = 0;
          while ( *(unsigned __int8 *)(v7 + v11) == *(unsigned __int8 *)(v9 + v11) )
          {
            if ( *(_BYTE *)(v7 + v11) )
            {
              if ( ++v11 < 24 )
                continue;
            }
            if ( a2 )
            {
              result = sub_6085982C(a2, v9 + FIELD_U32(v9, 36) + *(_DWORD *)(v9 + FIELD_U32(v9, 36)));
              if ( result )
              {
                v12 = FIELD_U16(a1, 32);
                if ( v12 >= FIELD_U16(a1, 34) )
                  return result;
                v13 = FIELD_U32(a1, 28);
                FIELD_U16(a1, 32) = v12 + 1;
                *(_DWORD *)(v13 + 8 * v12) = result;
                *(_DWORD *)(v13 + 8 * v12 + 4) = v9;
              }
            }
            break;
          }
        }
      }
      else
      {
        v14 = 0;
        while ( *(unsigned __int8 *)(v7 + v14) == *(unsigned __int8 *)(v9 + v14) )
        {
          if ( *(_BYTE *)(v7 + v14) )
          {
            if ( ++v14 < 24 )
              continue;
          }
          result = FIELD_U16(a1, 32);
          if ( result >= FIELD_U16(a1, 34) )
            return result;
          v15 = FIELD_U32(a1, 28);
          FIELD_U16(a1, 32) = result + 1;
          *(_DWORD *)(v15 + 8 * result) = a2;
          *(_DWORD *)(v15 + 8 * result + 4) = v9;
          break;
        }
      }
      result = FIELD_U16(v5, 14);
      ++v8;
    }
    while ( v8 < result );
  }
  return result;
}
