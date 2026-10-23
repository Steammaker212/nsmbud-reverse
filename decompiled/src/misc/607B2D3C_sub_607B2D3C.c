/* sub_607B2D3C
 * address: 0x607B2D3C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B2D3C(_DWORD *a1)
{
  int v2; // s0

  a1[303] |= 0x4000u;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[30] = 0;
  a1[31] = 0;
  if ( sub_6075EDE0((int)a1) )
    v2 = dword_60B0CE04[(*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330])];
  else
    v2 = 0;
  a1[2849] = v2;
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 1088))(a1, 400.0);
  a1[2485] = 0;
  PlayerBase_dispatchVirtual3((int)(a1 + 2839), 49, 0.0);
  return sub_60773630((int)a1, 28, 0);
}
