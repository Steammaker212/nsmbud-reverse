/* sub_60916308
 * address: 0x60916308   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916308(int a1, int a2)
{
  int v4; // r0
  unsigned int v5; // r4
  unsigned __int16 i; // r0
  int v7; // r7
  unsigned __int16 v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r6
  int v14; // r1
  int v15; // r7
  int v16; // r2
  int v17; // r0
  int v18; // r7
  _DWORD *v19; // r4
  int v20; // r0
  int v21; // r3
  int v22; // r1
  unsigned __int16 v24; // [sp+6h] [bp-22h] BYREF

  v24 = sub_6090FB50(a2 + 8, 88);
  sead__CriticalSection__lock(a1 + 116);
  v4 = FIELD_U32(a1, 40);
  if ( (v4 & 1) == 0 )
    goto LABEL_2;
  if ( (v4 & 8) == 0 )
  {
    v9 = sub_608DEEE0((int *)(a1 + 200), (int)&v24, (int (__fastcall *)(_DWORD, int))sub_60916540);
    if ( v9 < 0 )
      goto LABEL_2;
    v10 = 0;
    if ( FIELD_U32(a1, 200) > (unsigned int)v9 )
      v10 = *(_DWORD *)(FIELD_U32(a1, 208) + 4 * v9);
    if ( !dword_60CC766C(v10, a2) )
    {
LABEL_2:
      v5 = FIELD_U16(a1, 198);
      for ( i = v5 + 1; ; i = FIELD_U16(a1, 198) + 1 )
      {
        FIELD_U16(a1, 198) = i;
        if ( i >= FIELD_S32(a1, 188) )
          break;
        v7 = sub_60916550(a1, i, a2, v24);
        if ( v7 != -1 )
          goto LABEL_28;
      }
      v7 = 0;
      FIELD_U16(a1, 198) = 0;
      if ( v5 )
      {
        v8 = 0;
        while ( 1 )
        {
          v7 = sub_60916550(a1, v8, a2, v24);
          if ( v7 != -1 )
            break;
          v8 = FIELD_U16(a1, 198) + 1;
          FIELD_U16(a1, 198) = v8;
          if ( v8 >= v5 )
          {
            v7 = 0;
            goto LABEL_28;
          }
        }
      }
      goto LABEL_28;
    }
    v11 = FIELD_U32(a1, 208);
    v12 = 0;
    v13 = FIELD_U32(a1, 192);
    if ( FIELD_U32(a1, 200) > (unsigned int)v9 )
      v12 = *(_DWORD *)(v11 + 4 * v9);
    v14 = *(_DWORD *)(v11 + 4 * v9);
    v15 = FIELD_U16(a1, 196);
    v16 = FIELD_U16(v14, 96);
    FIELD_U16(v14, 96) = v16 + 1;
    v7 = v15 - 991146299 * ((v12 - v13) >> 3);
    if ( v16 )
      goto LABEL_28;
LABEL_27:
    ++FIELD_U16(a1, 228);
    goto LABEL_28;
  }
  v17 = FIELD_U32(a1, 200);
  if ( !v17 )
    goto LABEL_2;
  v18 = 4 * v17;
  v19 = *(_DWORD **)(a1 + 208);
  while ( !dword_60CC766C(*v19, a2) )
  {
    v18 -= 4;
    ++v19;
    if ( !v18 )
      goto LABEL_2;
  }
  v20 = FIELD_U16(a1, 196);
  v21 = *(unsigned __int16 *)(*v19 + 96);
  v22 = (*v19 - FIELD_U32(a1, 192)) >> 3;
  *(_WORD *)(*v19 + 96) = v21 + 1;
  v7 = v20 - 991146299 * v22;
  if ( !v21 )
    goto LABEL_27;
LABEL_28:
  sead__CriticalSection__unlock(a1 + 116);
  return v7;
}
