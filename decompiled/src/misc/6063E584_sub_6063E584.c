/* sub_6063E584
 * address: 0x6063E584   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6063E584(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // r1

  SE_OBJ_PEA_TREE_LEAF_SWING_ref();
  result = (_DWORD *)a1[6];
  if ( (int)result >= 0 )
  {
    result = (_DWORD *)a1[1554];
    if ( !result )
    {
      result = a1 + 1542;
      v3 = a1[1542];
      if ( !v3 )
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB57B0);
      v4 = v3 - 1;
      *result = v4;
      if ( !v4 )
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB57B0);
    }
  }
  return result;
}
