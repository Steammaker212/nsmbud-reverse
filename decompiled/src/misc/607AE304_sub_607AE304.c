/* sub_607AE304
 * address: 0x607AE304   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE304(_BYTE *a1, int a2)
{
  int result; // r0

  result = 0;
  if ( (FIELD_U8(a2, 1225) & 0x20) != 0 && (a1[6900] & 1) == 0 )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1064))(a1) ^ 1;
  return result;
}
