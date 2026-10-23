/* sub_608A9A9C
 * address: 0x608A9A9C   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9A9C(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // t1
  int v8; // r1

  v2 = *(_DWORD *)(FIELD_U32(a1, 4) + 60);
  result = -1;
  if ( (a2 & 0xFF000000) == 0x1000000 )
  {
    v4 = FIELD_U32(v2, 4);
    v5 = a2 & 0xFFFFFF;
    v7 = *(_DWORD *)(v2 + v4);
    v6 = v2 + v4;
    if ( v5 < v7 )
    {
      v8 = v6 + *(_DWORD *)(v6 + 8 * v5 + 8);
      if ( v8 )
      {
        if ( FIELD_U16(v8, 12) == 8705 )
          return *(_DWORD *)(v8 + FIELD_U32(v8, 16) + 32);
      }
    }
  }
  return result;
}
