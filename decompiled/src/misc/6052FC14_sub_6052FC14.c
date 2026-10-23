/* sub_6052FC14
 * address: 0x6052FC14   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052FC14(int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r0

  v5 = 0;
  v6 = *a1;
  if ( a3 >= 0xB )
    a3 = 0;
  FIELD_U8(v6, 64) |= 1u;
  *(_BYTE *)(a1[1] + 64) &= ~1u;
  *(_BYTE *)(a1[2] + 64) &= ~1u;
  *(_BYTE *)(a1[3] + 64) &= ~1u;
  *(_BYTE *)(a1[4] + 64) &= ~1u;
  *(_BYTE *)(a1[5] + 64) &= ~1u;
  *(_BYTE *)(a1[6] + 64) &= ~1u;
  *(_BYTE *)(a1[7] + 64) &= ~1u;
  *(_BYTE *)(a1[8] + 64) &= ~1u;
  *(_BYTE *)(a1[9] + 64) &= ~1u;
  *(_BYTE *)(a1[10] + 64) &= ~1u;
  *(_BYTE *)(a1[11] + 64) &= ~1u;
  *(_BYTE *)(a1[a3 + 1] + 64) |= 1u;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 + 12);
  if ( v8 )
  {
    sub_60858A34(v8);
    v7 = *a1;
  }
  if ( a2 < 5 )
    v5 = a2;
  return sub_608589FC(a1[v5 + 12], v7);
}
