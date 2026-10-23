/* sub_6027CD4C
 * address: 0x6027CD4C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027CD4C(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8856) + 8))(FIELD_U32(a1, 8856));
  if ( v2 != (*(int (**)(void))(dword_60C8EE78 + 8))() )
    return Enemy__vfD8(a1);
  result = FIELD_U32(a1, 8860);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = result;
  return result;
}
