/* sub_6049F1BC
 * address: 0x6049F1BC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049F1BC(_DWORD *a1)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r4
  _DWORD *v3; // r5
  int result; // r0

  *(_BYTE *)(a1[5051] + 64) &= ~1u;
  *(_BYTE *)(a1[5052] + 64) &= ~1u;
  *(_BYTE *)(a1[5053] + 64) &= ~1u;
  *(_BYTE *)(a1[5054] + 64) &= ~1u;
  v1 = a1 + 5063;
  *(_BYTE *)(*v1 + 64) &= ~1u;
  v2 = a1 + 5064;
  *(_BYTE *)(a1[5064] + 64) &= ~1u;
  *(_BYTE *)(v2[1] + 64) &= ~1u;
  *(_BYTE *)(v2[2] + 64) &= ~1u;
  *(_BYTE *)(v2[3] + 64) &= ~1u;
  *(_BYTE *)(v2[4] + 64) &= ~1u;
  v3 = a1 + 11;
  *(_BYTE *)(a1[5051] + 64) |= 1u;
  *(_BYTE *)(*v2 + 64) |= 1u;
  *(_BYTE *)(*v1 + 64) |= 1u;
  sub_60473DE4(a1 + 11, 0, &dword_60CA0B5C, 0);
  result = sub_60473DE4(v3, 1u, &dword_60CA0B8C, 0);
  *((_BYTE *)v2 + 52) = 1;
  *((_BYTE *)v2 + 53) = 1;
  *((_BYTE *)v2 + 2245) = 1;
  return result;
}
