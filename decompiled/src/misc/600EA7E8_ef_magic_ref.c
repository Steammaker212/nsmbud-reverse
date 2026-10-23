/* ef_magic_ref
 * address: 0x600EA7E8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_magic_ref(int a1)
{
  int **v2; // r6
  int v3; // r1
  __int16 v4; // r2
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, _DWORD *); // r2
  int v11; // r0
  Vec3 a3; // [sp+14h] [bp-54h] BYREF
  _DWORD v13[18]; // [sp+20h] [bp-48h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v3, v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  v5 = (*v2)[3];
  v6 = (*v2)[17];
  if ( (*v2)[2] > v6 )
    v5 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
  if ( (result & 0x20) != 0 )
  {
    v8 = a1;
    if ( FIELD_U8(a1, 8132) )
      v8 = FIELD_U32(a1, 56);
    if ( FIELD_U8(v8, 8232) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      v9 = **v2;
      v10 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 84);
      v13[0] = &sead__SafeStringBase__vtable;
      v13[1] = "ef_magic";
      v11 = v10(v9, v13);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v11, v13);
      sub_602372C0(a1 + 7804, 1046, v13, 0);
      LODWORD(a3.x) = v13[3];
      LODWORD(a3.y) = v13[7];
      LODWORD(a3.z) = v13[11];
      LightSource_update1((LightSource *)(a1 + 8264), 34, &a3, 0, 0, 0, 0, 0, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832B4);
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
    }
  }
  return result;
}
