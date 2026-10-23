/* sub_60712434
 * address: 0x60712434   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60712434(int a1)
{
  int v2; // r1
  int result; // r0

  ((void (__fastcall *)(int, _DWORD))loc_60712498)(a1 + 16280, 0);
  v2 = 40;
  result = a1 + 14568;
  do
  {
    if ( FIELD_U8(result, 17) )
    {
      --FIELD_U8(result, 17);
    }
    else
    {
      FIELD_U8(result, 16) = 0;
      *(_DWORD *)result = 0;
      FIELD_U32(result, 4) = 0;
      FIELD_U32(result, 8) = 0;
      FIELD_U32(result, 12) = 0;
    }
    --v2;
    result += 20;
  }
  while ( v2 );
  return result;
}
