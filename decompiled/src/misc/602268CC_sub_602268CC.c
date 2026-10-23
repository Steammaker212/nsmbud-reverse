/* sub_602268CC
 * address: 0x602268CC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602268CC(_DWORD *a1, int **a2)
{
  int Resource; // r6
  int v5; // r7
  int *v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int result; // r0
  int v10; // r6
  int *v11; // r0
  int v12; // r3
  int v13; // r1
  int (**v14)(); // [sp+0h] [bp-20h] BYREF
  int *v15; // [sp+4h] [bp-1Ch]

  Resource = LoadResource(ResourceMgrRelated_instance, a1 + 448);
  if ( sub_602265DC(Resource, (const char **)a2) >= 0 )
  {
    v5 = a1[2];
    ((void (__fastcall *)(int **))(*a2)[3])(a2);
    sub_60224B54(a1, v5, a2[1], -1);
  }
  if ( sub_6043AE64(Resource, a2) >= 0 )
  {
    ((void (__fastcall *)(int **))(*a2)[3])(a2);
    v6 = a2[1];
    v14 = &sead__SafeStringBase__vtable;
    v15 = v6;
    v7 = sub_6022EB7C();
    if ( v7 )
    {
      v8 = a1[7];
      if ( v8 < a1[8] )
      {
        *(_DWORD *)(a1[9] + 4 * v8) = v7;
        ++a1[7];
      }
      ++a1[444];
    }
  }
  result = sub_6043AED0(Resource, a2);
  if ( result >= 0 )
  {
    v10 = a1[2];
    ((void (__fastcall *)(int **))(*a2)[3])(a2);
    v11 = a2[1];
    v12 = 0;
    if ( a1[2] == v10 )
      v12 = a1[445] + 5;
    v14 = &sead__SafeStringBase__vtable;
    v15 = v11;
    result = sub_6022EC58(a1, v10, &v14, v12);
    if ( result )
    {
      v13 = a1[7];
      if ( v13 < a1[8] )
      {
        *(_DWORD *)(a1[9] + 4 * v13) = result;
        ++a1[7];
      }
      result = a1[445] + 1;
      a1[445] = result;
    }
  }
  return result;
}
