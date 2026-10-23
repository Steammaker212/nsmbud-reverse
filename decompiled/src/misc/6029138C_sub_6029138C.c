/* sub_6029138C
 * address: 0x6029138C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029138C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r8
  int v4; // r7
  int *v5; // r4
  _DWORD *v6; // r5
  int v7; // r1
  int result; // r0

  v2 = a1 + 1524;
  v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[1524] + 8))(a1[1524]);
  v4 = (*(int (**)(void))(dword_60C8F934 + 8))();
  v5 = a1 + 1523;
  *v2 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[1523] + 8))(a1[1523]);
  v6 = a1 + 1521;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[1521] + 12))(a1[1521], a1 + 1523);
  v7 = a1[1525];
  a1[1525] = 0;
  result = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 16))(*v6, v7);
  a1[1523] = result;
  if ( v3 == v4 )
  {
    (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 12))(*v6, v5);
    result = (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 8))(*v6, &dword_60C8F934);
    *v5 = result;
  }
  return result;
}
