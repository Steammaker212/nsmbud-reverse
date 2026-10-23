/* sub_60859FA8
 * address: 0x60859FA8   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_60859FA8(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r2
  int v11; // r0
  unsigned __int16 *v12; // r7
  int v13; // r0
  float v14; // s0
  float v15; // s2
  float v16; // s16
  float v17; // s18
  _DWORD *v18; // r0
  _DWORD *v19; // r1
  _DWORD *v20; // r5
  int v21; // r4
  int v22; // r10
  int v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r1
  int v27; // r10
  int v28; // r0
  _WORD *result; // r0
  int v30; // r5
  int v31; // r7
  int v32; // r6
  int v33; // r4
  int v34; // r0

  v10 = FIELD_U32(a5, 36);
  v11 = FIELD_U32(a5, 32);
  if ( v10 && FIELD_U32(v10, 12) )
    v11 = FIELD_U32(a5, 36);
  v12 = (unsigned __int16 *)sub_60865218(v11, a6);
  v13 = *v12;
  if ( v13 == 2 )
  {
    v18 = (_DWORD *)sub_60855BC8(16);
    v19 = 0;
    v20 = 0;
    if ( v18 )
    {
      *v18 = 0;
      v18[1] = 0;
      v18[2] = 0;
      v18[3] = 0;
      v19 = v18;
    }
    FIELD_U32(a1, 196) = v19;
    v21 = a1 + 196;
    v22 = *((_DWORD *)v12 + 1);
    v23 = sub_60855BC8(44);
    if ( !v23 )
      goto LABEL_19;
    v24 = (_DWORD *)sub_608A7EBC(v23, 5, 3, v22);
    *v24 = off_60C5A3F0;
    goto LABEL_18;
  }
  if ( v13 != 1 )
  {
    FIELD_U32(a1, 196) = 0;
    v21 = a1 + 196;
    goto LABEL_20;
  }
  v14 = FIELD_F32(a4, 76);
  v15 = FIELD_F32(a4, 80);
  if ( v14 <= v15 )
  {
    v17 = fabsf((float)*((unsigned int *)v12 + 1) / v14);
    v16 = v17 / fabsf(v15 / v14);
  }
  else
  {
    v16 = fabsf((float)*((unsigned int *)v12 + 1) / v15);
    v17 = v16 / fabsf(v14 / v15);
  }
  v25 = (_DWORD *)sub_60855BC8(16);
  v26 = 0;
  v20 = 0;
  if ( v25 )
  {
    *v25 = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    v26 = v25;
  }
  FIELD_U32(a1, 196) = v26;
  v21 = a1 + 196;
  v27 = *((_DWORD *)v12 + 2);
  v28 = sub_60855BC8(52);
  if ( v28 )
  {
    v24 = (_DWORD *)sub_6085F88C(v28, 5, 3, v27, v17, v16);
LABEL_18:
    v20 = v24;
  }
LABEL_19:
  *(_DWORD *)(*(_DWORD *)v21 + 12) = v20;
LABEL_20:
  result = *(_WORD **)v21;
  if ( *(_DWORD *)v21 )
  {
    FIELD_U8(a1, 192) = 4;
    *result = *v12;
    v30 = sub_608A7E38(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
    v31 = sub_608A7E40(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
    v32 = *(_DWORD *)(FIELD_U32(a1, 196) + 12);
    v33 = sub_60855BC8(v30);
    v34 = sub_60855BC8(v31);
    result = (_WORD *)sub_608A7E68(v32, v33, v30, v34, v31);
    if ( a2 )
    {
      *a2 += sub_6085F830(a3, 4, v30);
      result = (_WORD *)(*a2 + sub_6085F830(a3, 8, v31));
      *a2 = result;
    }
  }
  return result;
}
