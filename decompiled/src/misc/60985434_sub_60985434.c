/* sub_60985434
 * address: 0x60985434   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60985434(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD, int))(*(_DWORD *)a1 + 160))(
           a1,
           *(_DWORD *)a2,
           FIELD_U16(a2, 4),
           0,
           -1,
           0,
           a3);
}
