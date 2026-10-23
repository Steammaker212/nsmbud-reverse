/* sub_604C96F8
 * address: 0x604C96F8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604C96F8(int a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_604DABE0(10);
  sub_60473DE4((_DWORD *)(a1 + 40), 6u, v3, 0);
  FIELD_U32(a1, 4828) = 256;
  sub_60502548(a1 + 3800);
  FIELD_U16(a1, 4852) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 3840));
}
