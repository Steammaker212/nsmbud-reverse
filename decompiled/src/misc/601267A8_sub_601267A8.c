/* sub_601267A8
 * address: 0x601267A8   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601267A8(int a1)
{
  int v2; // r5
  _BYTE *v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _BYTE *v9; // r1
  float v10; // s0
  float v11; // s2

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (_BYTE *)(a1 + 8136);
  if ( !FIELD_U8(a1, 8136) )
  {
    v4 = FIELD_U32(a1, 2872);
    if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      *v3 = 1;
      goto LABEL_7;
    }
    v9 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v10 = FIELD_F32(a1, 108);
      v11 = FIELD_F32(dword_60CC6484, 116);
      if ( v10 >= (float)(v11 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_19:
          *v9 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v3 = 1;
          goto LABEL_7;
        }
      }
      else if ( v10 <= (float)(v11 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_19;
      }
      *v9 = 0;
    }
  }
LABEL_7:
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC((int *)a1, v5);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x10) != 0 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86E9C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
