/* sub_60082130
 * address: 0x60082130   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60082130(_WORD *a1)
{
  int v2; // r0

  if ( a1[3138] == 1 )
  {
    v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 240))(v2);
  }
  return (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 1068))(a1);
}
