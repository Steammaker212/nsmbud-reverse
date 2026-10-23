/* sub_606809A0
 * address: 0x606809A0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606809A0(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r2

  v1 = a1 + 1873;
  v2 = a1[1873];
  if ( !v2 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB8158);
  *v1 = v2 - 1;
  return v2 - 1;
}
