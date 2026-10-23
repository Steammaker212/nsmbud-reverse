/* sub_60822B68
 * address: 0x60822B68   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60822B68(_DWORD *a1)
{
  *a1 = off_60C2A5D0;
  FIELD_U32(ArchiveManagerMaybe_instance, 16) = 0;
  return sead__IDisposer__dtor(a1);
}
