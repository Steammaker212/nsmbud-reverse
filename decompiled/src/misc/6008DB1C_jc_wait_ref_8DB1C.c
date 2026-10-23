/* jc_wait_ref_8DB1C
 * address: 0x6008DB1C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_8DB1C(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  sub_60421AE4(v2, v4, 1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 9356) = dword_60C82340;
  result = a1 + 6812;
  if ( FIELD_F32(a1, 112) >= (float)(FIELD_F32(a1, 6812) + -120.0) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C820E0);
  return result;
}
