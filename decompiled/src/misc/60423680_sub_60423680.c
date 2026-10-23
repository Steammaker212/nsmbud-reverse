/* sub_60423680
 * address: 0x60423680   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60423680(int result)
{
  int v1; // r2
  unsigned int v2; // r12
  int v3; // r3
  _DWORD *v4; // r0

  v1 = FIELD_U32(result, 4);
  if ( v1 )
  {
    v2 = FIELD_U32(result, 8);
    result = FIELD_U32(result, 12);
    v3 = result & 1;
    if ( v3 | v2 )
    {
      v4 = (_DWORD *)(v1 + (result >> 1));
      if ( v3 )
        v2 = *(_DWORD *)(*v4 + v2);
      return ((int (__fastcall *)(_DWORD *))v2)(v4);
    }
  }
  return result;
}
