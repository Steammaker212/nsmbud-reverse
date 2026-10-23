/* sub_60851AC4
 * address: 0x60851AC4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60851AC4(int a1, int a2, int a3)
{
  int v5; // r10
  int result; // r0
  int v7; // r6
  int v8; // r1
  int v9; // r7
  int v10; // r8
  float v11; // s16
  int v12; // r4
  int v13; // r1
  unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // r0
  int v16; // [sp+0h] [bp-38h]

  if ( FIELD_U8(a3, 29) == 2 )
    v5 = a3 + FIELD_U32(a3, 32);
  else
    v5 = a3 + 32;
  result = FIELD_U8(a3, 28);
  if ( FIELD_U8(a3, 28) )
  {
    v7 = 0;
    v16 = a3 + 8;
    do
    {
      v8 = *(_DWORD *)(v5 + 4 * v7);
      v9 = a3 + v8;
      if ( *(_BYTE *)(a3 + v8 + 4) )
      {
        v10 = 0;
        v11 = FIELD_F32(a1, 16);
        v12 = v16 + v8;
        do
        {
          v13 = FIELD_U8(a2, 10);
          v14 = (unsigned __int8 *)(v9 + *(_DWORD *)(v12 + 4 * v10));
          v15 = &v14[*((_DWORD *)v14 + 2)];
          if ( v13 == 2 )
          {
            *(float *)(a2 + FIELD_U32(a2, 4) + 4 * *v14) = sub_6085F6A0(v15, *((unsigned __int16 *)v14 + 2), v11);
          }
          else if ( v13 == 1 )
          {
            *(_DWORD *)(a2 + FIELD_U32(a2, 4) + 4 * *v14) = (int)sub_6085F6A0(
                                                                      v15,
                                                                      *((unsigned __int16 *)v14 + 2),
                                                                      v11);
          }
          ++v10;
        }
        while ( v10 < FIELD_U8(v9, 4) );
        result = FIELD_U8(a3, 28);
      }
      ++v7;
    }
    while ( v7 < (unsigned __int8)result );
  }
  return result;
}
