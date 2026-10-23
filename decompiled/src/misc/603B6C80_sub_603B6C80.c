/* sub_603B6C80
 * address: 0x603B6C80   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6C80(int a1)
{
  int result; // r0

  result = sub_603B7330();
  if ( result == 1 )
  {
    ((void (__fastcall *)(int))loc_603B7478)(a1);
    FIELD_U32(a1, 156) = FIELD_U32(a1, 6464);
    if ( FIELD_U8(a1, 536) )
      sub_603B869C(a1);
    else
      sub_603B887C(a1);
    FIELD_U32(a1, 6448) = *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 80) + 6440);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9818C);
  }
  return result;
}
