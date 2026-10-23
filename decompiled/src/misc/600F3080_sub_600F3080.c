/* sub_600F3080
 * address: 0x600F3080   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F3080(int a1)
{
  int v2; // r5
  int v3; // r0
  int *v4; // r6
  unsigned int v5; // r1
  unsigned int v6; // r1
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0
  int v10; // r0
  void *v11; // r1

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (int *)(a1 + 7496);
  v3 = FIELD_U32(a1, 7496);
  if ( v3 == 3 )
  {
    v5 = FIELD_U32(a1, 7136);
    if ( !v5 || !ActorMgrRelated_getById(ActorMgr__instance + 27168, v5) )
      FIELD_U32(a1, 8432) = FIELD_U32(a1, 80);
    v3 = *v4;
  }
  if ( v3 == 2 )
  {
    v6 = FIELD_U32(a1, 7136);
    if ( !v6 || !ActorMgrRelated_getById(ActorMgr__instance + 27168, v6) )
      sub_600F1664(a1);
  }
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
  if ( (result & 0x20) != 0 )
  {
    v10 = *v4 - 1;
    *v4 = v10;
    if ( v10 < 2 )
      v11 = &unk_60C85504;
    else
      v11 = &unk_60C854BC;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v11);
  }
  return result;
}
