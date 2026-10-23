/* sub_608A5474
 * address: 0x608A5474   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608A5474(_DWORD *result)
{
  int v1; // r1
  int v2; // r3

  v1 = *result;
  if ( !*(_BYTE *)(*(_DWORD *)(*result + 136) + 1874) )
  {
    v2 = 2;
    if ( *(_BYTE *)(*(_DWORD *)(FIELD_U32(v1, 116) + 24) + 30) )
      v2 = 3;
    *(_DWORD *)(FIELD_U32(v1, 732) + 40) = (*(_DWORD *)(FIELD_U32(v1, 732) + 40) + 1) % v2;
    return (_DWORD *)sub_608A56E8(dword_60CC8294, *result);
  }
  return result;
}
