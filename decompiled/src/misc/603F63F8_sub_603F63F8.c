/* sub_603F63F8
 * address: 0x603F63F8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F63F8(int a1)
{
  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 4) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 4) + 4),
    186,
    1.0,
    0.0,
    0.0);
  FIELD_U8(a1, 424) = 1;
  return 1;
}
