/* sub_6044694C
 * address: 0x6044694C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044694C(int a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r6
  int v5; // r0
  int v6; // r0

  v3 = a2[6];
  v4 = a2[10];
  v5 = sub_6090BE54(a2[7]);
  sub_6095EAFC(a1 + 432, v4, v3 + 4, v5);
  v6 = FIELD_U32(a1, 5424);
  if ( v6 )
    *(_DWORD *)(FIELD_U32(v6, 420) + 888) = 0;
  return sub_6095D89C(a1 + 432, 1);
}
