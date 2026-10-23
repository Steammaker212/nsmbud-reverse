/* sub_601274CC
 * address: 0x601274CC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601274CC(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  _BYTE *v5; // r1
  float v6; // s0
  float v7; // s2

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
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
    v5 = (_BYTE *)(a1 + 8137);
    if ( !FIELD_U8(a1, 8137) )
    {
      v6 = FIELD_F32(a1, 108);
      v7 = FIELD_F32(dword_60CC6484, 116);
      if ( v6 >= (float)(v7 + FIELD_F32(a1, 7488)) )
      {
        if ( !FIELD_U32(a1, 80) )
        {
LABEL_17:
          *v5 = 1;
          FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
          *v2 = 1;
          goto LABEL_7;
        }
      }
      else if ( v6 <= (float)(v7 + FIELD_F32(a1, 7492)) && FIELD_U32(a1, 80) == 1 )
      {
        goto LABEL_17;
      }
      *v5 = 0;
    }
  }
LABEL_7:
  if ( !FIELD_U16(a1, 6276) )
  {
    FIELD_U8(a1, 8128) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86E9C);
    FIELD_U32(a1, 104) = 1022739087;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
}
