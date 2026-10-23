/* sub_605BF1F8
 * address: 0x605BF1F8   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF1F8(int a1, unsigned __int8 *a2, _BYTE *a3, float *a4)
{
  char v6; // r12
  char v7; // r2
  int v8; // r6
  char v9; // r5
  char v10; // r4
  char v11; // r7
  int v12; // r0
  char v13; // r3
  int result; // r0
  _DWORD *v15; // r8
  float *v16; // r7
  float v17; // s16
  float v18; // s22
  float v19; // s24
  int v20; // r9
  bool v21; // zf
  int v22; // r0
  float v23; // s0
  unsigned int v24; // r0
  _BYTE *v25; // r5
  int v26; // r7
  char v27; // r0
  int v30; // [sp+28h] [bp-68h]
  int v31; // [sp+2Ch] [bp-64h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = FIELD_U8(a1, 1392);
  if ( v12 )
    FIELD_U8(a1, 1392) = v12 - 1;
  if ( FIELD_U8(a1, 1393) )
    --FIELD_U8(a1, 1393);
  if ( FIELD_U8(a1, 1394) )
    --FIELD_U8(a1, 1394);
  v13 = 0;
  if ( FIELD_U8(a1, 1395) )
    --FIELD_U8(a1, 1395);
  result = 0;
  v31 = 0;
  v30 = 0;
  v15 = *(_DWORD **)(a1 + 1280);
  if ( v15 )
  {
    v16 = a4;
    v17 = (float)(24.0 + 24.0) + (float)(24.0 * -8.0);
    v18 = (float)((float)(v17 + (float)(24.0 + 24.0)) + (float)(24.0 + 24.0)) + (float)(24.0 + 24.0);
    v19 = v18 + (float)(24.0 + 24.0);
    while ( 1 )
    {
      v21 = *v15 == 0;
      if ( *v15 )
      {
        v8 = *(_DWORD *)(*v15 + 2196);
        v21 = v8 == 0;
      }
      if ( v21 )
        goto LABEL_35;
      v22 = FIELD_U8(v8, 533);
      if ( v22 == 2 )
      {
        if ( FIELD_U8(v8, 84) <= 3u )
          goto LABEL_24;
      }
      else if ( v22 == 1 && FIELD_U8(v8, 84) <= 3u )
      {
        sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6531));
LABEL_24:
        v20 = 0;
        v23 = FIELD_F32(v8, 108) - *v16;
        if ( v23 >= v17 )
        {
          v20 = 3;
          if ( v23 >= v18 )
          {
            v20 = 4;
            if ( v23 >= v19 )
            {
              v20 = 6;
              if ( v23 >= (float)((float)(v19 + (float)(24.0 + 24.0)) + (float)(24.0 + 24.0)) )
                v20 = 7;
            }
          }
        }
        ++*((_BYTE *)&v30 + v20);
        if ( FIELD_U8(v8, 533) == 1 )
        {
          v24 = FIELD_S8(v8, 84);
          if ( v24 <= 3 )
          {
            v25 = (_BYTE *)(a1 + v24 + 1392);
            if ( !*v25 )
            {
              if ( ((unsigned int)&dword_60C7B37C & ~(1616639024 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
              {
                dword_60C7B378 = (int)&off_60BC00BC;
                _cxa_guard_release(&dword_60C7B37C);
              }
              v26 = v8 + 1210;
              if ( !(**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) )
                v26 = 1210;
              v27 = *(_BYTE *)v26;
              v16 = a4;
              if ( (v27 & 1) != 0 )
              {
                SE_OBJ_RC_LIGHTBOAT_CREAK_ref(a2, v20, a4);
                *v25 = 4;
              }
            }
          }
        }
      }
LABEL_35:
      v15 = (_DWORD *)v15[1];
      if ( !v15 )
      {
        result = HIBYTE(v31);
        v6 = BYTE2(v31);
        v7 = BYTE1(v31);
        v13 = v31;
        v11 = v30;
        v10 = BYTE1(v30);
        v9 = BYTE2(v30);
        LOBYTE(v8) = HIBYTE(v30);
        break;
      }
    }
  }
  a3[81] = v11;
  a3[165] = v10;
  a3[249] = v9;
  a3[333] = v8;
  a3[417] = v13;
  a3[501] = v7;
  a3[585] = v6;
  a3[669] = result;
  return result;
}
