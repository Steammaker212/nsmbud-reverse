/* sub_6078F2F0
 * address: 0x6078F2F0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F2F0(_DWORD *a1, int a2)
{
  int result; // r0

  result = a1[43];
  if ( result != a2 )
  {
    a1[43] = a2;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 216))(a1);
    result = a1[43];
    if ( !result )
    {
      a1[44] = 0;
      return 0;
    }
  }
  return result;
}
