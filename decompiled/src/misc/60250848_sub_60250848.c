/* sub_60250848
 * address: 0x60250848   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60250848(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v10[6]; // [sp+0h] [bp-18h] BYREF

  v3 = a1 + 6304;
  v2 = *(_DWORD **)(a1 + 6304);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "dead";
  sub_60421938(v2, ResArchiveById, (int)v10);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  Enemy__beginState_DieFumi((Enemy *)a1);
  FIELD_U32(a1, 6328) = 21;
  return 6328;
}
