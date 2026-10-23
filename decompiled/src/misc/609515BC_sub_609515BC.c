/* sub_609515BC
 * address: 0x609515BC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609515BC(int *a1, int a2)
{
  int v2; // r12
  int result; // r0
  unsigned int v4; // r3
  int v5; // lr
  signed int v6; // r12
  int v7; // r3

  v2 = *a1;
  result = -1;
  v4 = FIELD_U32(v2, 4);
  if ( v4 >= 0x10000 )
  {
    v5 = v2 + ((4 * v4) & 0x3FFFC);
    v6 = HIWORD(v4);
    v7 = 0;
    while ( *(_DWORD *)(v5 + 8 * v7) != a2 )
    {
      if ( ++v7 >= v6 )
        return result;
    }
    return v7;
  }
  return result;
}
