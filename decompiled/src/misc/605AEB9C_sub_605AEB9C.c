/* sub_605AEB9C
 * address: 0x605AEB9C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AEB9C(int a1, int a2)
{
  char v2; // r12
  _DWORD *v3; // r4
  int v4; // r0

  v3 = *(_DWORD **)(a2 + 64);
  if ( ((unsigned int)&dword_60CB02B4 & ~(1616571316 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02B4) )
  {
    dword_60CB02B0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB02B4);
  }
  if ( v3 && (*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &dword_60CB02B0) == 1 )
  {
    v4 = v3[1684];
    v3[1685] = v4;
    v3[1686] = abs32(v4 / 25);
    (*(void (__fastcall **)(_DWORD *))(*v3 + 236))(v3);
  }
  return 1;
}
