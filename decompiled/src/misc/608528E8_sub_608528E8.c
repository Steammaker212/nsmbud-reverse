/* sub_608528E8
 * address: 0x608528E8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608528E8(_DWORD *a1)
{
  int result; // r0
  int i; // r5

  result = a1[13];
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 60))(a1, *(_DWORD *)(a1[12] + 4 * i));
      result = a1[13];
    }
  }
  return result;
}
