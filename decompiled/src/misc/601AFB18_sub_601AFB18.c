/* sub_601AFB18
 * address: 0x601AFB18   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AFB18(_DWORD *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 156))(a1);
  if ( result == 1 )
    return sub_601B126C(dword_60C8A8C0, a1[88]);
  return result;
}
