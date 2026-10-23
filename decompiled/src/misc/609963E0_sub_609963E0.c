/* sub_609963E0
 * address: 0x609963E0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609963E0(unsigned __int8 *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0

  v2 = a1[84];
  v3 = v2 == 5;
  if ( v2 != 5 )
    v3 = v2 == 3;
  if ( !v3 )
    return sub_60992424((int)a1);
  v4 = sub_60991414((int)a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
  return (*(int (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)a1 + 116))(a1, 0);
}
