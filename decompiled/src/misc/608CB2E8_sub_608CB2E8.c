/* sub_608CB2E8
 * address: 0x608CB2E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB2E8(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r5

  v1 = a1 + 4;
  result = FIELD_U32(a1, 8);
  if ( result != v1 )
  {
    do
    {
      v3 = FIELD_U32(result, 4);
      if ( !*(_DWORD *)(result - 8) )
        sub_608C9414(result - 560);
      result = v3;
    }
    while ( v3 != v1 );
  }
  return result;
}
