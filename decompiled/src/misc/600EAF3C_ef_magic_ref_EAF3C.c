/* ef_magic_ref_EAF3C
 * address: 0x600EAF3C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_magic_ref_EAF3C(int **a1)
{
  int **v2; // r6
  int v3; // r1
  __int16 v4; // r2
  float v5; // s0
  int result; // r0
  int v7; // r0
  int (__fastcall *v8)(int, _DWORD *); // r2
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  Vec3 a3; // [sp+14h] [bp-54h] BYREF
  _DWORD v13[18]; // [sp+20h] [bp-48h] BYREF

  v2 = a1 + 1774;
  j_ModelWrapper_updateAnims(a1[1774]);
  if ( !*((_BYTE *)v2 + 1036) )
  {
    a1[1781] = (int *)sub_600B2FD4((int)a1, v3, v4);
    ((void (__fastcall *)(int **))(*a1)[259])(a1);
    ((void (__fastcall *)(int **))(*a1)[260])(a1);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
  result = (int)a1[1773];
  if ( result == 2 )
  {
    v10 = (*v2)[3];
    v11 = (*v2)[17];
    if ( (*v2)[2] > v11 )
      v10 += 4 * v11;
    result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
    if ( (result & 0x20) != 0 )
      return ((int (__fastcall *)(int **, void *, float))(*a1)[48])(a1, &unk_60C850A8, v5);
  }
  else if ( result == 1 )
  {
    ((void (__fastcall *)(int **, float))(*a1)[261])(a1, v5);
    v7 = **v2;
    v8 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 84);
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = "ef_magic";
    v9 = v8(v7, v13);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v9, v13);
    sub_602372C0(a1 + 1951, 1046, v13, 0);
    LODWORD(a3.x) = v13[3];
    LODWORD(a3.y) = v13[7];
    LODWORD(a3.z) = v13[11];
    LightSource_update1((LightSource *)(a1 + 2066), 0x22, &a3, 0, 0, 0, 0, 0, 0);
    result = ((int (__fastcall *)(int **))loc_600B3E14)(a1);
    if ( result )
    {
      ((void (__fastcall *)(int **))(*a1)[279])(a1);
      ((void (__fastcall *)(int **))(*a1)[294])(a1);
      ((void (__fastcall *)(int **))(*a1)[289])(a1);
      ((void (__fastcall *)(int **))(*a1)[333])(a1);
      a1[1773] = (int *)2;
      return 2;
    }
  }
  return result;
}
