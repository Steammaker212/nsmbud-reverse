/* sub_60980684
 * address: 0x60980684   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60980684(_DWORD *a1, int a2, int a3)
{
  _DWORD *v5; // r1
  _DWORD *v6; // r6
  int v7; // r7
  int v8; // r8
  int v9; // r0
  _DWORD *v10; // r5
  int v11; // r3
  int v13; // [sp+8h] [bp-30h] BYREF
  int v14; // [sp+Ch] [bp-2Ch]

  v5 = (_DWORD *)sub_60980818(a1, a2);
  if ( !v5 )
    return 0;
  sub_60851BDC(&v13, v5);
  v6 = 0;
  if ( sub_60851D10((int)&v13) )
  {
    v7 = v14;
    if ( v14 )
    {
      v8 = FIELD_U32(dword_60CCF464, 36);
      v9 = sub_60855BC8(60);
      v10 = (_DWORD *)v9;
      if ( v9 )
      {
        sub_609898C0(v9);
        v11 = v10[1];
        v10[1] = a1[1];
        FIELD_U32(v11, 4) = a1 + 1;
        *(_DWORD *)(a1[1] + 4) = v10 + 1;
        a1[1] = v11;
        (*(void (__fastcall **)(_DWORD *, int, _DWORD, int))(*v10 + 32))(v10, v8, a1[9], v7);
        v6 = v10;
      }
    }
    sub_609899A4(v6, &v13, a1, a1[4], a3);
  }
  return v6;
}
