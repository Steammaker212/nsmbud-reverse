/* sub_608595E0
 * address: 0x608595E0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608595E0(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v7; // r6
  _DWORD *i; // r5
  _DWORD *v9; // r5
  int v10; // t1

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  if ( a3 == 1 )
  {
    v7 = a1 + 4;
    for ( i = (_DWORD *)a1[5]; i != v7; i = (_DWORD *)v9[2] )
    {
      v10 = *(i - 1);
      v9 = i - 1;
      result = (*(int (__fastcall **)(_DWORD *, int, int))(v10 + 68))(v9, a2, 1);
    }
  }
  return result;
}
