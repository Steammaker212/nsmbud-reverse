/* sub_603F335C
 * address: 0x603F335C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F335C(int a1, int *a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r1
  char v7; // r6
  int v8; // r7
  _DWORD *v9; // r1
  _DWORD *v10; // r1
  _DWORD *v11; // r1
  _DWORD *v12; // r1
  _DWORD *v13; // r1
  int v14; // r7
  _DWORD *v15; // r1
  _DWORD *v16; // r1
  _DWORD *v17; // r1
  _DWORD *v18; // r1
  _DWORD *v19; // r1
  float v20; // s2
  float v21; // s6
  float v22[10]; // [sp+0h] [bp-28h] BYREF

  result = *a2;
  if ( *a2 == 1 )
  {
    v6 = FIELD_U32(dword_60C9BAAC, 172);
    if ( FIELD_U32(a1, 1832) == 1 || FIELD_U8(a1, 1862) )
    {
      if ( v6 )
      {
        sub_60418110(3, a2);
LABEL_35:
        v20 = FIELD_F32(a1, 2564);
        v21 = FIELD_F32(a1, 2568);
        v22[0] = v20 + -640.0;
        v22[1] = v21 + -360.0;
        v22[2] = v20 + 640.0;
        v22[3] = v21 + 360.0;
        ((void (__fastcall *)(int, _DWORD, float *))sub_604177D4)(dword_60C9BAAC, 0, v22);
        return gaussian_ref(dword_60C9BAAC, 0, a2);
      }
      sub_60417FF4(dword_60C9BAAC, 3, a2);
      v7 = 0;
      v8 = dword_60CD0B40;
      v9 = *(_DWORD **)(dword_60CD0B40 + 36);
      if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
        v9 += 5;
      sub_60955528(*v9, 0);
      v10 = *(_DWORD **)(v8 + 36);
      if ( FIELD_U32(v8, 32) > 6u )
        v10 += 6;
      sub_60955528(*v10, 0);
      v11 = *(_DWORD **)(v8 + 36);
      if ( FIELD_U32(v8, 32) > 7u )
        v11 += 7;
      sub_60955528(*v11, 0);
      v12 = *(_DWORD **)(v8 + 36);
      if ( FIELD_U32(v8, 32) > 8u )
        v12 += 8;
      sub_60955528(*v12, 0);
      v13 = *(_DWORD **)(v8 + 36);
      if ( FIELD_U32(v8, 32) > 9u )
        v13 += 9;
      sub_60955528(*v13, 0);
    }
    else
    {
      if ( !v6 )
        goto LABEL_35;
      sub_60418110(3, a2);
      sub_60417FFC(dword_60C9BAAC, 3u);
      v7 = 1;
      v14 = dword_60CD0B40;
      v15 = *(_DWORD **)(dword_60CD0B40 + 36);
      if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
        v15 += 5;
      sub_60955528(*v15, 1);
      v16 = *(_DWORD **)(v14 + 36);
      if ( FIELD_U32(v14, 32) > 6u )
        v16 += 6;
      sub_60955528(*v16, 1);
      v17 = *(_DWORD **)(v14 + 36);
      if ( FIELD_U32(v14, 32) > 7u )
        v17 += 7;
      sub_60955528(*v17, 1);
      v18 = *(_DWORD **)(v14 + 36);
      if ( FIELD_U32(v14, 32) > 8u )
        v18 += 8;
      sub_60955528(*v18, 1);
      v19 = *(_DWORD **)(v14 + 36);
      if ( FIELD_U32(v14, 32) > 9u )
        v19 += 9;
      sub_60955528(*v19, 1);
    }
    FIELD_U8(dword_60C9CEF0, 64) = v7;
    goto LABEL_35;
  }
  if ( !result )
  {
    sub_60407D7C(dword_60C9A1E8, a2);
    v5 = FIELD_U32(a1, 2592);
    if ( v5 )
      sub_604B4F94(v5, a2);
    result = dword_60CA1910;
    if ( dword_60CA1910 )
      return sub_604B1F58(dword_60CA1910, a2);
  }
  return result;
}
