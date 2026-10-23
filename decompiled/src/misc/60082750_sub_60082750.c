/* sub_60082750
 * address: 0x60082750   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60082750(int a1)
{
  Actor *v2; // r5
  int result; // r0
  int v4; // r0
  bool v5; // zf

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = (Actor *)(a1 + 648);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    v4 = sub_6014B69C(a1 + 648);
    v5 = v4 == 0;
    if ( v4 )
    {
      v2 = *(Actor **)(v4 + 144);
      v5 = v2 == 0;
    }
    if ( v5 || Actor__getProfileId(v2) != 392 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81A8C);
      FIELD_U32(a1, 7696) = 240;
      return 240;
    }
    else
    {
      result = sub_602EE904(v2);
      if ( !result )
        return sub_602EE7B8(v2, FIELD_U32(a1, 80), -1);
    }
  }
  return result;
}
