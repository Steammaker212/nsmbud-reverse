/* sub_608CF51C
 * address: 0x608CF51C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608CF51C(int a1, void *a2, size_t a3)
{
  if ( (FIELD_U8(a1, 28) & 2) != 0 )
    memset(a2, (unsigned __int8)byte_60C5B590, a3);
}
