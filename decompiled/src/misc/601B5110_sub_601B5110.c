/* sub_601B5110
 * address: 0x601B5110   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B5110(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  _DWORD *i; // r4

  a1[250] = sub_601E1308(a2);
  result = a1[280] | 0x80000;
  a1[280] = result;
  for ( i = (_DWORD *)a1[68]; i; i = (_DWORD *)i[68] )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*i + 92))(i);
    if ( result == 1 )
      result = (*(int (__fastcall **)(_DWORD *, _DWORD, int, int))(*i + 96))(i, a1[250], a3, a4);
  }
  a1[273] = a2;
  a1[275] = a2;
  return result;
}
