/* sub_60254138
 * address: 0x60254138   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60254138(_DWORD *a1)
{
  int result; // r0
  int v3; // r0

  result = sub_602563F0();
  if ( result == 1 )
  {
    v3 = a1[5] & 1;
    a1[1639] = v3;
    a1[22] = dword_60AF1F78[v3];
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8E008);
  }
  return result;
}
