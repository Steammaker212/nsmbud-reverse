/* sub_6002A80C
 * address: 0x6002A80C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002A80C(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf
  __int16 v5; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = a1 + 7418;
  v3 = FIELD_U16(a1, 7418);
  v4 = v3 == 0;
  if ( FIELD_U16(a1, 7418) )
  {
    v5 = v3 - 1;
    *(_WORD *)result = v5;
    result = 0xFFFF;
    v4 = v5 == 0;
  }
  if ( v4 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 648));
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 124) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F868);
    }
  }
  return result;
}
