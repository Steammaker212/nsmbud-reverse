/* sub_60299A1C
 * address: 0x60299A1C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299A1C(int a1)
{
  void *v1; // r4

  v1 = (void *)(a1 + 6676);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 740))(a1, 0.0);
  return memset(v1, 0, 36);
}
