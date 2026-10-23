/* sub_607ED0EC
 * address: 0x607ED0EC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ED0EC(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r4

  FIELD_U8(result, 63176) = 1;
  v1 = dword_60CA146C;
  FIELD_U32(result, 50036) = 0;
  FIELD_U32(result, 50032) = 0;
  FIELD_U32(result, 50028) = 0;
  v2 = 61;
  FIELD_U32(result, 50024) = 0;
  v3 = v1 + 95256;
  do
  {
    if ( FIELD_U8(v3, 2689) )
    {
      v4 = FIELD_U32(v3, 2540);
      if ( v4 >= 7 )
        v4 = 0;
      *(_DWORD *)(result + 4 * v4 + 50024) = v3;
    }
    v3 += 2988;
    --v2;
  }
  while ( v2 );
  return result;
}
