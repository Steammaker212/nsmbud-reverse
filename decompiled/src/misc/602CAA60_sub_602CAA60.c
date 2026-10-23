/* sub_602CAA60
 * address: 0x602CAA60   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CAA60(_DWORD *a1)
{
  unsigned int v2; // r2
  _DWORD *v3; // r5

  v2 = a1[5];
  a1[41] = dword_60C91890[(v2 & 3) + 5];
  a1[3111] = *(int *)((char *)dword_60C91890 + ((v2 >> 2) & 4));
  v3 = a1 + 1575;
  sub_602CB180(a1 + 1575, a1 + 3110, (v2 >> 8) & 0xF);
  sub_602CB83C(v3);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C91860);
  return 1;
}
