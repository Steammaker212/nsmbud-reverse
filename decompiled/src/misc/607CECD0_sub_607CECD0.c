/* sub_607CECD0
 * address: 0x607CECD0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CECD0(int a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v3 = (int *)(a1 + 9708);
  result = FIELD_U32(a1, 9708);
  switch ( result )
  {
    case 2:
      if ( (FIELD_U8(a1, 1233) & 0x20) == 0 )
      {
LABEL_13:
        target = sub_60773F3C(a1, FIELD_U32(a1, 80));
        v5 = 0x4000000;
        return moveValueTo((int *)(a1 + 160), &target, &v5);
      }
      PlayerBase_dispatchVirtual3(a1 + 11364, 171, 0.0);
      result = 3;
LABEL_10:
      *v3 = result;
      goto LABEL_13;
    case 1:
      result = FIELD_U32(a1, 9712);
      if ( result )
        return result;
      result = 2;
      if ( (FIELD_U8(a1, 1233) & 0x10) == 0 )
        return result;
      goto LABEL_10;
    case 0:
      v4 = sub_607D6C28(a1);
      if ( v4 )
      {
        sub_607A9264(v4, FIELD_U32(a1, 9776), FIELD_U32(a1, 9780));
        FIELD_U32(a1, 160) = 0;
        sub_60794954(a1 + 11364, 0, 10.0, 0.0);
        FIELD_U32(a1, 80) = 0;
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088))(a1, 2800.0);
        *v3 = 1;
        FIELD_U32(a1, 9712) = 50;
        return 9712;
      }
      result = *v3;
      break;
  }
  if ( result > 1 )
    goto LABEL_13;
  return result;
}
