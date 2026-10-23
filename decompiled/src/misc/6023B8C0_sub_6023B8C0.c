/* sub_6023B8C0
 * address: 0x6023B8C0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6023B8C0(int a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  signed int v4; // r1
  int *v5; // r1
  unsigned int v6; // r0
  _DWORD *result; // r0
  int v8; // r1
  int v9; // r1
  float v10; // s2
  float v11; // s0
  _DWORD *v12; // r0
  int *v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r1
  signed int v18; // [sp+4h] [bp-14h] BYREF

  if ( ((int (__fastcall *)(float))loc_6023F32C)(1.25) )
  {
    v2 = (_BYTE *)(a1 + 12105);
    if ( !FIELD_U8(a1, 12105) )
      goto LABEL_14;
    v3 = FIELD_U32(a1, 80);
    v4 = -67108864;
    if ( !v3 )
      v4 = 0x4000000;
    v18 = v4;
    if ( sub_6083246C((int *)(a1 + 160), (int *)&unk_60C8DB10 + v3 + 1, &v18) == 1 )
    {
      *v2 = 0;
    }
    else if ( *v2 )
    {
      goto LABEL_16;
    }
    sub_6023D424(4.0);
    if ( !*v2 )
    {
LABEL_14:
      v10 = fabsf(FIELD_F32(a1, 11968));
      v11 = fabsf(FIELD_F32(a1, 11972));
      if ( (float)((float)(v11 * v11) + (float)(v10 * v10)) <= 6400.0 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DA78);
    }
LABEL_16:
    sub_6023ECEC(a1);
    nullsub_7();
    v12 = *(_DWORD **)(a1 + 6604);
    v13 = (int *)v12[3];
    v14 = v12[2];
    v15 = v12[17];
    if ( v14 > v15 )
      v13 += v15;
    Animation_update(*v13);
    result = (_DWORD *)(a1 + 12068);
    v16 = FIELD_U32(a1, 12068);
    if ( !v16 || (v17 = v16 - 1, (*result = v17) == 0) )
    {
      *result = 24;
      return (_DWORD *)sub_6071689C(TileMgr_instance, 10, 3, 0);
    }
    return result;
  }
  FIELD_U32(a1, 12064) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DA18);
  v5 = *(int **)(FIELD_U32(a1, 6604) + 12);
  v6 = *(_DWORD *)(FIELD_U32(a1, 6604) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6604) + 8) > v6 )
    v5 += v6;
  Animation_update(*v5);
  result = (_DWORD *)(a1 + 12068);
  v8 = FIELD_U32(a1, 12068);
  if ( !v8 || (v9 = v8 - 1, (*result = v9) == 0) )
  {
    *result = 24;
    return (_DWORD *)sub_6071689C(TileMgr_instance, 10, 3, 0);
  }
  return result;
}
