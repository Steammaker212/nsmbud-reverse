/* sub_6099A218
 * address: 0x6099A218   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A218(int a1)
{
  return *(__int16 *)(FIELD_U32(a1, 12) + *(_DWORD *)(FIELD_U32(a1, 16) + 12) + 8);
}
