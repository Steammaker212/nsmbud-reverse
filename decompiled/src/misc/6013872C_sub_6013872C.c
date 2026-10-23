/* sub_6013872C
 * address: 0x6013872C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6013872C(int a1)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r0
  float v4; // s0
  int v5; // r0
  int *v6; // r1
  int v7; // r5
  int v8; // r2
  float v9; // s8
  StateMethodExecuter *result; // r0

  v2 = (_BYTE *)(a1 + 6140);
  if ( FIELD_U8(a1, 6140) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    *v2 = 0;
    FIELD_U8(a1, 6141) = 1;
    v3 = (_BYTE *)(a1 + 6141);
  }
  else
  {
    v3 = (_BYTE *)(a1 + 6141);
    if ( !FIELD_U8(a1, 6141) )
      goto LABEL_6;
  }
  v4 = FIELD_F32(a1, 144) + -0.125;
  FIELD_F32(a1, 144) = v4;
  FIELD_F32(a1, 148) = v4;
  FIELD_F32(a1, 152) = v4;
  if ( v4 <= 0.0 )
  {
    FIELD_U32(a1, 144) = 0;
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    *v3 = 0;
  }
LABEL_6:
  v6 = (int *)(a1 + 6144);
  v5 = FIELD_U32(a1, 6144);
  if ( v5 >= 1 )
  {
    v5 += dword_60C87970;
    *v6 = v5;
    if ( (float)(*(float *)((char *)sinLutTable + (((unsigned int)v5 >> 20) & 0xFF0))
               + (float)((float)((float)(v5 & 0xFFFFFF)
                               * *(float *)((char *)&sinLutTable[1] + (((unsigned int)v5 >> 20) & 0xFF0)))
                       * 0.000000059605)) < 0.0 )
    {
      v5 = 0;
      *v6 = 0;
      v7 = dword_60C87984;
      v8 = dword_60C87988;
      FIELD_U32(a1, 144) = dword_60C87980;
      FIELD_U32(a1, 148) = v7;
      FIELD_U32(a1, 152) = v8;
    }
  }
  if ( FIELD_U8(a1, 6142) )
  {
    v5 = dword_60C87970;
    *v6 = dword_60C87970;
    FIELD_U8(a1, 6142) = 0;
  }
  if ( v5 >= 1 )
  {
    v9 = *(float *)&dword_60C87980
       + (float)((float)(*(float *)((char *)sinLutTable + (((unsigned int)v5 >> 20) & 0xFF0))
                       + (float)((float)((float)(v5 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + (((unsigned int)v5 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 0.5);
    FIELD_F32(a1, 144) = v9;
    FIELD_F32(a1, 148) = v9;
    FIELD_F32(a1, 152) = v9;
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 6148);
  if ( FIELD_U8(a1, 6148) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C87918);
  return result;
}
