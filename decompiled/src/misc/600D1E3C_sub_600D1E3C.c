/* sub_600D1E3C
 * address: 0x600D1E3C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D1E3C(int a1)
{
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
  FIELD_U32(a1, 160) = 0;
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 7004) + 192))(FIELD_U32(a1, 7004), &unk_60C841B4);
  FIELD_U16(a1, 6278) = 60;
  return 6278;
}
