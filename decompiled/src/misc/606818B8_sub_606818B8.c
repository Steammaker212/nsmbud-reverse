/* sub_606818B8
 * address: 0x606818B8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606818B8(_DWORD *result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  if ( result[1878] )
  {
    v1 = (_DWORD *)result[1528];
    v2 = v1[3];
    v3 = v1[2];
    v4 = v1[17];
    if ( v3 > v4 )
      v2 += 4 * v4;
    if ( (*(_BYTE *)(*(_DWORD *)v2 + 28) & 0x20) != 0 )
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 204))(result);
  }
  return result;
}
