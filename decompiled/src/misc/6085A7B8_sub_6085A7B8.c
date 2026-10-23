/* sub_6085A7B8
 * address: 0x6085A7B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085A7B8(int a1, int a2)
{
  return *(unsigned __int8 *)(a1 + 4 * a2 + 176)
       | (*(unsigned __int8 *)(a1 + 4 * a2 + 177) << 8)
       | ((*(unsigned __int8 *)(a1 + 4 * a2 + 178) | (*(unsigned __int8 *)(a1 + 4 * a2 + 179) << 8)) << 16);
}
