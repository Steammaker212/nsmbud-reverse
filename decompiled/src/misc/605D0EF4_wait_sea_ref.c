/* wait_sea_ref
 * address: 0x605D0EF4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall wait_sea_ref(int a1)
{
  int ResArchiveById; // r5
  _DWORD *v3; // r0
  _BYTE *v4; // r4
  _DWORD *v5; // t1
  const char *v6; // r7
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int (**v10)(); // [sp+0h] [bp-20h] BYREF
  const char *v11; // [sp+4h] [bp-1Ch]

  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5 = *(_DWORD **)(a1 + 6100);
  v4 = (_BYTE *)(a1 + 6100);
  v3 = v5;
  if ( v4[308] )
  {
    v10 = &sead__SafeStringBase__vtable;
    v6 = "wait_sea";
  }
  else
  {
    v10 = &sead__SafeStringBase__vtable;
    v6 = "wait";
  }
  v11 = v6;
  sub_60421938(v3, ResArchiveById, (int)&v10);
  v7 = **(_DWORD **)(*(_DWORD *)v4 + 28);
  v10 = &sead__SafeStringBase__vtable;
  v11 = v6;
  sub_60446088(v7, ResArchiveById, &v10);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
}
