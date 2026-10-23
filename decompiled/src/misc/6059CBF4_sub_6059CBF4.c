/* sub_6059CBF4
 * address: 0x6059CBF4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059CBF4(_BYTE *a1)
{
  _BYTE *v1; // r4
  char v2; // t1

  v1 = a1;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 76))(a1);
  v2 = v1[6420];
  v1 += 6420;
  *v1 = v2 | 3;
  *((_DWORD *)v1 - 80) = 0;
  return 0;
}
