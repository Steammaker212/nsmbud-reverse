/* sub_608B05BC
 * address: 0x608B05BC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B05BC(int a1, char a2)
{
  void *v4; // r6
  int v5; // r7

  v4 = sub_608C3B10();
  v5 = sub_608C2698(v4, 24, 1);
  FIELD_U32(v5, 4) = 4;
  FIELD_U32(v5, 16) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  FIELD_U8(v5, 20) = a2;
  return sub_608C2C1C(v4);
}
