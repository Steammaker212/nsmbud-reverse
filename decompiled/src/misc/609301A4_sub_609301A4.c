/* sub_609301A4
 * address: 0x609301A4   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_609301A4(int a1, int a2, int a3)
{
  int v6; // r0
  _BYTE *v7; // r0
  bool v8; // zf
  _BYTE *v9; // r1
  int v10; // r0
  unsigned int v11; // r0
  int v12; // r7
  int v13; // r9
  int *result; // r0
  int v15; // r6
  int v16; // r7
  int v17; // r4
  int v18; // r5
  __int64 v19; // r0
  int v20; // r7
  int v21; // r5
  unsigned int v22; // r0
  _DWORD *v23; // r7
  int v24; // r5
  int v25; // r6
  int v26; // r4
  __int64 v27; // r0
  int v28; // r8
  int v29; // r6
  __int64 v30; // r0

  v6 = FIELD_U32(a3, 4);
  if ( v6 != 2 )
  {
    if ( v6 == 3 )
    {
      v7 = *(_BYTE **)(a3 + 12);
      v8 = v7[60] == 0;
      if ( v7[60] )
        v8 = v7[76] == 0;
      if ( v8 )
      {
        v9 = v7 + 496;
      }
      else
      {
        v9 = v7 + 496;
        if ( v7[92] )
          v9 = v7 + 572;
      }
      v22 = *((_DWORD *)v9 + 3);
      if ( v22 >= 2 )
        v22 = 0;
      v23 = (_DWORD *)(a1 + 744 * v22);
      result = (int *)sub_60922278((int)(v23 + 610), a2);
      v24 = v23[700];
      if ( v24 )
      {
        v25 = v23[696];
        v26 = FIELD_U32(a2, 192);
        v27 = dword_60CC746C(v23 + 702);
        return (int *)dword_60CC7874(v26, v25, v23[695], v24, v27, HIDWORD(v27));
      }
      return result;
    }
    sub_60922278(dword_60CD0A28 + 2712, a2);
    result = &dword_60CD0A0C;
    v20 = dword_60CD0A0C;
    v21 = FIELD_U32(dword_60CD0A0C, 920);
    if ( !v21 )
      return result;
LABEL_24:
    v28 = FIELD_U32(a2, 192);
    v29 = FIELD_U32(dword_60CD0A0C, 904);
    v30 = dword_60CC746C(dword_60CD0A0C + 928);
    return (int *)dword_60CC7874(v28, v29, FIELD_U32(v20, 900), v21, v30, HIDWORD(v30));
  }
  v10 = FIELD_U32(a3, 12);
  if ( !FIELD_U8(v10, 76) )
  {
    sub_60922278(dword_60CD0A28 + 2712, a2);
    result = &dword_60CD0A0C;
    v20 = dword_60CD0A0C;
    v21 = FIELD_U32(dword_60CD0A0C, 920);
    if ( !v21 )
      return result;
    goto LABEL_24;
  }
  v11 = FIELD_U32(v10, 508);
  v12 = 0;
  v13 = a1 + 2112;
  if ( v11 >= 2 )
    v11 = 0;
  sub_60922278(v13 + 744 * v11 + 328, a2);
  if ( *(_DWORD *)(FIELD_U32(a3, 12) + 508) < 2u )
    v12 = *(_DWORD *)(FIELD_U32(a3, 12) + 508);
  result = (int *)(v13 + 744 * v12);
  v15 = result[172];
  if ( v15 )
  {
    v16 = a1 + 744 * v12;
    v17 = FIELD_U32(a2, 192);
    v18 = FIELD_U32(v16, 2784);
    v19 = dword_60CC746C(v16 + 2808);
    return (int *)dword_60CC7874(v17, v18, FIELD_U32(v16, 2780), v15, v19, HIDWORD(v19));
  }
  return result;
}
