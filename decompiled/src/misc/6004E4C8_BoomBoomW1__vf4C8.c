/* BoomBoomW1__vf4C8
 * address: 0x6004E4C8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomW1__vf4C8(int a1)
{
  int v2; // r6
  int v3; // r5
  int result; // r0

  ((void (__fastcall *)(int, float))loc_6005255C)(a1, FIELD_F32(a1, 7856));
  v2 = FIELD_U32(a1, 80);
  v3 = 1;
  if ( v2 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
  {
    v3 = 0;
    if ( sub_600525EC(a1) == 1 )
    {
      FIELD_U32(a1, 80) ^= 1u;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1256))(a1);
      v3 = 1;
    }
  }
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1276))(a1);
  sub_6004E178(a1);
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1136))(a1);
  }
  if ( v3 == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C804F0);
  }
  return result;
}
