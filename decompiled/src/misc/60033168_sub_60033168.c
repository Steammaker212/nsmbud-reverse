/* sub_60033168
 * address: 0x60033168   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60033168(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // t1
  int v5; // r0
  int *v6; // r0

  result = FIELD_U16(a1, 6276);
  if ( result == FIELD_U8(a1, 6304) || result == FIELD_U8(a1, 6305) )
  {
    v4 = FIELD_U32(a1, 6300);
    v3 = a1 + 6300;
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(v4 + 28) + 4));
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 24) = 1065353216;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
      v5 += 4;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v5 + 4));
    v6 = *(int **)(*(_DWORD *)v3 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
      ++v6;
    result = *v6;
    FIELD_U32(result, 24) = 1065353216;
  }
  return result;
}
