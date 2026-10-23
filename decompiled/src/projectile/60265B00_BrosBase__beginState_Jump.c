/* BrosBase__beginState_Jump
 * address: 0x60265B00   size: 184   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BrosBase__beginState_Jump(int a1)
{
  int v2; // r0
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0
  int (**v10)(); // [sp+0h] [bp-18h] BYREF
  const char *v11; // [sp+4h] [bp-14h]

  v10 = &sead__SafeStringBase__vtable;
  v11 = "bros";
  v2 = LoadResource(ResourceMgrRelated_instance, &v10);
  v4 = *(_DWORD **)(a1 + 6300);
  v3 = a1 + 6300;
  v10 = &sead__SafeStringBase__vtable;
  v11 = "jump_md";
  sub_60421938(v4, v2, (int)&v10);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  result = *(_DWORD *)v7;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  return result;
}
