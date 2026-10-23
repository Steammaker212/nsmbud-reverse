/* skl_root_ref_31DD64
 * address: 0x6031DD64   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_31DD64(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  _DWORD v7[8]; // [sp+0h] [bp-58h] BYREF
  _DWORD v8[14]; // [sp+20h] [bp-38h] BYREF

  v2 = *(int **)(a1 + 7124);
  v1 = (_DWORD **)(a1 + 7124);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "skl_root";
  v5 = v4(v3, v8);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v8);
  v7[0] = 0;
  v7[1] = v8[3];
  *(float *)&v7[2] = *(float *)&v8[7] + -12.5;
  v7[3] = v8[11];
  v7[6] = dword_60C937A4;
  v7[5] = dword_60C937A0;
  v7[4] = dword_60C9379C;
  v7[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(v1 - 243), v7, 1u);
}
