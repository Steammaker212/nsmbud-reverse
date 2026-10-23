/* sub_60299338
 * address: 0x60299338   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299338(int a1)
{
  _DWORD **v2; // r4
  _DWORD *v3; // t1
  int *v4; // r1
  unsigned int v5; // r0

  sub_602971C4(a1, 16);
  v3 = *(_DWORD **)(a1 + 6300);
  v2 = (_DWORD **)(a1 + 6300);
  v4 = (int *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  Animation_update(*v4);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 52))(**v2);
  return memset(v2 + 94, 0, 36);
}
