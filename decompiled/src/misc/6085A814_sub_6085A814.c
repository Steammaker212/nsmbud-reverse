/* sub_6085A814
 * address: 0x6085A814   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085A814(int a1, int a2)
{
  return *(unsigned __int8 *)(a1 + ((a2 + ((unsigned int)(a2 >> 31) >> 30)) & 0xFFFFFFFC) + a2 % 4 + 176);
}
