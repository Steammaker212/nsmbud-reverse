/* ParaGoomba__vf284
 * address: 0x60363E6C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CDB0
// 
// Overridden by: None
int __fastcall ParaGoomba__vf284(int result)
{
  FIELD_U32(result, 120) = *((_DWORD *)*(&off_60BEFC84 + FIELD_U8(result, 6843))
                              + FIELD_U32(result, 80));
  return result;
}
