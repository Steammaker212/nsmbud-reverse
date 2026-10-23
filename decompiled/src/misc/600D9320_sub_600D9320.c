/* sub_600D9320
 * address: 0x600D9320   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D9320(int a1)
{
  int v2; // r6
  _DWORD *v3; // r5
  unsigned int v4; // r2
  int v5; // r0
  int ResArchiveById; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r2
  unsigned int v10; // r1
  int result; // r0
  int v12; // r0
  bool v13; // nf
  int *v14; // r1

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = *(_DWORD **)v2;
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v5 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 && **(_BYTE **)(FIELD_U32(a1, 7104) + 12) )
  {
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    sub_60421938(v3, ResArchiveById, FIELD_U32(a1, 7104) + 8);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
    v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
      v9 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = FIELD_U32(a1, 7760);
  }
  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84498);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    v12 = FIELD_U32(a1, 7496) - 1;
    v13 = FIELD_U32(a1, 7496) - 3 < 0;
    FIELD_U32(a1, 7496) = v12;
    if ( v13 != __OFSUB__(v12, 2) )
    {
      if ( v12 == 1 )
        v14 = &dword_60C84520;
      else
        v14 = (int *)&unk_60C845B0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v14);
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C84520);
    }
  }
  return result;
}
