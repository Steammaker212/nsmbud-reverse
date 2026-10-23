/* sub_604753A8
 * address: 0x604753A8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604753A8(int a1, int a2, _DWORD *a3, int *a4)
{
  int v8; // r6
  int v9; // r4
  int v10; // r7
  int (__fastcall *v11)(int, _DWORD, int); // r11
  int v12; // r0
  int v13; // r0

  v8 = 1;
  if ( *a4 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(FIELD_U32(a1, 16) + 12);
      v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v12 = v11(v10, a3[1], 1);
      v13 = sub_604749C4(v12);
      *(_DWORD *)(a2 + 4 * v9++) = v13;
      a3 += 2;
      v8 = (unsigned __int8)v8 & (v13 != 0);
    }
    while ( v9 < *a4 );
  }
  return v8;
}
