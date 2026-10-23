/* sub_60125D0C
 * address: 0x60125D0C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60125D0C(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  unsigned int *v4; // r5
  void (__fastcall *v5)(int, int *); // r2
  unsigned int v6; // r0
  _BYTE *v8; // r1
  float v9; // s0
  float v10; // s2

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = (_BYTE *)(a1 + 8136);
  if ( !FIELD_U8(a1, 8136) )
  {
    v3 = FIELD_U32(a1, 2872);
    if ( (v3 & 0x440000) != 0 && (v3 & 0x10000000) == 0 || (v3 & 0x880000) != 0 && (v3 & 0x20000000) == 0 )
    {
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      *v2 = 1;
      goto LABEL_7;
    }
    v8 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v9 = FIELD_F32(a1, 108);
      v10 = FIELD_F32(dword_60CC6484, 116);
      if ( v9 >= (float)(v10 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_21:
          *v8 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v2 = 1;
          goto LABEL_7;
        }
      }
      else if ( v9 <= (float)(v10 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_21;
      }
      *v8 = 0;
    }
  }
LABEL_7:
  if ( !FIELD_U16(a1, 6276) )
  {
    v4 = (unsigned int *)(a1 + 8124);
    v5 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    if ( FIELD_U32(a1, 8124) == 5 )
    {
      v5(a1, &dword_60C86F7C);
    }
    else
    {
      v5(a1, (int *)&unk_60C87020);
      v6 = *v4 + 1;
      if ( v6 > 5 )
        v6 = 0;
      *v4 = v6;
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
