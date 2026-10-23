/* sub_60849C18
 * address: 0x60849C18   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60849C18(int a1)
{
  return (float)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 40) + 16))(FIELD_U32(a1, 40))
       * FIELD_F32(a1, 12);
}
