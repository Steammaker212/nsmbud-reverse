/* PB_star_color_ref
 * address: 0x60756B98   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PB_star_color_ref(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  if ( a1[75] != 5 )
    return sub_6078EBF4(a1);
  a1[134] |= 2u;
  sub_6078E940(a1, a1[6]);
  v2 = a1[263];
  v3 = a1[6];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "PB_star_color";
  return ((int (__fastcall *)(_DWORD *, int, int, _DWORD *, float))sub_6078ED00)(a1, v3, v2, v5, 0.0);
}
