/* sub_6073BFC8
 * address: 0x6073BFC8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073BFC8(int a1)
{
  int result; // r0

  sub_605D847C((_DWORD *)a1);
  FIELD_U32(a1, 120) = 0;
  ((void (__fastcall *)(int, _DWORD, float, float, float))loc_605EA46C)(a1 + 6064, 0, 5.0, 1.0, 0.0);
  ((void (__fastcall *)(_DWORD, float))loc_605EB024)(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), 10.0);
  result = ((20 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 40;
  FIELD_U16(a1, 8038) = result;
  return result;
}
