/* sub_607F551C
 * address: 0x607F551C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F551C(int a1, _DWORD *a2)
{
  int result; // r0

  result = dword_60C99E60 + 20;
  if ( FIELD_U8(dword_60C99E60, 61) )
    return sub_60473B88((_DWORD *)(dword_60C99E60 + 64), a2, 0);
  return result;
}
