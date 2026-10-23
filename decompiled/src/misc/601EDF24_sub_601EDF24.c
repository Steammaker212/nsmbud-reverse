/* sub_601EDF24
 * address: 0x601EDF24   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EDF24(_DWORD *a1)
{
  char v1; // r12
  int *v3; // r6
  const void *v4; // r9
  signed int v5; // r5
  bool v6; // cc
  int v7; // r0
  int (**v9)(); // [sp+8h] [bp-58h] BYREF
  int *v10; // [sp+Ch] [bp-54h]
  int v11; // [sp+10h] [bp-50h]
  int v12; // [sp+14h] [bp-4Ch] BYREF
  _DWORD v13[11]; // [sp+34h] [bp-2Ch] BYREF

  if ( ((unsigned int)&dword_60C8B540[2] & ~(1612635972 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B540[2]) )
  {
    dword_60C8B55C = (int)&sead__SafeStringBase__vtable;
    dword_60C8B560 = (int)"W103";
    _cxa_guard_release(&dword_60C8B540[2]);
  }
  v10 = &v12;
  v9 = &BufferedSafeStringBase_char_vtable_probably;
  v11 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v9);
  v9 = &off_60BD4C38;
  v3 = v10;
  (*(void (__fastcall **)(int *))(dword_60C8B55C + 12))(&dword_60C8B55C);
  v4 = (const void *)dword_60C8B560;
  if ( v3 != (int *)dword_60C8B560 )
  {
    (*(void (__fastcall **)(int *))(dword_60C8B55C + 12))(&dword_60C8B55C);
    v5 = 0;
    while ( *(_BYTE *)(dword_60C8B560 + v5) )
    {
      if ( !*(_BYTE *)(dword_60C8B560 + v5 + 1) )
      {
        ++v5;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8B560 + v5 + 2) )
      {
        v5 += 2;
        break;
      }
      v6 = v5 + 2 < 0x80000;
      v5 += 3;
      if ( !v6 )
      {
        v5 = 0;
        break;
      }
    }
    if ( v5 >= v11 )
      v5 = v11 - 1;
    qmemcpy(v3, v4, v5);
    *((_BYTE *)v3 + v5) = 0;
  }
  v9 = &off_60BD4C20;
  sub_601A02B0(dword_60C89E00, a1 + 20, 0, 0, (int)&v9);
  v13[0] = 0;
  v13[1] = 0;
  v7 = sub_601A443C(dword_60C89E18, 0, 0);
  v13[2] = sub_60181AB4(v7, &v9);
  sub_6019EC34(a1 + 97, v13);
  a1[29] = 0;
  a1[30] = 0;
  a1[31] = 0;
  sub_601ECD14((int)a1, 0);
  a1[45] = 0;
  a1[94] = 80;
  a1[103] = -894784854;
  a1[96] = -268435456;
  a1[32] = 1075000115;
  a1[33] = 1075000115;
  a1[34] = 1075000115;
  return 1075000115;
}
