/* sub_601CED18
 * address: 0x601CED18   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CED18(int a1, int a2)
{
  _DWORD *i; // r6
  bool v5; // zf

  for ( i = *(_DWORD **)(a1 + 272); ; i = (_DWORD *)i[68] )
  {
    v5 = i == 0;
    if ( i )
      v5 = (i[66] | 1) == 7;
    if ( v5 )
      break;
    if ( (*(int (__fastcall **)(_DWORD *))(*i + 92))(i) == 1 )
      sub_601C5B4C((int)i, a2);
  }
  return sub_601C5B4C(a1, a2);
}
