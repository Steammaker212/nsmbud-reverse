/* sub_607D416C
 * address: 0x607D416C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D416C(_DWORD *a1)
{
  sub_607700D0(a1);
  a1[309] |= 0x1000000u;
  a1[2874] = 0;
  a1[1725] &= ~1u;
  ((void (__fastcall *)(_DWORD *))loc_6076438C)(a1);
  sub_607712D4((int)a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1104))(a1);
  JUMPOUT(0x60771910);
}
