/* sub_6086DA64
 * address: 0x6086DA64   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086DA64(int result, float a2, float a3)
{
  int v3; // r5
  unsigned __int16 v4; // r1
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // t1

  v3 = result;
  v4 = FIELD_U16(result, 24);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = FIELD_U32(v3, 32);
      v9 = *(_DWORD *)(v7 + v5);
      v8 = v7 + v5;
      if ( (!FIELD_U8(v9, 102) || FIELD_U8(v3, 68)) && !*(_BYTE *)(FIELD_U32(v3, 32) + v5 + 9) )
      {
        sub_60875E64(v8, 0, a2, a3);
        v4 = FIELD_U16(v3, 24);
      }
      ++v6;
      result = v4;
      v5 += 56;
    }
    while ( v6 < v4 );
  }
  return result;
}
