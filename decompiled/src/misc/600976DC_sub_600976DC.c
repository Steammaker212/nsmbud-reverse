/* sub_600976DC
 * address: 0x600976DC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600976DC(_DWORD *a1, _DWORD *a2)
{
  a1[27] = *a2;
  a1[28] = a2[1];
  a1[29] = a2[2];
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 216))(a1);
}
