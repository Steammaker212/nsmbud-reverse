/* sub_6095E968
 * address: 0x6095E968   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095E968(int result, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r1
  char v6; // r2

  v4 = FIELD_U32(result, 456);
  if ( v4 < 1 )
    return 0;
  v5 = FIELD_U32(result, 456) & 1;
  if ( (v4 & 1) != 0 )
    result = (a4 & 1) == 0;
  if ( v4 != 1 )
  {
    result = (unsigned __int8)v4 & (unsigned __int8)~(_BYTE)a4 & 1;
    do
    {
      v6 = v5 + 1;
      if ( (a4 & (1 << v5)) == 0 )
        result |= 1 << v5;
      v5 += 2;
      if ( (a4 & (1 << v6)) == 0 )
        result |= 1 << v6;
    }
    while ( v5 < v4 );
  }
  return result;
}
