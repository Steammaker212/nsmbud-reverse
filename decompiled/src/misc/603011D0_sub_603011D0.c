/* sub_603011D0
 * address: 0x603011D0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603011D0(int a1, int a2, int a3)
{
  if ( !FIELD_U8(a1, 8480) )
    (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a3 + 64) + 1168))(FIELD_U32(a3, 64), a1, 4);
  return 1;
}
