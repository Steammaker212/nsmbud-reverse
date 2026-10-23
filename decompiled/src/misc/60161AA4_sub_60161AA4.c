/* sub_60161AA4
 * address: 0x60161AA4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60161AA4(int result)
{
  _DWORD *i; // r4

  for ( i = (_DWORD *)result; i[1]; result = (*(int (__fastcall **)(_DWORD *))(*i + 4))(i) )
    ;
  return result;
}
