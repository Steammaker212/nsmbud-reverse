/* sub_60224FD4
 * address: 0x60224FD4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60224FD4(int a1, _DWORD *a2)
{
  int v4; // r0
  char v5; // r12
  int v6; // r0
  int *v7; // r5
  int v8; // r4
  int v9; // r7
  int v10; // r0
  _DWORD v12[2]; // [sp+8h] [bp-48h] BYREF
  int (**v13)(); // [sp+10h] [bp-40h] BYREF
  int *v14; // [sp+14h] [bp-3Ch]
  int v15; // [sp+18h] [bp-38h]
  int v16; // [sp+1Ch] [bp-34h] BYREF

  v14 = &v16;
  v13 = &BufferedSafeStringBase_char_vtable_probably;
  v15 = 14;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v13);
  *(_BYTE *)v14 = 0;
  v13 = &off_60BD9308;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = a2[1];
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = v4;
  if ( sub_60225174(a1, &v13, v12) != 1 )
    return 0;
  v6 = FIELD_U32(a1, 28);
  if ( !v6 )
    return 0;
  v7 = *(int **)(a1 + 36);
  v8 = 4 * v6;
  while ( 1 )
  {
    v9 = *v7;
    if ( ((unsigned int)&dword_60C8968C & ~(1612861644 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
    {
      dword_60C89688 = (int)&off_60BD5510;
      _cxa_guard_release(&dword_60C8968C);
    }
    v10 = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C89688);
    if ( v9 )
    {
      if ( v10 == 1 && (*(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 52))(v9, &v13) )
        break;
    }
    v8 -= 4;
    ++v7;
    if ( !v8 )
      return 0;
  }
  return v9;
}
