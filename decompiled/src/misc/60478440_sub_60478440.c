/* sub_60478440
 * address: 0x60478440   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478440(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1

  if ( a1[41] == 4 )
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 108))(a1, 0);
  v2 = a1[32];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 104))(v2);
  v3 = a1[28];
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
  v4 = a1[31];
  if ( v4 )
  {
    sub_60477B30(a1, v4);
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)a1[31] + 92))(a1[31], 0, 1.0);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[31] + 108))(a1[31]);
  }
  return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 40))(a1, 1);
}
