/* sub_606203B8
 * address: 0x606203B8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606203B8(_DWORD *result, int a2)
{
  int (__fastcall *v2)(_DWORD *, int *); // r2

  if ( a2 == 1 )
  {
    v2 = *(int (__fastcall **)(_DWORD *, int *))(*result + 192);
    if ( result[1576] )
      return (_DWORD *)v2(result, &dword_60CB37FC);
    else
      return (_DWORD *)v2(result, &dword_60CB3774);
  }
  return result;
}
