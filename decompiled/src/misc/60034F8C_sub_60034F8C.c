/* sub_60034F8C
 * address: 0x60034F8C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60034F8C(int a1)
{
  sub_60037BB0(a1, 2, 0, 0.0, 1.0);
  return (*(int (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 7624) + 192))(
           FIELD_U32(a1, 7624),
           &dword_60C80168);
}
