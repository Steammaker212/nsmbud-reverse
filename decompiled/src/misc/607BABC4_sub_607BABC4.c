/* sub_607BABC4
 * address: 0x607BABC4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BABC4(int a1, float a2, float a3, float a4, float a5)
{
  FIELD_U32(a1, 15028) = 1;
  return (*(int (__fastcall **)(_DWORD, int, float, float, float, float, float))(**(_DWORD **)(a1 + 11360) + 84))(
           FIELD_U32(a1, 11360),
           214,
           1.0113,
           a3,
           a2 + 1.0113,
           a5,
           1.0113);
}
