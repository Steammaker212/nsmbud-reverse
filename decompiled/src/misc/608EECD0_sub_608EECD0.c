/* sub_608EECD0
 * address: 0x608EECD0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EECD0(_DWORD *a1, int a2)
{
  int v4; // r5
  void (__fastcall ***v5)(_DWORD, int, int); // r0
  int v6; // r6
  int v7; // r5
  void (__fastcall ***v8)(_DWORD, int, int); // r0
  void (__fastcall **v9)(_DWORD, int, int); // r1
  int v10; // r2

  v4 = (int)(a1 + 10);
  sead__MethodTreeNode__lock((int)(a1 + 10));
  v5 = (void (__fastcall ***)(_DWORD, int, int))a1[28];
  if ( a2 == 1 )
  {
    if ( v5 )
      (**v5)(v5, v4, 3);
    v6 = 3;
    a1[27] = 3;
    sead__MethodTreeNode__unlock(v4);
    v7 = (int)(a1 + 70);
    sead__MethodTreeNode__lock((int)(a1 + 70));
    v8 = (void (__fastcall ***)(_DWORD, int, int))a1[88];
    if ( v8 )
    {
      v9 = *v8;
      v10 = 3;
LABEL_10:
      (*v9)(v8, v7, v10);
    }
  }
  else
  {
    if ( v5 )
      (**v5)(v5, v4, 0);
    v6 = 0;
    a1[27] = 0;
    sead__MethodTreeNode__unlock(v4);
    v7 = (int)(a1 + 70);
    sead__MethodTreeNode__lock((int)(a1 + 70));
    v8 = (void (__fastcall ***)(_DWORD, int, int))a1[88];
    if ( v8 )
    {
      v9 = *v8;
      v10 = 0;
      goto LABEL_10;
    }
  }
  a1[87] = v6;
  return sead__MethodTreeNode__unlock(v7);
}
