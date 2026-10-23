/* sub_607D7FBC
 * address: 0x607D7FBC   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7FBC(int a1, int a2, int a3, int a4, int a5, unsigned int a6, char a7)
{
  int v8; // r5
  _DWORD *Area; // r7
  int v10; // r11
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r6
  char v13; // r10
  bool v14; // zf
  unsigned int v15; // r9
  int v16; // r0
  __int16 *v17; // r2
  __int16 v18; // r1
  __int16 v19; // r0
  unsigned int v20; // r0
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r1

  v8 = 0;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = a2;
  FIELD_U32(a1, 8) = a3;
  FIELD_U32(a1, 12) = a4;
  FIELD_U8(a1, 41) = a7;
  Area = (_DWORD *)Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v10 = Area[14];
  v11 = sub_60727908((int)Area, a5);
  v12 = v11;
  v13 = 1;
  v14 = v11 == 0;
  if ( v11 )
  {
    v11 = (unsigned __int8 *)*((unsigned __int16 *)v11 + 2);
    FIELD_U16(a1, 28) = (_WORD)v11;
    v14 = v11 == 0;
  }
  if ( !v14 )
  {
    v15 = a6;
    v8 = 0;
    if ( (unsigned int)v11 <= a6 )
      v15 = 0;
    v16 = sub_60727950(Area, a5) + 20 * FIELD_U16(v10, 2);
    if ( v16 )
    {
      *(_DWORD *)a1 = v16;
      v17 = (__int16 *)(v16 + 20 * v15);
      **(float **)(a1 + 4) = (float)*v17;
      *(float *)(FIELD_U32(a1, 4) + 4) = (float)-v17[1];
      FIELD_U16(a1, 30) = v15;
      FIELD_U16(a1, 32) = v15;
      FIELD_U16(a1, 34) = FIELD_U16(v16, 12);
      v18 = *((_WORD *)v12 + 3);
      FIELD_U16(a1, 36) = v18;
      FIELD_U16(a1, 38) = v17[7];
      FIELD_U8(a1, 42) = 0;
      v19 = v15;
      if ( !FIELD_U8(a1, 41) )
      {
        v21 = FIELD_U16(a1, 28);
        v20 = (unsigned __int16)v15 + 1;
        if ( v20 >= v21 )
        {
          LOWORD(v20) = 0;
          if ( (v18 & 2) == 0 )
            LOWORD(v20) = v21 - 1;
        }
        goto LABEL_15;
      }
      if ( !(_WORD)v15 )
      {
        LOWORD(v20) = 0;
        if ( (v18 & 2) == 0 )
        {
LABEL_15:
          FIELD_U16(a1, 32) = v20;
          v22 = 20 * (unsigned __int16)v20;
          v23 = *(__int16 *)(*(_DWORD *)a1 + v22 + 2);
          FIELD_F32(a1, 16) = (float)*(__int16 *)(*(_DWORD *)a1 + v22);
          FIELD_F32(a1, 20) = (float)-v23;
          sub_607D8178(a1);
          v8 = 1;
          v13 = 0;
          goto LABEL_16;
        }
        v19 = FIELD_U16(a1, 28);
      }
      LOWORD(v20) = v19 - 1;
      goto LABEL_15;
    }
  }
LABEL_16:
  FIELD_U8(a1, 40) = v13;
  return v8;
}
