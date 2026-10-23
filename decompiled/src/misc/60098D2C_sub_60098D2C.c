/* sub_60098D2C
 * address: 0x60098D2C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60098D2C(int a1)
{
  int **v2; // r7
  int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // r3
  int v7; // r6
  void (__fastcall *v8)(int, int, _BYTE *); // r8
  int v9; // r0
  int result; // r0
  _BYTE v11[12]; // [sp+4h] [bp-54h] BYREF
  float v12; // [sp+10h] [bp-48h]
  float v13; // [sp+20h] [bp-38h]
  Vec3 v14; // [sp+34h] [bp-24h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  v3 = (*v2)[3];
  v4 = (*v2)[2];
  v5 = (*v2)[17];
  v6 = v3;
  if ( v4 > v5 )
    v6 = v3 + 4 * v5;
  if ( *(float *)(*(_DWORD *)v6 + 20) >= 25.0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
    v7 = **v2;
    v8 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v7 + 108);
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1120))(a1);
    v8(v7, v9, v11);
    v14.x = v12;
    v14.y = v13;
    v14.z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8328), 1020, &v14, 0, 0);
    v3 = (*v2)[3];
    v4 = (*v2)[2];
    v5 = (*v2)[17];
  }
  if ( v4 > v5 )
    v3 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82530);
  return result;
}
