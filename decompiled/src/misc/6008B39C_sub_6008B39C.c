/* sub_6008B39C
 * address: 0x6008B39C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B39C(int *a1, int a2)
{
  int *v4; // r6

  v4 = a1 + 1910;
  (*(void (__fastcall **)(int *))(*a1 + 72))(a1);
  *v4 = FIELD_U32(a2, 80) ^ 1;
  return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C81A48);
}
