/* sub_609436F8
 * address: 0x609436F8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609436F8(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int result; // r0
  _BYTE *v7; // r4
  _BYTE *v8; // r5
  int v9; // r2
  int v10; // r2
  char v11; // r1

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 28))(a2) == 20 )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 8))(v5, v4);
  }
  else
  {
    v7 = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v8 = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
    if ( result >= 1 )
    {
      if ( (result & 3) != 0 )
      {
        v9 = 0;
        do
        {
          v7[-v9] = v8[-v9];
          --v9;
        }
        while ( -(result & 3) != v9 );
        v8 -= v9;
        v7 -= v9;
        v10 = -v9;
      }
      else
      {
        v10 = 0;
      }
      if ( (unsigned int)(result - 1) >= 3 )
      {
        result -= v10;
        do
        {
          result -= 4;
          *v7 = *v8;
          v7[1] = v8[1];
          v7[2] = v8[2];
          v11 = v8[3];
          v8 += 4;
          v7[3] = v11;
          v7 += 4;
        }
        while ( result );
      }
    }
  }
  return result;
}
