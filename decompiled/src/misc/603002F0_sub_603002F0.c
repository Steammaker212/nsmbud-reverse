/* sub_603002F0
 * address: 0x603002F0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603002F0(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  Animation_update(*v3);
  sub_602A33AC((_BYTE *)a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
}
