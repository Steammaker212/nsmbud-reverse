/* cobStarGate_ref_1FBE34
 * address: 0x601FBE34   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobStarGate_ref_1FBE34(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  char v5; // r12
  _DWORD v7[16]; // [sp+0h] [bp-40h] BYREF

  v2 = **(_DWORD **)(a1 + 268);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "cobStarGate";
  v4 = v3(v2, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 268) + 108))(**(_DWORD **)(a1 + 268), v4, v7);
  FIELD_U32(a1, 80) = v7[3];
  FIELD_U32(a1, 84) = v7[7];
  FIELD_U32(a1, 88) = v7[11];
  FIELD_U32(a1, 288) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 20);
  EffectData_create(1133, (Vec3 *)(a1 + 80), 0, 0);
  if ( ((unsigned int)&dword_60C8C0D0 & ~(1612693220 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
  {
    dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0D8 = (int)"fall";
    dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0E0 = (int)"enter";
    dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0E8 = (int)"wait";
    sub_60000288();
    _cxa_guard_release(&dword_60C8C0D0);
  }
  sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C0DC, 0);
  FIELD_U32(a1, 272) = 1;
  return sub_601E4C88((_DWORD *)dword_60C8B13C, 109, (_DWORD *)(a1 + 80));
}
