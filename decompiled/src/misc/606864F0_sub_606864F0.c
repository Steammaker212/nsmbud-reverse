/* sub_606864F0
 * address: 0x606864F0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606864F0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int result; // r0
  int v5; // r5

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60CB83F4 + 8))();
  if ( v3 != result )
  {
    v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    result = (*(int (**)(void))(dword_60CB8434 + 8))();
    if ( v5 != result )
    {
      FIELD_U8(a1, 7596) = 1;
      return sub_60687C18(a1, 0);
    }
  }
  return result;
}
