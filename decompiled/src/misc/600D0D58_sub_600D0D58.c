/* sub_600D0D58
 * address: 0x600D0D58   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0D58(int a1, float a2)
{
  FIELD_F32(a1, 120) = a2 / (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 744))(a1, a2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1);
  FIELD_U8(a1, 6980) = 1;
  return 6980;
}
