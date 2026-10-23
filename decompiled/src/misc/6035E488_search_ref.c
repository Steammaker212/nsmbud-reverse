/* search_ref
 * address: 0x6035E488   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall search_ref(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9578C + 8))();
  if ( v2 != result )
  {
    v4 = FIELD_U32(a1, 6304);
    v5[0] = &sead__SafeStringBase__vtable;
    v5[1] = "search";
    sub_6040F4B8(v4, v5, 1);
    FIELD_U32(a1, 104) = 1031798784;
    FIELD_U32(a1, 100) = 1016699290;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = -1082130432;
    FIELD_U32(a1, 128) = 0;
    if ( !FIELD_U32(a1, 6668) )
      FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 132) = *(_DWORD *)&aGff[4 * FIELD_U32(a1, 80)];
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 160) = FIELD_U32(a1, 6916);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
  }
  return result;
}
