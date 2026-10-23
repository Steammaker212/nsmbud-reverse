/* sub_604433E4
 * address: 0x604433E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604433E4(_DWORD *a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r7
  int (__fastcall *v6)(_DWORD *); // r1
  _DWORD *v7; // r0

  v4 = a2[8];
  v5 = a2[9];
  v6 = *(int (__fastcall **)(_DWORD *))(*a2 + 64);
  if ( v4 == -2 )
    v4 = a1[74];
  if ( v5 == -2 )
    v5 = a1[75];
  v7 = (_DWORD *)v6(a2);
  a2[1] = v7[3];
  a2[2] = v7[7];
  a2[3] = v7[11];
  return sub_60445608(*(_DWORD *)(a1[73] + 420), a2, v4, v5);
}
