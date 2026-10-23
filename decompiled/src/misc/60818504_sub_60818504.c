/* sub_60818504
 * address: 0x60818504   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60818504()
{
  _DWORD *v0; // r4
  int v1; // r5
  int i; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r0
  char v18; // r12
  _DWORD *v19; // r6
  int v20; // r11
  int (__fastcall ***v21)(_DWORD, int *); // r5
  int v22; // r0
  bool v23; // zf
  nn__hid *v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r0
  int result; // r0
  int v39; // r1

  sub_608EDCA0();
  v0 = (_DWORD *)dword_60CCF448;
  v1 = operator_new(0x170u);
  for ( i = 0; i != 4; ++i )
  {
    sub_608DF3CC(v1, v0, i);
    v3 = operator_new(0x4A8u);
    v4 = sub_608E14B0(v3, v1, 1);
    v5 = FIELD_U32(v1, 328);
    FIELD_U8(v4, 1190) = 1;
    sead__ListNode__insertFront((sead_ListNode *)(v1 + 316), (sead_ListNode *)(v5 + v4));
    ++FIELD_U32(v1, 324);
    v6 = operator_new(0x4A8u);
    v7 = sub_608E14B0(v6, v1, 0);
    v8 = FIELD_U32(v1, 328);
    FIELD_U8(v7, 1190) = 1;
    sead__ListNode__insertFront((sead_ListNode *)(v1 + 316), (sead_ListNode *)(v8 + v7));
    ++FIELD_U32(v1, 324);
    v9 = v0[53];
    if ( v9 < v0[54] )
    {
      *(_DWORD *)(v0[55] + 4 * v9) = v1;
      ++v0[53];
    }
    sub_60909504(v1, 0.65, 0.3);
    v10 = operator_new(0x170u);
    v1 = v10;
  }
  sub_608DF3CC(v10, v0, 8);
  v11 = operator_new(0x4A8u);
  v12 = sub_608E14B0(v11, v1, 1);
  v13 = FIELD_U32(v1, 328);
  FIELD_U8(v12, 1190) = 1;
  sead__ListNode__insertFront((sead_ListNode *)(v1 + 316), (sead_ListNode *)(v13 + v12));
  ++FIELD_U32(v1, 324);
  v14 = operator_new(0x4A8u);
  v15 = sub_608E14B0(v14, v1, 0);
  v16 = FIELD_U32(v1, 328);
  FIELD_U8(v15, 1190) = 1;
  sead__ListNode__insertFront((sead_ListNode *)(v1 + 316), (sead_ListNode *)(v16 + v15));
  ++FIELD_U32(v1, 324);
  v17 = v0[53];
  if ( v17 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v17) = v1;
    ++v0[53];
  }
  sub_60909504(v1, 0.65, 0.3);
  v19 = (_DWORD *)v0[50];
  if ( v19 == v0 + 49 )
  {
LABEL_17:
    v21 = 0;
  }
  else
  {
    v20 = v0[52];
    v21 = (int (__fastcall ***)(_DWORD, int *))((char *)v19 - v20);
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60C9CFA8 & ~(1619101484 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
      {
        dword_60C9CFA4 = (int)&off_60BFB1D8;
        _cxa_guard_release(&dword_60C9CFA8);
      }
      v22 = (**v21)(v21, &dword_60C9CFA4);
      v23 = v21 == 0;
      if ( v21 )
        v23 = (v22 ^ 1) == 1;
      if ( !v23 )
        break;
      v19 = (_DWORD *)v19[1];
      v21 = (int (__fastcall ***)(_DWORD, int *))((char *)v19 - v20);
      if ( (char *)v19 - v20 == (char *)v0 - v0[52] + 196 )
        goto LABEL_17;
    }
  }
  sub_608E1254(v21, 31);
  sub_608E125C(v21, 1);
  v24 = (nn__hid *)sub_608E1248(v21, 4);
  nn__hid__InitializeTouchScreen(v24);
  v25 = operator_new(0x1C4u);
  v26 = sub_60457D5C(v25, (int)v0, 0);
  v27 = v0[53];
  if ( v27 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v27) = v26;
    ++v0[53];
  }
  v28 = operator_new(0x1C4u);
  v29 = sub_60457D5C(v28, (int)v0, 1);
  v30 = v0[53];
  if ( v30 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v30) = v29;
    ++v0[53];
  }
  v31 = operator_new(0x1C4u);
  v32 = sub_60457D5C(v31, (int)v0, 2);
  v33 = v0[53];
  if ( v33 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v33) = v32;
    ++v0[53];
  }
  v34 = operator_new(0x1C4u);
  v35 = sub_60457D5C(v34, (int)v0, 3);
  v36 = v0[53];
  if ( v36 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v36) = v35;
    ++v0[53];
  }
  v37 = operator_new(0x1C4u);
  result = sub_60457D5C(v37, (int)v0, 4);
  v39 = v0[53];
  if ( v39 < v0[54] )
  {
    *(_DWORD *)(v0[55] + 4 * v39) = result;
    result = v0[53] + 1;
    v0[53] = result;
  }
  return result;
}
