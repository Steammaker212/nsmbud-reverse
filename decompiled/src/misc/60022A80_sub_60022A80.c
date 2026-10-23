/* sub_60022A80
 * address: 0x60022A80   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60022A80(int a1, _DWORD *a2, unsigned int a3)
{
  char v3; // r12
  int v5; // r5
  int v6; // r6
  _DWORD *v7; // r0

  v5 = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ( a3 >= 4 )
    a3 = 0;
  v6 = *(_DWORD *)(PlayerMgr_instance + 4 * a3 + 48);
  if ( ((unsigned int)&dword_60C7B374 & ~(1610754756 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) == 1 )
  {
    v7 = (_DWORD *)sub_6075F950(v6);
    v5 = 1;
    *a2 = *v7;
    a2[1] = v7[1];
    a2[2] = v7[2];
    *a2 = FIELD_U32(v6, 108);
    a2[2] = 0;
  }
  return v5;
}
