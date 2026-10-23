/* sub_603D026C
 * address: 0x603D026C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D026C(_DWORD *a1)
{
  int v1; // r1

  v1 = a1[5];
  a1[164] = v1 & 0xF;
  a1[163] = 60 * ((unsigned __int8)v1 >> 4);
  return 1;
}
