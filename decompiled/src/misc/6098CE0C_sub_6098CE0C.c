/* sub_6098CE0C
 * address: 0x6098CE0C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CE0C(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r1

  v1 = (_DWORD *)a1[6];
  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  return sub_60981200(v1, v2);
}
