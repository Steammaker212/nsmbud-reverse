/* sub_60465D70
 * address: 0x60465D70   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60465D70(int a1, unsigned int a2)
{
  char v2; // r12
  int v3; // r4
  unsigned int v4; // r0

  if ( a2 >= 4 )
    a2 = 0;
  v3 = *(_DWORD *)(PlayerMgr_instance + 4 * a2 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1615224224 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1
    && (v4 = FIELD_U32(v3, 1320) - 1, v4 <= 8) )
  {
    return (0x1FBu >> v4) & 1;
  }
  else
  {
    return 0;
  }
}
