/* sub_602AABCC
 * address: 0x602AABCC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AABCC(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r0
  int result; // r0
  float v6; // s0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v4 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v4 + 18) >> 5) + 2224) & (1 << ((v4 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v4 + 22) >> 5) + 2224) & (1 << ((v4 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v4 + 28) >> 5) + 2224) & (1 << ((v4 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v3 + 8 * v4 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v4 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
  {
    v6 = FIELD_F32(a1, 124);
    if ( v6 > 0.0 )
      FIELD_F32(a1, 124) = v6 * -0.2;
  }
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90AB0);
  }
  return result;
}
