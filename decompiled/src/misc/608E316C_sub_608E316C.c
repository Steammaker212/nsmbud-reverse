/* sub_608E316C
 * address: 0x608E316C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E316C(int a1, int a2)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)sub_608E78F8(a1, a2);
  nn__fs__CloseDirectory(*v2);
  return 1;
}
