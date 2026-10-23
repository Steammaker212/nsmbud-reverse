/* sub_60119E54
 * address: 0x60119E54   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60119E54(int a1)
{
  int v2; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
  {
    v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 1036))(v2, FIELD_U32(a1, 80));
  }
  FIELD_U32(a1, 9000) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 9004) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 9008) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 8904) = FIELD_U32(a1, 8900);
  FIELD_U32(a1, 8912) = FIELD_U32(a1, 8908);
  FIELD_F32(a1, 9272) = fabsf(FIELD_F32(a1, 120) / 10.0);
  FIELD_F32(a1, 9276) = fabsf(FIELD_F32(a1, 124) / 10.0);
  FIELD_U8(a1, 9318) = 0;
  FIELD_U8(a1, 9242) = 0;
  FIELD_U32(a1, 9196) = 1;
  FIELD_U32(a1, 9348) = 100;
  return 9348;
}
