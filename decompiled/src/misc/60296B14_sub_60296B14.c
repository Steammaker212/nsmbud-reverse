/* sub_60296B14
 * address: 0x60296B14   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60296B14(_DWORD *a1)
{
  int v1; // r2

  v1 = a1[1666];
  if ( v1 )
    a1[1666] = v1 - 1;
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8FD34);
}
