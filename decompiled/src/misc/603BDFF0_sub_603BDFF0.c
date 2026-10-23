/* sub_603BDFF0
 * address: 0x603BDFF0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BDFF0(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1

  v4 = a1[1588];
  v2 = a1 + 1588;
  v3 = v4;
  if ( v4 != 1 )
  {
    a1[1589] = v3;
    *v2 = 1;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
  }
  return ShellEnemy__vf31C((int)a1);
}
