/* sub_6006DDAC
 * address: 0x6006DDAC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006DDAC(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-1Ch] BYREF
  int target; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF

  v2 = a1 + 7112;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7116));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v10 = 0;
  sub_6083246C((int *)(a1 + 160), &v10, (signed int *)(a1 + 26108));
  target = 0;
  speed = dword_60C81794;
  moveValueTo((int *)(a1 + 164), &target, &speed);
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    FIELD_U32(a1, 7144) |= 1u;
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    FIELD_U32(a1, 7144) &= ~2u;
    sub_600758EC(a1);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 25360) = 3;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8142C);
  }
  return result;
}
