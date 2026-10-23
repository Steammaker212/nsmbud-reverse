/* sub_608611C8
 * address: 0x608611C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608611C8(int a1, int a2)
{
  return *(unsigned __int8 *)(a1 + 4 * a2 + 188)
       | (*(unsigned __int8 *)(a1 + 4 * a2 + 189) << 8)
       | ((*(unsigned __int8 *)(a1 + 4 * a2 + 190) | (*(unsigned __int8 *)(a1 + 4 * a2 + 191) << 8)) << 16);
}
