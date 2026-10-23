/* sub_608714EC
 * address: 0x608714EC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608714EC(int a1, int a2)
{
  return (unsigned int)(FIELD_U32(a1, 32) & *(_DWORD *)(a2 + 4 * FIELD_U8(a1, 30))) >> FIELD_U8(a1, 31);
}
