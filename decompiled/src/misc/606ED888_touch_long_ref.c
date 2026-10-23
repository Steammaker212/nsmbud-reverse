/* touch_long_ref
 * address: 0x606ED888   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int touch_long_ref()
{
  dword_60CBC0A8 = (int)&sead__SafeStringBase__vtable;
  dword_60CBC0AC = (int)"touch";
  dword_60CBC0B0 = (int)&sead__SafeStringBase__vtable;
  dword_60CBC0B4 = (int)"touch_long";
  return sub_60000288();
}
