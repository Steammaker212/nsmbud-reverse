/* sub_602AAE38
 * address: 0x602AAE38   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AAE38(int a1)
{
  int v2; // r6
  float v3; // s0
  int v4; // r5
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int result; // r0

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v5 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v4 + 4 * ((v5 + 18) >> 5) + 2224) & (1 << ((v5 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v4 + 4 * ((v5 + 22) >> 5) + 2224) & (1 << ((v5 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v4 + 4 * ((v5 + 28) >> 5) + 2224) & (1 << ((v5 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v4 + 8 * v5 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v5 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  result = *(unsigned __int8 *)(*(_DWORD *)v6 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90A70);
  return result;
}
