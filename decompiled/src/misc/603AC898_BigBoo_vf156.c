/* BigBoo_vf156
 * address: 0x603AC898   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf156(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  float v4; // s0

  v2 = a1[1664];
  v3 = (int)(a1 + 1774);
  if ( v2 == 1 )
    v4 = 0.02;
  else
    v4 = 0.04;
  sub_602A3EFC(v3, 24, v4);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C97BAC);
  return 1;
}
