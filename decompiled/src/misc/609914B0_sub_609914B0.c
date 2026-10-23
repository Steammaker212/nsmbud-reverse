/* sub_609914B0
 * address: 0x609914B0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609914B0(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  _DWORD *v4; // r2
  int v5; // r0

  sub_60991D00();
  v2 = *(_DWORD **)(a1 + 44);
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 )
  {
    v4 = (_DWORD *)v2[2];
    v3 = 5;
    if ( v2[1] > 5u )
      v4 += 5;
    if ( !*v4 )
      v3 = 4;
  }
  else
  {
    v3 = 4;
  }
  v5 = sub_6098A304(v2, v3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 108))(v5);
}
