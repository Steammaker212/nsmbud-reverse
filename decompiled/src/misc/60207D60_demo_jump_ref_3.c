/* demo_jump_ref_3
 * address: 0x60207D60   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_jump_ref_3(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  _DWORD v13[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (_DWORD *)a1[67];
  v3 = a1[68];
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "demo_jump";
  sub_60421938(v2, v3, (int)v13);
  v4 = (_DWORD *)a1[67];
  v5 = v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v8 = (_DWORD *)a1[67];
  v9 = v8[3];
  v10 = v8[2];
  v11 = v8[17];
  if ( v10 > v11 )
    v9 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v9 + 4) = 1121845248;
  a1[89] = 56;
  return sub_601E4C88((_DWORD *)dword_60C8B13C, 169, a1 + 20);
}
