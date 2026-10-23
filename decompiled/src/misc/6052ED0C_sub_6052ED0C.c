/* sub_6052ED0C
 * address: 0x6052ED0C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052ED0C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C001F0;
  v2 = (_DWORD *)(a1 + 40);
  FIELD_U16(a1, 10976) = 0;
  sub_6045C0A0(a1 + 10984);
  sub_6050A4C4(a1 + 3760);
  sub_60475AE8(v2);
  return a1;
}
