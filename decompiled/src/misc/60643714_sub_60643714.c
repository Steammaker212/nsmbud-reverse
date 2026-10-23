/* sub_60643714
 * address: 0x60643714   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60643714(int a1)
{
  StateMgr *v2; // r5

  v2 = (StateMgr *)(a1 + 6084);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  StateMgr__execute(v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
  return 1;
}
