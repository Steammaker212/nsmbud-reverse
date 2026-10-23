/* sub_607D1330
 * address: 0x607D1330   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D1330(int a1)
{
  int v2; // r0
  int *v3; // r5
  int *v4; // r6
  int v5; // r1
  _DWORD *v6; // r0
  float v7; // s0
  int v8; // r1
  int v9; // r1
  int v10; // r4
  int v11; // t1
  int v12; // r0
  int v13; // r1
  int result; // r0

  v3 = (int *)(a1 + 11432);
  v2 = FIELD_U32(a1, 11432);
  if ( v2 == 2 )
  {
    v8 = FIELD_U32(a1, 11444);
    if ( v8 )
    {
      v9 = v8 - 1;
      FIELD_U32(a1, 11444) = v9;
      if ( v9 )
        goto LABEL_12;
    }
    *v3 = 0;
    v11 = FIELD_U32(a1, 11368);
    v10 = a1 + 11368;
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 140))(v11);
    v7 = FIELD_F32(v10, 68);
    v13 = v12;
    v6 = *(_DWORD **)v10;
    if ( v13 == 1 )
      goto LABEL_9;
  }
  else
  {
    if ( v2 != 1 )
      goto LABEL_12;
    v4 = (int *)(a1 + 11368);
    if ( (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 132))(FIELD_U32(a1, 11368), 9.0) != 1 )
      goto LABEL_12;
    *v3 = 2;
    FIELD_F32(a1, 11436) = sub_6079321C(*v4);
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)*v4 + 140))(*v4);
    v6 = (_DWORD *)*v4;
    if ( v5 == 1 )
    {
      v7 = 0.0;
LABEL_9:
      (*(void (__fastcall **)(_DWORD *, float))(*v6 + 112))(v6, v7);
      goto LABEL_12;
    }
    v7 = 0.0;
  }
  sub_60793088(v6, v7);
LABEL_12:
  result = *v3;
  if ( *v3 )
    return 1;
  return result;
}
