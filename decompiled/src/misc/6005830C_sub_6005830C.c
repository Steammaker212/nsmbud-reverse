/* sub_6005830C
 * address: 0x6005830C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005830C(int a1)
{
  int result; // r0

  BoomBoomW1__vf424(a1);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  }
  result = FIELD_U32(a1, 8700);
  FIELD_U16(a1, 6276) = result;
  return result;
}
