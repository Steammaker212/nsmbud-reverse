/* sub_60914B68
 * address: 0x60914B68   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60914B68(
        unsigned int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned int v8; // r4
  int v10; // r0
  int v11; // r6
  _DWORD *v12; // r5
  _DWORD *v13; // r7
  int v14; // r0
  int v15; // r8
  int v16; // r7
  _DWORD v18[24]; // [sp+8h] [bp-60h] BYREF

  v8 = a5;
  if ( a1 > a5 )
    v8 = a1;
  v10 = 1;
  if ( v8 - a3 >= 0x200 )
  {
    v10 = a6;
    if ( v8 >> 9 < a6 )
      v10 = v8 >> 9;
  }
  v11 = sub_6099C5EC(v10);
  v12 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a8 + 8) + 24))(
                    FIELD_U32(a8, 8),
                    v11 + 288,
                    4);
  v13 = 0;
  if ( v12 )
  {
    v14 = (*(int (__fastcall **)(_DWORD, unsigned int, int))(**(_DWORD **)(a8 + 8) + 24))(FIELD_U32(a8, 8), v8, a2);
    if ( v14 )
    {
      *v12 = a8;
      v12[1] = 0;
      v12[2] = v14;
      v12[68] = 0;
      v12[70] = 0;
      v12[71] = 0;
      v18[0] = &sead__SafeStringBase__vtable;
      v18[1] = "gpu";
      v12[1] = ((int (__fastcall *)(_DWORD *, _DWORD *, int, int, unsigned int, _DWORD))sub_6099C4CC)(
                 v18,
                 v12 + 72,
                 v11,
                 0x100000,
                 v8,
                 0);
      v15 = v12[2];
      v16 = *a7;
      dword_60CC73C4(v18);
      dword_60CC73C0(v18, FIELD_U32(dword_60CCF464, 24));
      dword_60CC73CC(v18, v16 & 0xFFFFFFF);
      dword_60CC73C8(v18, v15, v8);
      sub_6091718C(dword_60CCFC8C, v12 + 4, v18);
      v13 = v12;
      v12[68] = *a7 | 0x80000000;
    }
  }
  return v13;
}
