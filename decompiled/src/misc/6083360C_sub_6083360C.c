/* sub_6083360C
 * address: 0x6083360C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6083360C(int a1, int a2)
{
  int v2; // r5
  int v4; // r6

  v2 = a2 - 4;
  v4 = sub_6090FD94(a1, a2 - 4);
  return v4 == off_60C5CB10(*(_DWORD *)(a1 + v2));
}
