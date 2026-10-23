/* sub_607E34A8
 * address: 0x607E34A8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E34A8(int a1, _DWORD *a2)
{
  if ( !*a2 && AreaTask_intance )
    FIELD_U8(AreaTask_intance, 193) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 116))(a1);
}
