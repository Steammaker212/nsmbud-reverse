/* sub_6047518C
 * address: 0x6047518C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047518C(int a1, int a2, _DWORD *a3, int *a4)
{
  int result; // r0
  int v9; // r4
  int v10; // r6
  int (__fastcall *v11)(int, _DWORD, int); // r7

  result = *a4;
  if ( *a4 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(FIELD_U32(a1, 16) + 12);
      v11 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v10 + 48);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      *(_DWORD *)(a2 + 4 * v9++) = v11(v10, a3[1], 1);
      a3 += 2;
      result = *a4;
    }
    while ( v9 < *a4 );
  }
  return result;
}
