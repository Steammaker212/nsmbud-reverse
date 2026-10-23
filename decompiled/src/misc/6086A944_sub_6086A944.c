/* sub_6086A944
 * address: 0x6086A944   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086A944(int a1)
{
  qmemcpy(
    *(void **)(a1 + 48),
    *(const void **)(FIELD_U32(a1, 68) + 56),
    (((unsigned int)FIELD_U16(a1, 64) + 31) >> 3) & 0x3FFC);
}
