/* sub_60264900
 * address: 0x60264900   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60264900(int a1, const char *a2, int a3)
{
  int v6; // r0
  int v7; // r4
  _DWORD *v8; // t1
  int v9; // r1
  unsigned int v10; // r0
  int *v11; // r1
  unsigned int v12; // r0
  int result; // r0
  int (**v14)(); // [sp+0h] [bp-28h] BYREF
  const char *v15; // [sp+4h] [bp-24h]

  v14 = &sead__SafeStringBase__vtable;
  v15 = "bros";
  v6 = LoadResource(ResourceMgrRelated_instance, &v14);
  v8 = *(_DWORD **)(a1 + 6300);
  v7 = a1 + 6300;
  v14 = &sead__SafeStringBase__vtable;
  v15 = a2;
  sub_60421938(v8, v6, (int)&v14);
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v7 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v10 )
    v9 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), a3);
  v11 = *(int **)(*(_DWORD *)v7 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v7 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v12 )
    v11 += v12;
  result = *v11;
  *(_DWORD *)(*v11 + 24) = 1065353216;
  return result;
}
