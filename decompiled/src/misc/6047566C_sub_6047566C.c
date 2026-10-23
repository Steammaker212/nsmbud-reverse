/* sub_6047566C
 * address: 0x6047566C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047566C(int a1, int a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  int (__fastcall ***v7)(_DWORD); // r10
  int result; // r0
  int v9; // r5
  int (__fastcall **v10)(_DWORD); // r7
  int (__fastcall *v11)(int (__fastcall **)(_DWORD), _DWORD, int); // r6

  v7 = sub_60474F40(a1, a3);
  result = *a5;
  if ( *a5 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = v7[3];
      v11 = *((int (__fastcall **)(int (__fastcall **)(_DWORD), _DWORD, int))*v10 + 12);
      (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
      *(_DWORD *)(a2 + 4 * v9++) = v11(v10, a4[1], 1);
      a4 += 2;
      result = *a5;
    }
    while ( v9 < *a5 );
  }
  return result;
}
