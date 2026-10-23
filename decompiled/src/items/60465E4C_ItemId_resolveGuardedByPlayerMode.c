/* ItemId_resolveGuardedByPlayerMode
 * address: 0x60465E4C   size: 484   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ItemId_resolveGuardedByPlayerMode(int a1, unsigned int a2, unsigned int a3, int a4)
{
  char v4; // r12
  int v7; // r6
  unsigned int v8; // r0

  if ( a4 == 1 )
    return dword_60B0267C[a2];
  if ( a3 == 15 )
    return 0;
  if ( a2 > 0x19 || ((1 << a2) & 0x24004E0) == 0 )
    return dword_60B0267C[a2];
  if ( a3 >= 4 )
    a3 = 0;
  v7 = *(_DWORD *)(PlayerMgr_instance + 4 * a3 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1615224520 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7
    && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1
    && (v8 = FIELD_U32(v7, 1320) - 1, v8 <= 8)
    && ((0x1FBu >> v8) & 1) != 0 )
  {
    return dword_60B0267C[a2];
  }
  else
  {
    return 0;
  }
}
