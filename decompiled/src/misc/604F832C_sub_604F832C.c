/* sub_604F832C
 * address: 0x604F832C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F832C(int a1)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r1
  int v4; // r0
  int v5; // r0

  FIELD_U8(a1, 3596) = 0;
  if ( FIELD_U8(a1, 3598) )
    v2 = dword_60CA6ABC;
  else
    v2 = dword_60CA6AB4;
  sub_604741D8((_DWORD *)a1, 1u, v2, 0);
  v3 = *(_DWORD **)(a1 + 3512);
  if ( FIELD_U32(a1, 3508) > 1u )
    v3 += 5;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 104))(*v3);
  v4 = sub_6047482C(a1, 1u);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  v5 = sub_6047482C(a1, 1u);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)v5 + 12))(v5, 1.0);
}
