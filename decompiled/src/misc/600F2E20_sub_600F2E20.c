/* sub_600F2E20
 * address: 0x600F2E20   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F2E20(int a1)
{
  float v2; // s16
  int v3; // r0
  _BOOL4 v4; // r5
  float v5; // s2
  int result; // r0
  float v7; // s0
  float v8; // s4
  float v9; // s0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v2 = FIELD_F32(a1, 124);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U16(a1, 6276) == 1 )
    FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  v4 = sub_600B33DC((int *)a1, v3);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( v2 > 0.0 && v4 && FIELD_F32(a1, 124) <= 0.0 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8554C);
  v5 = FIELD_F32(a1, 120);
  result = dword_60CC6484;
  v7 = FIELD_F32(dword_60CC6484, 116);
  if ( v5 > 0.0 )
  {
    result = a1 + 7488;
    v8 = v7 + FIELD_F32(a1, 7488);
    if ( FIELD_F32(a1, 108) > v8 )
    {
      FIELD_F32(a1, 108) = v8;
LABEL_13:
      FIELD_U32(a1, 120) = 0;
      return 0;
    }
  }
  if ( v5 < 0.0 )
  {
    result = a1 + 7492;
    v9 = v7 + FIELD_F32(a1, 7492);
    if ( FIELD_F32(a1, 108) < v9 )
    {
      FIELD_F32(a1, 108) = v9;
      goto LABEL_13;
    }
  }
  return result;
}
