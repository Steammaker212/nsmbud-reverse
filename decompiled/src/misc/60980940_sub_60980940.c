/* sub_60980940
 * address: 0x60980940   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60980940(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v7; // r1
  _DWORD *v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r3
  int v15; // [sp+8h] [bp-30h] BYREF
  int v16; // [sp+Ch] [bp-2Ch]

  v7 = (_DWORD *)sub_60980818((int)a1, a2);
  if ( !v7 )
    return 0;
  sub_60851BDC(&v15, v7);
  v8 = 0;
  if ( sub_60851D10((int)&v15) > a3 )
  {
    v9 = v16;
    v8 = 0;
    if ( v16 )
    {
      v10 = FIELD_U32(dword_60CCF464, 36);
      v11 = sub_60855BC8(60);
      v12 = (_DWORD *)v11;
      if ( v11 )
      {
        sub_609898C0(v11);
        v13 = v12[1];
        v12[1] = a1[1];
        FIELD_U32(v13, 4) = a1 + 1;
        *(_DWORD *)(a1[1] + 4) = v12 + 1;
        a1[1] = v13;
        (*(void (__fastcall **)(_DWORD *, int, _DWORD, int))(*v12 + 32))(v12, v10, a1[9], v9);
        v8 = v12;
      }
    }
    sub_60989920(v8, &v15, a1, a1[4], a3, a4);
  }
  return v8;
}
