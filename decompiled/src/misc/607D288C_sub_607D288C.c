/* sub_607D288C
 * address: 0x607D288C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607D288C(int a1)
{
  if ( FIELD_U32(a1, 0x28C) == 1 )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 0x284) + 8))(FIELD_U32(a1, 0x284));
  return 1;
}
