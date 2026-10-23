/* sub_6066F404
 * address: 0x6066F404   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066F404(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r1
  int *v4; // r5
  int v5; // r3
  _DWORD *v6; // r1
  bool v7; // cc
  int *v8; // r4
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r11

  FIELD_U32(a1, 116) = -1015021568;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1134559232;
  FIELD_U32(a1, 504) = 1132462080;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 8264) = ((unsigned __int16)(v2 & 0x1000) >> 12) ^ 1;
  FIELD_U8(a1, 8265) = HIBYTE(v2);
  FIELD_U32(a1, 8272) = FIELD_U8(a1, 27);
  v3 = v2 & 0xF;
  if ( v3 > 5 )
    v3 = 0;
  v4 = &dword_60CB6F98[18 * v3];
  FIELD_U32(a1, 6100) = v4;
  if ( (v2 & 0x1000) == 0 )
    lift_zen_kaitenita_ref_2(a1, v4);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v5 = (v2 >> 4) & 1;
  FIELD_U32(a1, 8260) = v5;
  FIELD_U32(a1, 8252) = dword_60B07AFC[v5];
  sub_6066F7B4(a1, v2, v4);
  v6 = (_DWORD *)(a1 + 8140);
  do
  {
    *(v6 - 1) = *(v6 - 7);
    *v6 = *(v6 - 6);
    v7 = (unsigned int)(v6 + 1) > a1 + 8144;
    v6 += 2;
  }
  while ( !v7 );
  if ( (v2 & 0x1000) == 0 )
  {
    sub_6066FAC0(a1, v4);
    v8 = (int *)(a1 + 8088);
    v9 = (_DWORD *)(a1 + 6120);
    v10 = a1 + 8160;
    do
    {
      v11 = *v8;
      v12 = v8[1];
      ((void (__fastcall *)(int, int))loc_6069B070)(v10, a1 + 108);
      v9[43] = v11;
      v9[44] = v12;
      (*(void (__fastcall **)(_DWORD *))(*v9 + 28))(v9);
      v9 += 164;
      v8 += 2;
      v10 += 40;
    }
    while ( (unsigned int)v9 <= a1 + 6776 );
  }
  ((void (__fastcall *)(int, _DWORD *))loc_6066FCB4)(a1, v6);
  return 1;
}
