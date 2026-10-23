/* sub_601C77CC
 * address: 0x601C77CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C77CC(_DWORD *a1)
{
  int result; // r0

  result = sub_601860F8((int)a1);
  if ( result == 1 )
  {
    sub_601C6044((int)a1, a1 + 258);
    (*(void (__fastcall **)(_DWORD *, int, int, float))(*a1 + 336))(a1, 18, -1, 0.0);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  }
  return result;
}
