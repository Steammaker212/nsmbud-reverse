/* SE_BOSS_JR_CROWN_SINGLE_LAND_ref_8F100
 * address: 0x6008F100   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_SINGLE_LAND_ref_8F100(int a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = 0;
  sub_6083246C((int *)(a1 + 164), &v3, (signed int *)(a1 + 15272));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    sub_60813430(a1 + 9476, "SE_BOSS_JR_CROWN_SINGLE_LAND", 0);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82080);
  }
  return result;
}
