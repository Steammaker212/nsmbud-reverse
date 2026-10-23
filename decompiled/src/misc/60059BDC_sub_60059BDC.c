/* sub_60059BDC
 * address: 0x60059BDC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60059BDC(int a1)
{
  EffectData *v2; // r5
  _DWORD **v3; // r4
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  Vec3 v9; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v10[16]; // [sp+10h] [bp-40h] BYREF

  sub_60057D38(a1);
  v2 = (EffectData *)(a1 + 9048);
  if ( sub_60235E50(a1 + 9048) == 1 )
  {
    v4 = *(int **)(a1 + 7204);
    v3 = (_DWORD **)(a1 + 7204);
    v5 = *v4;
    v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v4 + 84);
    v10[0] = &sead__SafeStringBase__vtable;
    v10[1] = "spine";
    v7 = v6(v5, v10);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v7, v10);
    LODWORD(v9.x) = v10[3];
    LODWORD(v9.y) = v10[7];
    LODWORD(v9.z) = v10[11];
    EffectData_update(v2, &v9, 0, (Vec3 *)(v3 - 1765));
  }
  return 1;
}
