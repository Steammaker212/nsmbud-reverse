/* sub_606F5D9C
 * address: 0x606F5D9C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F5D9C(_DWORD *a1)
{
  int v2; // r2
  _DWORD *v3; // r4

  sub_606F5E18();
  v2 = 1631;
  a1[1630] = 0;
  do
  {
    a1[v2] = 0;
    v3 = &a1[v2];
    v2 += 9;
    v3[4] = 0;
    v3[5] = 0x40000000;
  }
  while ( v3 + 9 <= a1 + 1712 );
  (*(void (__fastcall **)(_DWORD *, _DWORD, int, int))(*a1 + 72))(a1, *(_DWORD *)(*a1 + 72), v2 * 4, 0x40000000);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 1722));
  return 1;
}
