/* sub_60404000
 * address: 0x60404000   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60404000(int a1)
{
  int v2; // r6
  signed int v3; // r5
  StateMethodExecuter *result; // r0
  int v5; // r1
  float *v6; // r2
  float *v7; // r0
  float v8; // s0
  float v9; // s16
  float *v10; // r0
  float v11; // s6
  int v12; // r0
  float v13; // s0

  v2 = FIELD_U32(a1, 2668);
  if ( FIELD_U32(a1, 2532) == 1 )
    v2 = -v2;
  v3 = sub_6000F7B8(FIELD_F32(a1, 416) - FIELD_F32(a1, 380), FIELD_F32(a1, 424) - FIELD_F32(a1, 388));
  result = (StateMethodExecuter *)(FIELD_U32(a1, 480) + v2);
  FIELD_U32(a1, 480) = result;
  if ( v2 < 0 )
  {
    if ( (int)result >= 0 || (int)result <= v3 )
    {
LABEL_10:
      FIELD_U32(a1, 480) = v3;
      v5 = FIELD_U32(a1, 500);
      if ( v5 == 3 )
      {
        v7 = (float *)(a1 + 2636);
        v6 = (float *)(a1 + 2596);
      }
      else
      {
        if ( v5 != 2 )
        {
          v9 = 1.0;
          v8 = 1.0;
LABEL_16:
          FIELD_F32(a1, 2560) = v8;
          FIELD_F32(a1, 2664) = v9;
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 84))(*(_DWORD *)(FIELD_U32(a1, 16) + 4));
          v10 = (float *)((char *)sinLutTable + (((unsigned int)v3 >> 20) & 0xFF0));
          v11 = (float)(v3 & 0xFFFFFF);
          FIELD_F32(a1, 440) = v9 * (float)(*v10 + (float)((float)(v11 * v10[1]) * 0.000000059605));
          FIELD_U32(a1, 444) = 0;
          FIELD_F32(a1, 448) = v9 * (float)(v10[2] + (float)((float)(v11 * v10[3]) * 0.000000059605));
          FIELD_U8(a1, 2691) = 0;
          FIELD_U8(a1, 2690) = 1;
          v12 = (int)(float)(FIELD_F32(a1, 420) - FIELD_F32(a1, 384));
          if ( v12 < 0 )
          {
            v13 = -1.0;
          }
          else
          {
            if ( !v12 )
            {
LABEL_21:
              FIELD_F32(a1, 2556) = flt_60AF24E4[FIELD_U32(a1, 2544)];
              return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60C99EFC);
            }
            v13 = 1.0;
          }
          FIELD_F32(a1, 444) = v13;
          goto LABEL_21;
        }
        v6 = (float *)(a1 + 2592);
        v7 = (float *)(a1 + 2632);
      }
      v8 = *v7;
      v9 = *v6;
      goto LABEL_16;
    }
  }
  else if ( (int)result < 0 || (int)result >= v3 )
  {
    goto LABEL_10;
  }
  return result;
}
