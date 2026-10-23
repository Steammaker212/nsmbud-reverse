/* sub_6031F550
 * address: 0x6031F550   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6031F550(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // r1

  j_ModelWrapper_updateAnims(a1[1781]);
  result = a1 + 3249;
  v3 = a1[3249];
  if ( !v3 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9385C);
  v4 = v3 - 1;
  *result = v4;
  if ( !v4 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9385C);
  return result;
}
