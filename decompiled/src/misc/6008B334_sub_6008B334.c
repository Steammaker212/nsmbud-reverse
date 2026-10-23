/* sub_6008B334
 * address: 0x6008B334   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B334(_DWORD *a1, int a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    a1[1910] = FIELD_U32(a2, 80) ^ 1;
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C81A48);
  }
  return result;
}
