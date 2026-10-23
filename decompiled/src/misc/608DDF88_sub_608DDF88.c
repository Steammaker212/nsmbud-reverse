/* sub_608DDF88
 * address: 0x608DDF88   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DDF88(_DWORD *result, void (__fastcall ***a2)(_DWORD, bool))
{
  _DWORD *v3; // r4
  int v4; // r0
  unsigned int *v5; // r6
  unsigned int v6; // r0

  v3 = result;
  if ( a2 )
  {
    v4 = result[36];
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    v5 = (unsigned int *)(a2 + 1);
    (**a2)(a2, v3[30] == 2);
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 - 1, v5) );
    result = (_DWORD *)v3[36];
    if ( result )
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 12))(result);
  }
  return result;
}
