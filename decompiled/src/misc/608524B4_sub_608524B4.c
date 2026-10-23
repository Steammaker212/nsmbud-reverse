/* sub_608524B4
 * address: 0x608524B4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608524B4(int a1, float a2)
{
  int (__fastcall *v4)(int, _BOOL4, float); // r5
  _BOOL4 v5; // r1

  v4 = *(int (__fastcall **)(int, _BOOL4, float))(*(_DWORD *)a1 + 84);
  v5 = sub_608502FC(a1);
  return v4(a1, v5, a2);
}
