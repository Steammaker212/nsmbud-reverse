/* sub_60210E88
 * address: 0x60210E88   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60210E88(int a1)
{
  char v1; // r12
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r6
  int v6; // r1
  unsigned int v7; // r0
  Vec3 v9; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v10[12]; // [sp+10h] [bp-40h] BYREF
  float v11; // [sp+1Ch] [bp-34h]
  float v12; // [sp+2Ch] [bp-24h]
  float v13; // [sp+3Ch] [bp-14h]

  if ( ((unsigned int)&algn_60C8CF64[8] & ~(1612779176 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8CF64[8]) )
  {
    dword_60C8CF9C = (int)&sead__SafeStringBase__vtable;
    dword_60C8CFA0 = (int)"teresaA_root";
    dword_60C8CFA4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8CFA8 = (int)"teresa_otherA_root";
    sub_60000288();
    _cxa_guard_release((__guard *)&algn_60C8CF64[8]);
  }
  v3 = FIELD_U32(a1, 464);
  v4 = 0;
  v5 = a1 + 372;
  if ( v3 < 2 )
    v4 = FIELD_U32(a1, 464);
  v6 = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(v5 + 4 * v4) + 84))(
         **(_DWORD **)(v5 + 4 * v4),
         &dword_60C8CF60[2 * v3 + 15]);
  v7 = FIELD_U32(a1, 464);
  if ( v7 >= 2 )
    v7 = 0;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(v5 + 4 * v7) + 108))(
    **(_DWORD **)(v5 + 4 * v7),
    v6,
    v10);
  v9.x = v11;
  v9.y = v12;
  v9.z = v13;
  return EffectData_create(903, &v9, 0, 0);
}
