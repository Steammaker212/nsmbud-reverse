/* sub_607CA860
 * address: 0x607CA860   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607CA860(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int *v5; // r2
  unsigned int v6; // r1
  int *result; // r0
  int v8; // r8
  int v9; // r7
  int v10; // r0
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
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
  (*(void (__fastcall **)(_DWORD, int, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 2, 0.0);
  v3 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 24) + 92))(**(_DWORD **)(a1 + 24));
  v4 = FIELD_U32(a1, 24);
  v5 = *(int **)(v4 + 12);
  v6 = FIELD_U32(v4, 8);
  result = v5 + 1;
  v8 = *v5;
  if ( v6 <= 1 )
    result = v5;
  if ( v3 >= 1 )
  {
    v9 = *result;
    do
    {
      v11 = FIELD_U32(a1, 308);
      v12 = v2 == v11;
      if ( v2 != v11 )
        v12 = v2 == FIELD_U32(a1, 316);
      if ( v12 )
        goto LABEL_29;
      v13 = FIELD_U32(a1, 320);
      v14 = v2 == v13;
      if ( v2 != v13 )
        v14 = v2 == FIELD_U32(a1, 324);
      if ( v14 )
        goto LABEL_29;
      v15 = FIELD_U32(a1, 328);
      v16 = v2 == v15;
      if ( v2 != v15 )
        v16 = v2 == FIELD_U32(a1, 332);
      if ( v16 )
        goto LABEL_29;
      v17 = FIELD_U32(a1, 336);
      v18 = v2 == v17;
      if ( v2 != v17 )
        v18 = v2 == FIELD_U32(a1, 312);
      if ( v18 )
        goto LABEL_29;
      v19 = FIELD_U32(a1, 376);
      v20 = v2 == v19;
      if ( v2 != v19 )
        v20 = v2 == FIELD_U32(a1, 392);
      if ( v20 )
        goto LABEL_29;
      v21 = FIELD_U32(a1, 380);
      v22 = v2 == v21;
      if ( v2 != v21 )
        v22 = v2 == FIELD_U32(a1, 384);
      if ( v22 )
        goto LABEL_29;
      v23 = FIELD_U32(a1, 388);
      v24 = v2 == v23;
      if ( v2 != v23 )
        v24 = v2 == FIELD_U32(a1, 396);
      if ( v24 || v2 == FIELD_U32(a1, 400) )
LABEL_29:
        v10 = v9;
      else
        v10 = v8;
      result = (int *)sub_60448AF4(v10, v2++);
    }
    while ( v3 != v2 );
  }
  return result;
}
