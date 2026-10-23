/* balloon_ref_746FA0
 * address: 0x60746FA0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_ref_746FA0(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r4
  int v5; // r5
  void (__fastcall *v6)(int, int, _DWORD); // r6
  int v7; // r0
  void (__fastcall *v8)(int, int, _DWORD); // r6
  int v9; // r0
  int (__fastcall *v10)(int, Vec3 *); // r2
  int v11; // r6
  int (__fastcall *v12)(int, Vec3 *); // r2
  int v13; // r5
  int v14; // r7
  int v15; // r0
  unsigned int v16; // r1
  int *v17; // r0
  int v18; // r7
  Vec3 v19[3]; // [sp+4h] [bp-24h] BYREF

  result = FIELD_U8(a1, 708);
  if ( !result )
  {
    v3 = FIELD_F32(a1, 112);
    v19[0].x = FIELD_F32(a1, 108);
    v19[0].y = v3;
    v19[0].z = 4500.0;
    FIELD_U32(a1, 692) = 1056964608;
    v4 = a1 + 692;
    FIELD_U32(v4, 4) = 1056964608;
    FIELD_U32(v4, 8) = 1056964608;
    EffectData_create(443, v19, 0, v4);
    v5 = **(_DWORD **)(v4 - 48);
    v6 = *(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v5 + 136);
    v7 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 124))(v5, &dword_60CBE588);
    v6(v5, v7, 0);
    v8 = *(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v5 + 136);
    v9 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 124))(v5, &dword_60CBE590);
    v8(v5, v9, 0);
    v10 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v5 + 84);
    LODWORD(v19[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v19[0].y) = "balloon";
    v11 = v10(v5, v19);
    v12 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v5 + 84);
    LODWORD(v19[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v19[0].y) = "back";
    v13 = v12(v5, v19);
    v14 = **(_DWORD **)(*(_DWORD *)(v4 - 48) + 12);
    sub_60448AF4(v14, v11);
    sub_60448AF4(v14, v13);
    v15 = *(_DWORD *)(v4 - 48);
    v16 = FIELD_U32(v15, 8);
    v17 = *(int **)(v15 + 12);
    if ( v16 > 1 )
      ++v17;
    v18 = *v17;
    sub_60448AF4(*v17, v11);
    sub_60448AF4(v18, v13);
    FIELD_U8(v4, 16) = 1;
    return 1;
  }
  return result;
}
