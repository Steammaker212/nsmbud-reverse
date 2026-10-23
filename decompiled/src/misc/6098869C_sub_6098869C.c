/* sub_6098869C
 * address: 0x6098869C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098869C(int a1, int a2, int a3, int *a4, int a5, unsigned int a6, const void *a7, int a8)
{
  int result; // r0

  if ( FIELD_U16(a2, 4) == 7 )
    return (*(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)a1 + 56))(a1, a2, a3, a4);
  result = *a4;
  if ( *a4 + a8 < a6 )
  {
    qmemcpy((void *)(a3 + 2 * result), a7, 2 * a8);
    result = *a4 + a8;
    *a4 = result;
  }
  return result;
}
