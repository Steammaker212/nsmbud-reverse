/* sub_60766714
 * address: 0x60766714   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60766714(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1) == 1
      && (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 640))(a1, 4) != 1;
}
