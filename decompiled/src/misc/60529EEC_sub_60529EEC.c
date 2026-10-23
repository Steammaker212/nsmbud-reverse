/* sub_60529EEC
 * address: 0x60529EEC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60529EEC(int a1)
{
  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 60) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 60) + 4),
    187,
    1.0,
    0.0,
    0.0);
  FIELD_U32(a1, 3060) = 2;
  return 2;
}
