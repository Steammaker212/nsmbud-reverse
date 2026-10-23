/* sub_607FC034
 * address: 0x607FC034   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FC034(int a1, unsigned int a2, int a3, int a4)
{
  int Area; // r5
  unsigned __int16 *v8; // r9
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r0
  int v22; // r0
  int result; // r0
  int v24; // [sp+4h] [bp-34h]
  _DWORD v25[12]; // [sp+8h] [bp-30h] BYREF

  Area = Level_getArea(Level_instance, a2);
  v8 = sub_60727620(Area, a4, (float *)(a1 + 24));
  v9 = sub_60727D48(Area, a3);
  v10 = operator_new(0x24u);
  FIELD_U32(a1, 168) = sub_607FDAD0(v10, Area, v8, a1);
  v11 = operator_new(0x63Cu);
  FIELD_U32(a1, 172) = sub_607FD550(v11, a1 + 24, a1 + 204, a1);
  v12 = operator_new(0x1B0u);
  FIELD_U32(a1, 176) = sub_60805104(v12, a1);
  v13 = operator_new(0x18u);
  FIELD_U32(a1, 180) = sub_607FCB1C(v13, *(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(a1, 168) + 32) + 18), a1);
  v14 = operator_new(0x38u);
  FIELD_U32(a1, 184) = ((int (__fastcall *)(int, int, _DWORD, _DWORD, int, int))loc_60803300)(
                            v14,
                            a1 + 24,
                            FIELD_U32(a1, 168),
                            *((unsigned __int8 *)v8 + 25),
                            a1 + 204,
                            a1);
  v15 = operator_new(0x9Cu);
  sub_60800250(v15, a1);
  FIELD_U32(a1, 188) = v15;
  v16 = operator_new(0xB8u);
  FIELD_U32(a1, 192) = sub_607FF8C4(v16, v15, a1);
  v17 = operator_new(0xFCu);
  FIELD_U32(a1, 196) = sub_607FA27C(v17, Area, v9);
  v18 = FIELD_U32(a1, 168);
  v19 = FIELD_U32(a1, 184);
  v20 = FIELD_U32(a1, 192);
  v25[0] = a1 + 24;
  v25[1] = v18;
  v25[2] = v19;
  v25[3] = v20;
  v21 = operator_new(0x2Cu);
  v22 = ((int (__fastcall *)(int, _DWORD *, int, int, int, int))sub_60801120)(v21, v25, Area, v9, a1, v24);
  FIELD_U32(a1, 200) = v22;
  if ( FIELD_U8(v22, 40) )
  {
    sub_60803A08(FIELD_U32(a1, 184));
    v22 = FIELD_U32(a1, 200);
  }
  sub_608013A8(v22, a1 + 16, a1 + 40);
  sub_607FBEB4(a1);
  sub_607FE6C0(a1 + 248, FIELD_F32(a1, 112), FIELD_F32(a1, 124), FIELD_F32(a1, 16));
  FIELD_U32(a1, 20) = FIELD_U32(a1, 16);
  FIELD_U32(a1, 56) = FIELD_U32(a1, 40);
  FIELD_U32(a1, 60) = FIELD_U32(a1, 44);
  FIELD_U32(a1, 64) = FIELD_U32(a1, 48);
  FIELD_U32(a1, 68) = FIELD_U32(a1, 52);
  FIELD_U32(a1, 152) = FIELD_U32(a1, 136);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 140);
  FIELD_U32(a1, 160) = FIELD_U32(a1, 144);
  result = FIELD_U32(a1, 148);
  FIELD_U32(a1, 164) = result;
  return result;
}
