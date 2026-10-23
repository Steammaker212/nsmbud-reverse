/* ef_magic_ref_EAC10
 * address: 0x600EAC10   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall ef_magic_ref_EAC10(_DWORD *a1)
{
  int *v2; // r8
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r1
  __int16 v7; // r2
  int *result; // r0
  int v9; // r1
  Vec3 a3; // [sp+14h] [bp-54h] BYREF
  _DWORD v11[18]; // [sp+20h] [bp-48h] BYREF

  v2 = a1 + 1781;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1044))(a1);
  v3 = *(_DWORD *)a1[1774];
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "ef_magic";
  v5 = v4(v3, v11);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)a1[1774] + 108))(*(_DWORD *)a1[1774], v5, v11);
  sub_602372C0(a1 + 1951, 1046, v11, 0);
  LODWORD(a3.x) = v11[3];
  LODWORD(a3.y) = v11[7];
  LODWORD(a3.z) = v11[11];
  LightSource_update1((LightSource *)(a1 + 2066), 34, &a3, 0, 0, 0, 0, 0, 0);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1312))(a1);
  j_ModelWrapper_updateAnims(a1[1774]);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  *v2 = sub_600B2FD4((int)a1, v6, v7);
  if ( !*((_BYTE *)a1 + 8132) )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1036))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1040))(a1);
  }
  result = a1 + 1782;
  v9 = a1[1782];
  if ( !v9 )
    return (*(int *(__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C85084);
  *result = v9 - 1;
  if ( v9 <= 1 )
    return (*(int *(__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C85084);
  return result;
}
