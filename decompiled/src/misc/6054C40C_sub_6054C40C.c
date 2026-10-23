/* sub_6054C40C
 * address: 0x6054C40C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054C40C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C009D0;
  v2 = (_DWORD *)(a1 + 40);
  FIELD_U16(a1, 3688) = 0;
  sub_6045C0A0(a1 + 3692);
  sub_60475AE8(v2);
  return a1;
}
