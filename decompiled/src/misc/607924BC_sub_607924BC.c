/* sub_607924BC
 * address: 0x607924BC   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607924BC(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int *v5; // r3
  unsigned int v6; // r2
  int *result; // r0
  int *v8; // r1
  int v9; // r8
  int v10; // r7
  int v11; // r9
  bool v12; // zf
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  bool v22; // zf
  int v23; // r0
  bool v24; // zf

  (*(void (__fastcall **)(_DWORD, int, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 1, 1.0);
  v2 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 0, 1.0);
  (*(void (__fastcall **)(_DWORD, int, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 2, 1.0);
  v3 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 24) + 92))(**(_DWORD **)(a1 + 24));
  v4 = FIELD_U32(a1, 24);
  v6 = FIELD_U32(v4, 8);
  result = *(int **)(v4 + 12);
  v5 = result;
  v8 = result + 2;
  v9 = *result;
  if ( v6 > 1 )
    ++result;
  if ( v6 <= 2 )
    v8 = v5;
  if ( v3 >= 1 )
  {
    v10 = *result;
    v11 = *v8;
    do
    {
      v14 = FIELD_U32(a1, 396);
      v15 = v2 == v14;
      if ( v2 != v14 )
        v15 = v2 == FIELD_U32(a1, 400);
      if ( v15 )
      {
        sub_60448AF4(v10, v2);
        v16 = v9;
      }
      else
      {
        if ( v2 == FIELD_U32(a1, 308) )
          goto LABEL_33;
        v17 = FIELD_U32(a1, 316);
        v18 = v2 == v17;
        if ( v2 != v17 )
          v18 = v2 == FIELD_U32(a1, 320);
        if ( v18 )
          goto LABEL_33;
        v19 = FIELD_U32(a1, 324);
        v20 = v2 == v19;
        if ( v2 != v19 )
          v20 = v2 == FIELD_U32(a1, 376);
        if ( v20 )
          goto LABEL_33;
        v21 = FIELD_U32(a1, 328);
        v22 = v2 == v21;
        if ( v2 != v21 )
          v22 = v2 == FIELD_U32(a1, 332);
        if ( v22 )
          goto LABEL_33;
        v23 = FIELD_U32(a1, 336);
        v24 = v2 == v23;
        if ( v2 != v23 )
          v24 = v2 == FIELD_U32(a1, 380);
        if ( v24 || v2 == FIELD_U32(a1, 312) )
          goto LABEL_33;
        if ( v2 != FIELD_U32(a1, 340) )
          goto LABEL_13;
        v12 = (FIELD_U8(a1, 208) & 0x10) == 0;
        if ( (FIELD_U8(a1, 208) & 0x10) != 0 )
          v12 = (FIELD_U8(a1, 198) & 1) == 0;
        if ( !v12 )
LABEL_33:
          v13 = v10;
        else
LABEL_13:
          v13 = v9;
        sub_60448AF4(v13, v2);
        v16 = v11;
      }
      result = (int *)sub_60448AF4(v16, v2++);
    }
    while ( v3 != v2 );
  }
  return result;
}
