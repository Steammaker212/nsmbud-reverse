/* sub_60797430
 * address: 0x60797430   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60797430(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  _BYTE *v5; // r6
  int v6; // r4
  int v7; // r2
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r1
  _DWORD *result; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r1

  v4 = FIELD_U32(a1, 11428);
  v2 = (_DWORD *)(a1 + 11428);
  v3 = v4;
  v5 = v2 - 1132;
  v6 = (int)(v2 - 2685);
  if ( v4 )
  {
    v7 = FIELD_U32(a1, 11440);
    if ( v7 == 2 )
    {
      if ( FIELD_F32(a1, 124) <= 0.0 )
        goto LABEL_9;
    }
    else if ( v7 != 1 )
    {
LABEL_7:
      v8 = v3 - 1;
      *v2 = v8;
      if ( v8 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( (*v5 & 1) == 0 )
      goto LABEL_7;
LABEL_9:
    *v2 = 0;
LABEL_10:
    sub_607865BC((int)(v2 - 2685), 1);
  }
LABEL_11:
  v9 = (_DWORD *)(a1 + 11432);
  v10 = FIELD_U32(a1, 11432);
  if ( !v10 )
    goto LABEL_21;
  v11 = FIELD_U32(a1, 11444);
  if ( v11 == 2 )
  {
    if ( FIELD_F32(a1, 124) <= 0.0 )
      goto LABEL_19;
  }
  else if ( v11 != 1 )
  {
LABEL_17:
    v12 = v10 - 1;
    *v9 = v12;
    if ( v12 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( (*v5 & 1) == 0 )
    goto LABEL_17;
LABEL_19:
  *v9 = 0;
LABEL_20:
  sub_607865BC(v6, 2);
LABEL_21:
  result = (_DWORD *)(a1 + 11436);
  v14 = FIELD_U32(a1, 11436);
  if ( !v14 )
    return result;
  v15 = FIELD_U32(a1, 11448);
  if ( v15 == 2 )
  {
    if ( FIELD_F32(a1, 124) <= 0.0 )
      goto LABEL_29;
    goto LABEL_26;
  }
  if ( v15 == 1 )
  {
LABEL_26:
    if ( (*v5 & 1) == 0 )
      goto LABEL_27;
LABEL_29:
    *result = 0;
    return (_DWORD *)sub_607865BC(v6, 3);
  }
LABEL_27:
  v16 = v14 - 1;
  *result = v16;
  if ( !v16 )
    return (_DWORD *)sub_607865BC(v6, 3);
  return result;
}
