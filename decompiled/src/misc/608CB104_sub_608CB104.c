/* sub_608CB104
 * address: 0x608CB104   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608CB104(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int *v9; // r5
  int *v10; // r10
  int *v11; // r7
  int *v12; // r1
  int v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r1
  _DWORD *v16; // r0
  int v17; // r1
  bool v18; // zf
  int v19; // r8
  void (__fastcall *v20)(int, int, int); // r5
  int v21; // r2
  int v23; // [sp+4h] [bp-2Ch]
  int v24; // [sp+8h] [bp-28h]

  v9 = (int *)a1[4];
  v10 = a1 + 3;
  if ( v9 == a1 + 3 )
  {
    v16 = (_DWORD *)a1[2];
    v17 = (int)(a1 + 1);
    v11 = 0;
    v18 = v16 == a1 + 1;
    if ( v16 != a1 + 1 )
    {
      v17 = *(v16 - 27);
      v18 = v17 == 255;
    }
    if ( v18 || v17 > a3 )
      return v11;
    v19 = (int)(v16 - 140);
    v24 = *(v16 - 40);
    v20 = (void (__fastcall *)(int, int, int))*(v16 - 39);
    v23 = *(v16 - 38);
    sub_608C93B0((int)(v16 - 140));
    sub_608C932C(v19);
    if ( v20 )
      v20(v19, 2, v23);
    if ( !v24 )
      return v11;
    v9 = (int *)a1[4];
  }
  v11 = 0;
  if ( sub_608C9204((int)(v9 - 140), a2, a3, a4, a5) == 1 )
  {
    *(v9 - 27) = (unsigned __int8)a3;
    if ( v9 != v10 )
    {
      v12 = (int *)v9[1];
      v13 = *v12;
      *(_DWORD *)(*v9 + 4) = v12;
      *v12 = *v9;
      FIELD_U32(v13, 4) = v9;
      *v9 = v13;
    }
    v14 = (_DWORD *)a1[2];
    v15 = a1 + 1;
    if ( a1 + 1 != v14 )
    {
      while ( *(_DWORD *)(*v15 - 108) > *(v9 - 27) )
      {
        v15 = (_DWORD *)*v15;
        if ( v15 == v14 )
          goto LABEL_18;
      }
      v14 = v15;
    }
LABEL_18:
    v21 = *v9;
    v11 = v9 - 140;
    *v9 = *v15;
    FIELD_U32(v21, 4) = v14;
    *(_DWORD *)(*v14 + 4) = v9;
    *v14 = v21;
  }
  return v11;
}
