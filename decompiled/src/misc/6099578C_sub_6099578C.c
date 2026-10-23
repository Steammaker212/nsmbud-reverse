/* sub_6099578C
 * address: 0x6099578C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099578C(unsigned __int8 *a1)
{
  int result; // r0
  bool v3; // zf

  sub_60991378((int)a1);
  result = a1[30];
  v3 = (result & 0x40) == 0;
  if ( (result & 0x40) != 0 )
  {
    result = a1[60];
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = a1[28];
    if ( result == 4 )
      return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 36))(a1);
  }
  return result;
}
