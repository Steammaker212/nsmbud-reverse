/* sub_60720844
 * address: 0x60720844   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60720844(int a1, int a2, unsigned int a3, unsigned int a4, void (__fastcall ***a5)(_DWORD, int *))
{
  unsigned int v6; // r5
  unsigned int v8; // r0
  int v10; // r8
  int result; // r0
  _DWORD *v12; // r8
  int v13; // t1
  unsigned int v14; // r7
  char v15; // r12
  bool v16; // zf
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r6
  int v20; // r3
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  int v23; // r2
  int v24; // r1
  bool v25; // zf
  int v26; // r2
  int v27; // r6
  int v28; // r7
  int v29; // r9
  __int64 v30; // r0
  _BYTE v31[48]; // [sp+10h] [bp-30h] BYREF

  v6 = 0;
  v8 = 0;
  if ( a4 < 4 )
    v6 = a4;
  if ( a3 < 4 )
    v8 = a3;
  v10 = a1 + 16 * v8 + 4 * v6;
  v13 = FIELD_U32(v10, 944);
  v12 = (_DWORD *)(v10 + 944);
  result = v13;
  if ( v13 )
  {
    if ( !FIELD_U8(a1, 9096) )
    {
LABEL_36:
      result = 0;
      *v12 = 0;
      return result;
    }
    v14 = a3 + 4 * FIELD_U32(a1, 16);
    sub_60920EC8(a1 + 2280, dword_60CBD85C + 272 * v6 + 24);
    sub_60920EC8(a1 + 9136, dword_60CBD85C + 272 * v6 + 1120);
    if ( v14 >= 8 )
      v14 = 0;
    sub_60913A6C(v31, a1 + 112 * v14 + 28 * v6 + 20, 80 * (2048 - *v12));
    sub_60922794(a1 + 1592, v31, 80 * *v12);
    sub_60922730(a1 + 1592, 0, 80 * *v12);
    if ( ((unsigned int)&dword_60C8D9F4 & ~(1618086248 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
    {
      dword_60C8D9F0 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9F4);
    }
    (**a5)(a5, &dword_60C8D9F0);
    v16 = a4 == 0;
    if ( a4 )
      v16 = FIELD_U8(a1, 1509) == 0;
    if ( v16 )
    {
      if ( FIELD_U8(a1, 1510) )
      {
        v18 = (_DWORD *)(a1 + 1584);
        goto LABEL_19;
      }
      v17 = 1576;
    }
    else
    {
      v17 = 1580;
    }
    v18 = (_DWORD *)(a1 + v17);
LABEL_19:
    v19 = (_DWORD *)*v18;
    sub_6091DD8C(*v18, a2, 1);
    v20 = sub_6090BE54(a5);
    v21 = (_DWORD *)v19[153];
    if ( *v21 != -1 )
      sub_6091B890(v21, a2, 16, v20);
    if ( FIELD_U8(a1, 1510) )
    {
      v22 = (_DWORD *)v19[153];
      if ( v19[152] > 1u )
        v22 += 3;
      if ( *v22 != -1 )
        sub_6091B890(v22, a2, 16, a1 + 1512);
    }
    sub_60920FDC(a1 + 2280, a2, v19[159], -1, 0);
    v23 = v19[159];
    if ( v19[158] > 1u )
      v23 += 12;
    sub_60920FDC(a1 + 9136, a2, v23, -1, 0);
    v25 = FIELD_U8(a1, 1509) == 0;
    if ( FIELD_U8(a1, 1509) )
    {
      v24 = FIELD_U32(a1, 7880);
      v25 = v24 == 0;
    }
    if ( !v25 )
    {
      sub_60920EC8(a1 + 8296, v24);
      v26 = v19[159];
      if ( v19[158] > 2u )
        v26 += 24;
      sub_60920FDC(a1 + 8296, a2, v26, -1, 0);
    }
    sub_60922278(a1 + 1864, a2);
    if ( 6 * *v12 )
    {
      v27 = FIELD_U32(a2, 192);
      v28 = FIELD_U32(a1, 2208);
      v29 = 6 * *v12;
      v30 = dword_60CC746C(a1 + 2232);
      dword_60CC7874(v27, v28, FIELD_U32(a1, 2204), v29, v30, HIDWORD(v30));
    }
    goto LABEL_36;
  }
  return result;
}
