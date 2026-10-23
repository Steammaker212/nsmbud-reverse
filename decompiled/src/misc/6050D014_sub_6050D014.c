/* sub_6050D014
 * address: 0x6050D014   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050D014(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  result = FIELD_U8(a1, 3568);
  if ( result )
  {
    sub_6050D0AC(a1);
    v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 12) + 48))(
           *(_DWORD *)(FIELD_U32(a1, 16) + 12),
           "T_Score_00",
           1);
    v4 = sub_604749C4(v3);
    if ( v4 )
    {
      v5[0] = &sead__SafeStringBase__vtable;
      v5[1] = "CourseSelectVS_Score_00";
      sub_6047E0EC(v5, v4, 1, FIELD_U32(a1, 3564));
    }
    FIELD_U8(a1, 3568) = 0;
    return 0;
  }
  return result;
}
