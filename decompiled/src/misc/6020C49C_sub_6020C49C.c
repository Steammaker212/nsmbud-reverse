/* sub_6020C49C
 * address: 0x6020C49C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6020C49C(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BD8BCC;
  FIELD_U32(a1, 416) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 416);
  sub_60237560(a1 + 416);
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = off_60BD525C;
  nullsub_691();
  v3 = Actor__dtor((Actor *)a1);
  operator_delete(v3);
}
