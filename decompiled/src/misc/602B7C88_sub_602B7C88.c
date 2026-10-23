/* sub_602B7C88
 * address: 0x602B7C88   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B7C88(int a1)
{
  signed int v2; // r1
  int result; // r0
  char v4; // [sp+4h] [bp-Ch] BYREF

  v2 = Enemy__beforeExecute((CollisionActor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    if ( !FIELD_U8(a1, 6319) )
    {
      FIELD_U32(a1, 6344) = FIELD_U32(a1, 6340);
      ((void (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
        &v4,
        a1 + 6340,
        a1 + 108,
        FIELD_U8(a1, 86));
    }
    CollisionMgr_vf18((_BYTE *)(a1 + 6384));
    return 1;
  }
  return result;
}
