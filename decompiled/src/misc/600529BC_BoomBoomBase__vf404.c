/* BoomBoomBase__vf404
 * address: 0x600529BC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf404(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  float v7; // r1
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  Vec3 v11; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    sub_608134CC(a1 + 6332, "SE_VOC_BUN_DEMO_APPEAR", FIELD_S16(a1, 6640), 0);
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    v7 = FIELD_F32(a1, 112);
    v11.x = FIELD_F32(a1, 108);
    v11.y = v7;
    v11.z = 4500.0;
    EffectData_create(394, &v11, 0, 0);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C805EC);
  return result;
}
