/* sub_60457BB8
 * address: 0x60457BB8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60457BB8(int a1)
{
  int v1; // r0

  v1 = sub_608EF75C(a1);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 32) + 28))(FIELD_U32(v1, 32), 0);
}
