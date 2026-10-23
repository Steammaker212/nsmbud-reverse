/* sub_607B8588
 * address: 0x607B8588   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B8588(_DWORD *a1)
{
  unsigned int v2; // r0
  _DWORD *result; // r0

  sub_6077520C(a1);
  v2 = a1[306] & 0xFFFFFBDF;
  a1[309] &= ~0x20u;
  a1[306] = v2;
  sub_607957D4((int)a1, 0);
  result = (_DWORD *)a1[2485];
  if ( result == (_DWORD *)4 )
    return (_DWORD *)SE_PLY_THROW_ICEBALL_ref((int)a1, 0);
  if ( result == (_DWORD *)7 )
    return sub_6079EA38(a1);
  return result;
}
