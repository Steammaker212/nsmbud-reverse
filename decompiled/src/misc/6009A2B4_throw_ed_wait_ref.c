/* throw_ed_wait_ref
 * address: 0x6009A2B4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_ed_wait_ref(int a1)
{
  int result; // r0
  _BYTE *v3; // r4
  int v4; // t1

  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U16(a1, 6276) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  v4 = FIELD_U8(a1, 8204);
  v3 = (_BYTE *)(a1 + 8204);
  result = v4;
  if ( v4 )
  {
    *v3 = 0;
    return 0;
  }
  return result;
}
