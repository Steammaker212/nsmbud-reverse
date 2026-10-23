/* sub_609917C0
 * address: 0x609917C0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609917C0(int a1)
{
  _DWORD *v3; // r0
  unsigned int *v4; // r2
  unsigned int v5; // r1
  int v6; // r0

  if ( (FIELD_U8(a1, 30) & 0x40) != 0 )
  {
    v3 = *(_DWORD **)(a1 + 44);
    v4 = (unsigned int *)v3[2];
    if ( v3[1] > 1u )
      ++v4;
    v5 = *v4;
    if ( *v4 )
      v5 = 1;
    v6 = sub_6098A304(v3, v5);
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 116))(a1, 5);
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 116))(a1, 0);
  }
  else
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 116))(a1, 5);
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 116))(a1, 3);
  }
}
