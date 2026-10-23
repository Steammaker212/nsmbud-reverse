/* sub_6049E1D0
 * address: 0x6049E1D0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6049E1D0(_DWORD *a1)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r4

  *(_BYTE *)(a1[5051] + 64) &= ~1u;
  *(_BYTE *)(a1[5052] + 64) &= ~1u;
  *(_BYTE *)(a1[5053] + 64) &= ~1u;
  *(_BYTE *)(a1[5054] + 64) &= ~1u;
  *(_BYTE *)(a1[5063] + 64) &= ~1u;
  *(_BYTE *)(a1[5064] + 64) &= ~1u;
  *(_BYTE *)(a1[5065] + 64) &= ~1u;
  *(_BYTE *)(a1[5066] + 64) &= ~1u;
  v1 = a1 + 5067;
  *(_BYTE *)(*v1 + 64) &= ~1u;
  v2 = a1 + 5068;
  *(_BYTE *)(a1[5068] + 64) &= ~1u;
  *(_BYTE *)(a1[5054] + 64) |= 1u;
  *(_BYTE *)(*v1 + 64) |= 1u;
  *(_BYTE *)(a1[5068] + 64) |= 1u;
  sub_60473DE4(a1 + 11, 0, &dword_60CA0B7C, 0);
  *((_BYTE *)v2 + 36) = 1;
  *((_BYTE *)v2 + 2229) = 1;
  sub_60502548(v2 - 4159);
  *((_WORD *)v2 - 7792) = 0;
  return sub_6047EABC(v2 - 4149);
}
