/* wing_kuri_ref
 * address: 0x60362B90   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wing_kuri_ref(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // t1
  int Resource; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[6]; // [sp+8h] [bp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *))(*a1 + 732))(a1);
  v3 = (_DWORD *)a1[1706];
  v2 = a1 + 1706;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "wing";
  Resource = LoadResource(ResourceMgrRelated_instance, v11);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "wing_kuri";
  sub_60421938(v3, Resource, (int)v10);
  v5 = *(_DWORD *)(*v2 + 12);
  v6 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v2 + 12);
  v8 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  *((_WORD *)v2 - 274) = 0;
  *(v2 - 1681) = -1107296256;
  *(v2 - 1676) = dword_60B00238[*(v2 - 1686)];
  *(v2 - 1675) = 0;
  *(v2 - 1674) = 0;
  *(v2 - 1672) = -1065353216;
  *(_WORD *)((char *)v2 + 17) = 64;
  return 64;
}
