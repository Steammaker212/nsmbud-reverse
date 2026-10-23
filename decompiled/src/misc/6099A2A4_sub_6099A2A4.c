/* sub_6099A2A4
 * address: 0x6099A2A4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A2A4(int a1)
{
  return *(unsigned __int8 *)(FIELD_U32(a1, 16) + 8)
       | (*(unsigned __int8 *)(FIELD_U32(a1, 16) + 9) << 8)
       | (*(unsigned __int8 *)(FIELD_U32(a1, 16) + 10) << 16);
}
