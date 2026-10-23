/* sub_60991358
 * address: 0x60991358   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991358(_WORD *a1)
{
  a1[15] = a1[15] & 0xE7BF | 0x1000;
  return (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 20))(a1);
}
