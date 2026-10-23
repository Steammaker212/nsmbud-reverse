/* sub_6099C5F8
 * address: 0x6099C5F8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099C5F8(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = FIELD_U32(a1, 36);
  result = (**(int (__fastcall ***)(int))a1)(a1);
  if ( v2 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 76))(v2);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 28))(v2, a1);
  }
  return result;
}
