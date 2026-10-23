/* sub_60379470
 * address: 0x60379470   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60379470(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r5
  unsigned int v5; // r0

  v3 = dword_60C96478;
  v4 = FIELD_U32(dword_60C96478, 104);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614255256 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C965B0) != 1 )
    return 0;
  v5 = FIELD_U32(v4, 6452);
  if ( v5 >= 2 )
    v5 = 0;
  return (FIELD_U32(v3, 120) & (1 << (*(_BYTE *)(a1 + 8 * v5) - 10))) != 0;
}
