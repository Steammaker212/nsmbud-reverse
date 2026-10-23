/* sub_6034FD14
 * address: 0x6034FD14   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6034FD14(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // t1

  LargeGoomba_vf183(a1);
  FIELD_U8(a1, 536) = 1;
  v4 = *(_DWORD **)(a1 + 6964);
  v3 = (_DWORD *)(a1 + 6964);
  result = v4;
  if ( v4 )
  {
    result[1739] += 2;
    result = (_DWORD *)(*v3 + 6960);
    ++*result;
  }
  return result;
}
