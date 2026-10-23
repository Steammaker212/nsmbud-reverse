/* sub_60974AA0
 * address: 0x60974AA0   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60974AA0(
        int a1,
        char a2,
        _DWORD *a3,
        int *a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        void *a10)
{
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  int *v14; // r5
  signed int v15; // r6
  unsigned int v16; // r0
  _DWORD *v17; // r0
  int v18; // r7
  _DWORD *v19; // r5
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r0
  float v23; // s2
  float v24; // s2
  int v25; // r0
  _DWORD *v26; // r5
  __int64 v27; // r0
  unsigned int v28; // r0
  _DWORD *v29; // r5
  int v30; // r0
  __int64 v31; // r0
  unsigned int v32; // r0
  _DWORD *result; // r0
  _DWORD *v34; // r0
  float v36; // [sp+Ch] [bp-13Ch] BYREF
  __int64 v37; // [sp+10h] [bp-138h]
  float v38; // [sp+18h] [bp-130h] BYREF
  float v39[75]; // [sp+1Ch] [bp-12Ch]

  FIELD_U8(a1, 4) = a2;
  FIELD_U32(a1, 2300) = a6;
  sead__PtrArrayImpl__allocBuffer(a1 + 2356, a7, (int)a10, 4);
  v12 = (_DWORD *)sub_608DE334(0x40u, (int)a10, 4);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 28;
    v12[1] = 2;
    sub_60972840(v12 + 2);
    sub_60972840(v13 + 9);
    FIELD_U32(a1, 2368) = 2;
    FIELD_U32(a1, 2372) = v13 + 2;
  }
  v14 = a5;
  sub_6097C558(a1 + 3584, a8 * a7 + 8, a10, 4);
  v15 = FIELD_U32(a1, 3588);
  if ( v15 >= 1 )
  {
    v16 = 616 * v15 + 8;
    if ( v16 < 616 * v15 )
      v16 = -1;
    if ( !is_mul_ok(0x268u, v15) )
      v16 = -1;
    v17 = (_DWORD *)sub_608DE334(v16, (int)a10, 4);
    if ( v17 )
    {
      v18 = 616 * v15;
      v19 = v17 + 2;
      *v17 = 616;
      v17[1] = v15;
      v20 = (int)(v17 + 2);
      do
      {
        v18 -= 616;
        v20 = sub_60976C24(v20) + 616;
      }
      while ( v18 );
      FIELD_U32(a1, 3596) = v15;
      FIELD_U32(a1, 3600) = v19;
      v14 = a5;
    }
  }
  sub_6097C558(a1 + 3604, FIELD_U32(a1, 3588), a10, 4);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  sub_6017D5C0(&v38, aS_3, a3[1]);
  v21 = *(_DWORD **)(a1 + 2300);
  v21[3] = 0;
  v21[4] = 0;
  v21[5] = 0;
  v21[6] = 0;
  v22 = FIELD_U32(a1, 2300);
  v23 = (float)v14[1];
  FIELD_F32(v22, 4) = (float)*v14;
  FIELD_F32(v22, 8) = v23;
  v24 = (float)a4[1];
  v38 = (float)*a4;
  v39[0] = v24;
  sub_60974E18(a1, &v38);
  FIELD_U32(a1, 1628) = a1 + 1256;
  sub_609728A4(FIELD_U32(a1, 2372), 2, 0);
  v25 = FIELD_U32(a1, 2372);
  if ( FIELD_U32(a1, 2368) > 1u )
    v25 += 28;
  sub_609728A4(v25, 3, 0);
  v26 = (_DWORD *)operator_new_8DE25C(0x1Cu, a10, 4);
  sub_60913BB4((int)v26);
  *v26 = off_60BF9C1C;
  sub_60913D88((int)v26, 16, (int)a10, 4, 1);
  sub_60913A6C(&v38, (int)v26, 0);
  HIDWORD(v27) = &v36;
  v36 = v38;
  v37 = *(_QWORD *)v39;
  LODWORD(v27) = a1 + 2416;
  sub_60918E08(v27, 16);
  v28 = operator_new_8DE2C8(0x100u, (int)a10, 8);
  sub_60918D40(a1 + 2416, v28, 256);
  v29 = (_DWORD *)operator_new_8DE25C(0x1Cu, a10, 4);
  v30 = sub_60913BB4((int)v29);
  *v29 = off_60BF9C1C;
  sub_60913D88(v30, 16, (int)a10, 4, 1);
  sub_60913A6C(&v38, (int)v29, 0);
  HIDWORD(v31) = &v36;
  v36 = v38;
  v37 = *(_QWORD *)v39;
  LODWORD(v31) = a1 + 3000;
  sub_60918E08(v31, 16);
  v32 = operator_new_8DE2C8(0x100u, (int)a10, 8);
  sub_60918D40(a1 + 3000, v32, 256);
  result = a9;
  if ( a9 == (_DWORD *)1 )
  {
    v34 = (_DWORD *)operator_new_8DE25C(0x40u, a10, 4);
    result = sub_60919E88(v34);
    FIELD_U32(a1, 8) = result;
  }
  return result;
}
