/* sub_60466EC8
 * address: 0x60466EC8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60466EC8(int a1)
{
  FIELD_U32(a1, 6192) = 1;
  FIELD_U8(a1, 6196) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 332))(a1);
}
