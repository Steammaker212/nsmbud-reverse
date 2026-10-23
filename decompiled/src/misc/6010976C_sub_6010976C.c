/* sub_6010976C
 * address: 0x6010976C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010976C(int a1)
{
  int v2; // r5
  int v3; // r1
  __int16 v4; // r2
  int result; // r0
  int v6; // r1
  unsigned int v7; // r2
  bool v8; // zf
  float v9; // s0
  float v10; // s2
  int (__fastcall *v11)(int, void *); // r2
  void *v12; // r1

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v3, v4);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  v8 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)(*(_DWORD *)v6 + 28) & 0x20;
    v8 = result == 0;
  }
  if ( !v8 )
  {
    v9 = FIELD_F32(a1, 108);
    v10 = FIELD_F32(dword_60CC6484, 116);
    if ( v9 <= (float)((float)(v10 + FIELD_F32(a1, 7488)) + -1.0)
      && v9 >= (float)((float)(v10 + FIELD_F32(a1, 7492)) + 1.0) )
    {
      v11 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v12 = &unk_60C865A4;
    }
    else
    {
      v11 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v12 = &unk_60C863E4;
    }
    return v11(a1, v12);
  }
  return result;
}
