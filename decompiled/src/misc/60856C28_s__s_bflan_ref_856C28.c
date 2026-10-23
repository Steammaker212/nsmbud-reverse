/* s__s_bflan_ref_856C28
 * address: 0x60856C28   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall s__s_bflan_ref_856C28(int a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  _DWORD *v10; // r6
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r4
  void (__fastcall *v14)(int); // r6
  int *v15; // r5
  int v16; // t1
  int v17; // r2
  int v18; // r0
  _DWORD *v19; // r4
  int v20; // r3
  int v22; // [sp+8h] [bp-A8h] BYREF
  int v23; // [sp+Ch] [bp-A4h]

  nn__util__SNPrintf((nn__util *)&v22, (char *)0x88, (unsigned int)"%s_%s.bflan", *(const char **)(a1 + 28), a3);
  v7 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int *))(**(_DWORD **)(a1 + 36) + 32))(
                   FIELD_U32(a1, 36),
                   1634625901,
                   &v22);
  sub_60851BDC(&v22, v7);
  v8 = sub_60851D10((int)&v22);
  v9 = v23;
  v10 = 0;
  if ( v8 < 2 )
  {
    if ( v23 )
    {
      v18 = dword_60CC7F88(52, 4, dword_60CC7F90);
      v19 = (_DWORD *)v18;
      if ( v18 )
      {
        sub_608523B8(v18);
        *v19 = off_60C34760;
        v19[12] = 0;
        v20 = v19[1];
        v19[1] = FIELD_U32(a1, 4);
        FIELD_U32(v20, 4) = a1 + 4;
        *(_DWORD *)(FIELD_U32(a1, 4) + 4) = v19 + 1;
        FIELD_U32(a1, 4) = v20;
        (*(void (__fastcall **)(_DWORD *, int, _DWORD, int))(*v19 + 32))(v19, a2, FIELD_U32(a1, 36), v9);
        v10 = v19;
      }
    }
    sub_608527DC(v10, (int)&v22, FIELD_U32(a1, 16), 0, a4);
  }
  else if ( v23 )
  {
    v11 = sub_60851D10((int)&v22);
    v12 = dword_60CC7F88(4 * v11 + 56, 4, dword_60CC7F90);
    v13 = (_DWORD *)v12;
    if ( v12 )
    {
      sub_608523B8(v12);
      v14 = (void (__fastcall *)(int))off_60C34808;
      *v13 = off_60C347E8;
      v13[12] = 0;
      v13[13] = 0;
      v14((int)v13);
      v16 = FIELD_U32(a1, 4);
      v15 = (int *)(a1 + 4);
      v17 = v13[1];
      v13[1] = v16;
      FIELD_U32(v17, 4) = v15;
      *(_DWORD *)(*v15 + 4) = v13 + 1;
      *v15 = v17;
      sub_60852850(v13, (int)&v22, v15[3], (int)(v13 + 14), a4);
      return v13;
    }
  }
  return v10;
}
