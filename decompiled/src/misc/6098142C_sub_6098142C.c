/* sub_6098142C
 * address: 0x6098142C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098142C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v8; // r5

  v8 = sub_608561CC(a1, a2, a3, a4, a5, a6, a7);
  if ( v8 == 1 )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 88))(a1);
  return v8;
}
