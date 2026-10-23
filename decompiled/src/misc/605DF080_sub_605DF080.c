/* sub_605DF080
 * address: 0x605DF080   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DF080(_DWORD *a1)
{
  int result; // r0

  a1[1566] |= 0x8000u;
  result = a1[2005];
  if ( result == 1 )
  {
    sub_605EB5F8(a1 + 1516);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 440))(a1);
  }
  else if ( result == 2 )
  {
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 436))(a1);
  }
  return result;
}
