/* sub_608CB474
 * address: 0x608CB474   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB474(int a1, __int16 a2)
{
  int v2; // r12
  int result; // r0
  int v4; // r3

  v2 = a1 + 4;
  result = FIELD_U32(a1, 8);
  if ( result != v2 )
  {
    do
    {
      v4 = FIELD_U32(result, 4);
      if ( *(_BYTE *)(result - 148) )
        *(_WORD *)(result - 136) |= a2;
      result = v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
