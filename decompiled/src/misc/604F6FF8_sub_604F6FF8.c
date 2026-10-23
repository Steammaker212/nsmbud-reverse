/* sub_604F6FF8
 * address: 0x604F6FF8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604F6FF8(int *a1, int a2, unsigned int a3)
{
  char v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r1
  int v9; // r6
  unsigned int v10; // r1
  char v11; // r0
  int v12; // r1

  v6 = 0;
  v7 = 0;
  v8 = a1[10];
  do
  {
    if ( v8 > 9 )
      break;
    v9 = *a1;
    if ( *(_DWORD *)(*a1 + 3592) != 10 )
    {
      v9 = a1[1];
      if ( FIELD_U32(v9, 3592) != 10 )
      {
        v9 = a1[2];
        if ( FIELD_U32(v9, 3592) != 10 )
        {
          v9 = a1[3];
          if ( FIELD_U32(v9, 3592) != 10 )
          {
            v9 = a1[4];
            if ( FIELD_U32(v9, 3592) != 10 )
            {
              v9 = a1[5];
              if ( FIELD_U32(v9, 3592) != 10 )
              {
                v9 = a1[6];
                if ( FIELD_U32(v9, 3592) != 10 )
                {
                  v9 = a1[7];
                  if ( FIELD_U32(v9, 3592) != 10 )
                  {
                    v9 = a1[8];
                    if ( FIELD_U32(v9, 3592) != 10 )
                    {
                      v9 = a1[9];
                      if ( FIELD_U32(v9, 3592) != 10 )
                        break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v10 = 0;
    v11 = 0;
    if ( v7 < 5 )
      v10 = v7;
    v12 = *(_DWORD *)(a2 + 4 * v10);
    FIELD_U8(v9, 3597) = 1;
    *(_BYTE *)(FIELD_U32(v9, 3584) + 64) &= ~1u;
    FIELD_U32(v9, 3592) = v12;
    if ( v12 != 10 )
    {
      sub_60473DE4((_DWORD *)v9, 0, &dword_60CA6ACC[2 * v12], 0);
      v11 = FIELD_U8(v9, 3597) ^ 1;
    }
    FIELD_U8(v9, 3580) = v11;
    ++v7;
    v8 = a1[10] + 1;
    v6 = 1;
    a1[10] = v8;
  }
  while ( v7 < a3 );
  *((_BYTE *)a1 + 48) = v6 & 1;
  return v7;
}
