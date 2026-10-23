/* sub_6076E690
 * address: 0x6076E690   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E690(int a1)
{
  int result; // r0
  int *v3; // r5
  float v4; // s0
  int v5; // r0
  int v6; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  target[0] = 0;
  v6 = 0x8000000;
  moveValueTo((int *)(a1 + 160), target, &v6);
  v3 = (int *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  switch ( result )
  {
    case 2:
      result = FIELD_U32(a1, 9712);
      if ( result )
        return result;
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_U32(a1, 116);
      target[0] = FIELD_U32(a1, 108);
      *(float *)&target[1] = v4 + 8.0;
      target[2] = v5;
      sub_60766B08((_DWORD *)a1, (int)target);
      sub_603F49E8(AreaTask_intance);
      result = 3;
      goto LABEL_8;
    case 1:
      result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 700))(a1, 0);
      if ( result == 1 )
      {
        *v3 = 2;
        FIELD_U32(a1, 9712) = 60;
        return 9712;
      }
      break;
    case 0:
      result = FIELD_U32(a1, 9712);
      if ( !result )
      {
        sub_6076DC50(a1);
        result = 1;
LABEL_8:
        *v3 = result;
      }
      break;
  }
  return result;
}
