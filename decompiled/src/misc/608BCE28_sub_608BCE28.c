/* sub_608BCE28
 * address: 0x608BCE28   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608BCE28(int a1)
{
  return *(_DWORD *)a1 == 1297371974
      && FIELD_U16(a1, 4) == 65279
      && (unsigned int)(FIELD_U32(a1, 8) - 0x10000) < 0x50101;
}
