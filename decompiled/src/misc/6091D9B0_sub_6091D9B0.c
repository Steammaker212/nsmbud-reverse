/* sub_6091D9B0
 * address: 0x6091D9B0   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091D9B0(int a1)
{
  char v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r7
  _DWORD *v6; // r5
  unsigned int v7; // r8
  const char *v8; // r5
  unsigned int v9; // r10
  _DWORD *v10; // r9
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r1
  _DWORD *v15; // r2
  __int64 v16; // r6
  int v17; // r5
  bool v18; // cf
  __int16 v19; // r6
  int v20; // r3
  _DWORD *v21; // r2
  __int64 v22; // r10
  int v23; // r7
  int v24; // r3
  _DWORD *v25; // r7
  _DWORD *v26; // r2
  int v27; // r0
  int v28; // r3
  int v29; // r5
  int v30; // r0
  _DWORD *v31; // r3
  int v32; // r0
  char v33; // r1
  int v34; // r0
  int v36; // [sp+0h] [bp-78h]
  _DWORD v37[26]; // [sp+10h] [bp-68h] BYREF

  v2 = FIELD_U8(a1, 8);
  sub_6091D708(a1);
  v3 = 0;
  v36 = v2 & 1;
  do
  {
    v4 = 0;
    switch ( v3 )
    {
      case 0:
        v4 = a1 + 648;
        break;
      case 1:
        v4 = a1 + 668;
        break;
      case 2:
        v4 = a1 + 688;
        break;
      case 3:
        v4 = a1 + 708;
        break;
      default:
        break;
    }
    v5 = FIELD_U32(v4, 4);
    if ( v5 )
    {
      v6 = (_DWORD *)sub_60973CE8(v4);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v7 = FIELD_U32(v5, 20);
      if ( v7 )
      {
        v8 = (const char *)v6[1];
        v9 = 0;
        v10 = (_DWORD *)(FIELD_U32(v5, 24) + 12);
        while ( strcmp((const char *)*(v10 - 3), v8) )
        {
          ++v9;
          v10 += 4;
          if ( v9 >= v7 )
            goto LABEL_15;
        }
        if ( v10 != (_DWORD *)12 )
          *(_DWORD *)(FIELD_U32(a1, 4) + 48) = *v10;
      }
    }
LABEL_15:
    ++v3;
  }
  while ( v3 != 4 );
  if ( v36 )
  {
    dword_60CC73B4(a1 + 728);
    FIELD_U8(a1, 8) &= ~1u;
  }
  dword_60CC73B0(a1 + 728, FIELD_U32(dword_60CCFC8C, 28));
  v11 = FIELD_U32(a1, 652);
  v12 = (_DWORD *)(a1 + 920);
  if ( v11 )
  {
    v13 = (*(_QWORD *)v11 + *(_QWORD *)v12) >> 32;
    v37[0] = *(_DWORD *)v11 + *v12;
    v37[1] = v13;
    v37[2] = FIELD_U32(v11, 12);
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_DWORD **)(a1 + 672);
  if ( v15 )
  {
    v16 = *(_QWORD *)v12;
    v17 = v15[1];
    v18 = __CFADD__(*v15, *v12);
    v19 = v14 | 2;
    v37[4 * v14] = *v15 + *v12;
    v20 = HIDWORD(v16) + v18 + v17;
    HIDWORD(v16) = &v37[4 * v14++];
    *(_DWORD *)(HIDWORD(v16) + 4) = v20;
    *(_DWORD *)(HIDWORD(v16) + 8) = v15[3];
  }
  else
  {
    v19 = v14;
  }
  v21 = *(_DWORD **)(a1 + 692);
  if ( v21 )
  {
    v22 = *(_QWORD *)v12;
    v23 = v21[1];
    v19 |= 4u;
    v18 = __CFADD__(*v21, *v12);
    v37[4 * v14] = *v21 + *v12;
    v24 = HIDWORD(v22) + v18 + v23;
    v25 = &v37[4 * v14++];
    v25[1] = v24;
    v25[2] = v21[3];
  }
  v26 = *(_DWORD **)(a1 + 712);
  if ( v26 )
  {
    v27 = *v12;
    v28 = FIELD_U32(a1, 924);
    v29 = v26[1];
    v19 |= 0x20u;
    v18 = __CFADD__(*v26, v27);
    v37[4 * v14] = *v26 + v27;
    v30 = v28 + v18 + v29;
    v31 = &v37[4 * v14++];
    v31[1] = v30;
    v31[2] = v26[3];
  }
  v32 = dword_60CC73BC(a1 + 728, v14, v37);
  v33 = FIELD_U8(a1, 8);
  if ( v32 )
  {
    v33 |= 1u;
    FIELD_U8(a1, 8) = v33;
    FIELD_U16(a1, 928) = v19;
  }
  FIELD_U8(a1, 8) = v33 & 0xFD;
  if ( (v33 & 1) != 0 )
    sub_6091DC90(a1);
  v34 = *(_DWORD *)(FIELD_U32(a1, 4) + 32);
  if ( v34 )
    (**(void (__fastcall ***)(int, int))(v34 + 4))(v34 + 4, a1);
  return 0;
}
