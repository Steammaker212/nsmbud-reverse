/* sub_6086ABA0
 * address: 0x6086ABA0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086ABA0(int result, int a2)
{
  int v2; // r11
  int v4; // r10
  int v5; // r12
  int v6; // r7
  int v7; // r2
  int v8; // r3
  char v9; // r2
  unsigned int v10; // r6
  int v11; // r5
  int v12; // r3
  int (__fastcall *v13)(int); // r2
  _BOOL4 v14; // r3
  int v15; // r4

  v2 = result;
  v4 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v5 = FIELD_U32(result, 48);
    v6 = 0;
    do
    {
      result = FIELD_U32(v2, 56);
      v7 = *(_DWORD *)(result + 4 * v6);
      if ( v7 >= 0 )
      {
        v8 = FIELD_U32(a2, 4);
        v9 = v7 & 0x1F;
        v10 = ((*(_DWORD *)(result + 4 * v6) & 0x7FFFu) >> 5) & 0x3FF;
        result = (*(_DWORD *)(v5 + 4 * (v6 >> 5)) & (1 << (v6 & 0x1F))) != 0;
        v11 = *(_DWORD *)(v8 + 4 * v10);
        *(_DWORD *)(v8 + 4 * v10) = v11 & ~(1 << v9) | (result << v9);
        v12 = v11 & (1 << v9);
        v13 = *(int (__fastcall **)(int))(a2 + 60);
        v14 = v12 != 0;
        if ( v13 )
        {
          result ^= v14;
          if ( result == 1 )
          {
            v15 = v5;
            result = v13(a2);
            v5 = v15;
          }
        }
      }
      ++v6;
    }
    while ( v4 != v6 );
  }
  return result;
}
