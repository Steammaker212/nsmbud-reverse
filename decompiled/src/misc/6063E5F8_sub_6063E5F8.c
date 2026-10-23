/* sub_6063E5F8
 * address: 0x6063E5F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6063E5F8(_DWORD *a1)
{
  _DWORD *result; // r0
  float v3; // s0

  SE_OBJ_PEA_TREE_LEAF_SWING_ref();
  result = a1 + 1557;
  v3 = *((float *)a1 + 1557) + -0.0165;
  *((float *)a1 + 1557) = v3;
  if ( v3 <= 0.0 )
  {
    a1[1664] = 0;
    *result = 0;
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB57D0);
  }
  return result;
}
