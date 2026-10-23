/* sub_6047459C
 * address: 0x6047459C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047459C(int a1, unsigned int a2)
{
  unsigned int v2; // r2
  _DWORD *v3; // r0

  v2 = FIELD_U32(a1, 3508);
  v3 = *(_DWORD **)(a1 + 3512);
  if ( v2 > a2 )
    v3 += 5 * a2;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 100))(*v3);
}
