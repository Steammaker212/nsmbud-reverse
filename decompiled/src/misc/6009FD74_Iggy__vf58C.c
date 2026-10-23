/* Iggy__vf58C
 * address: 0x6009FD74   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B4A10
// 
// Overridden by: None
int __fastcall Iggy__vf58C(int a1)
{
  int v2; // r5
  float v3; // s0
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // r0
  bool v8; // nf
  int v9; // r2
  int v10; // r1
  void *v11; // r1

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
  {
    v7 = FIELD_U32(a1, 7496) - 1;
    v8 = FIELD_U32(a1, 7496) - 2 < 0;
    FIELD_U32(a1, 7496) = v7;
    if ( !(v8 ^ __OFSUB__(v7, 1) | (v7 == 1)) )
      return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C83194, v3);
    if ( ((v9 = FIELD_U32(a1, 80),
           v10 = a1 + 648,
           (*(_DWORD *)(a1 + 648 + 4 * ((v9 + 18) >> 5) + 2224) & (1 << ((v9 + 18) & 0x1F))) != 0)
       || (*(_DWORD *)(v10 + 4 * ((v9 + 22) >> 5) + 2224) & (1 << ((v9 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v10 + 4 * ((v9 + 28) >> 5) + 2224) & (1 << ((v9 + 28) & 0x1F))) == 0 )
    {
      return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C83194, v3);
    }
    else
    {
      if ( v7 == 1 )
        v11 = &unk_60C82510;
      else
        v11 = &unk_60C82594;
      return (*(int (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, v11, v3);
    }
  }
  return result;
}
