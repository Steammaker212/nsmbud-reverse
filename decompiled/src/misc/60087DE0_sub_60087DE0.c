/* sub_60087DE0
 * address: 0x60087DE0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087DE0(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  target = dword_60C81F48;
  v3 = 35791394;
  result = moveValueTo((int *)(a1 + 160), &target, &v3);
  if ( result == 1 )
  {
    result = FIELD_U32(a1, 2872);
    if ( (result & 1) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81EAC);
  }
  return result;
}
