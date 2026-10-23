/* sub_60612348
 * address: 0x60612348   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60612348(int a1)
{
  _DWORD *result; // r0
  int v2; // r1
  int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 7612);
  result = (_DWORD *)(a1 + 7612);
  v2 = v3;
  if ( v3 )
  {
    v4 = v2 - 1;
    *result = v4;
    if ( v4 == 1 )
    {
      result = (_DWORD *)dword_60CBFA90;
      FIELD_U32(dword_60CBFA90, 60) |= 0x22u;
    }
  }
  return result;
}
