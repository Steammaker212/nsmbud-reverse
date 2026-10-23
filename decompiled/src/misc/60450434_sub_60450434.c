/* sub_60450434
 * address: 0x60450434   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60450434(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // r7
  int v10; // r8
  __int64 v11; // r0

  sub_60450184((int)a1, a2, a3);
  result = sub_60922278(a1 + 84, a2);
  if ( a4 )
  {
    v9 = FIELD_U32(a2, 192);
    v10 = a1[170];
    v11 = dword_60CC746C(a1 + 176);
    return dword_60CC7874(
             v9,
             v10,
             a1[169],
             6 * a4,
             v11 + 6 * a3 * a1[175],
             (v11 + (unsigned __int64)(unsigned int)(6 * a3 * a1[175])) >> 32);
  }
  return result;
}
