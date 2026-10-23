/* sub_60725B38
 * address: 0x60725B38   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60725B38(int a1, int a2, int a3, int a4)
{
  int result; // r0
  __int16 v9; // r4
  unsigned __int16 *v10; // r9
  unsigned __int16 v11; // lr
  _WORD *v12; // r12
  _WORD *v13; // r8
  int v14; // r1
  int v15; // r2
  int v16; // r11
  int v17; // r10
  int v18; // r4
  int v19; // r4
  int v20; // r4
  int v21; // r0
  _WORD *v22; // [sp+10h] [bp-38h]
  __int16 v24; // [sp+18h] [bp-30h]
  int v25; // [sp+1Ch] [bp-2Ch]
  int v26; // [sp+20h] [bp-28h] BYREF

  v24 = FIELD_U16(a2, 3094);
  FIELD_U16(a2, 3084) = v24;
  result = FIELD_U16(a2, 3096);
  FIELD_U16(a2, 3086) = result;
  v9 = FIELD_U16(a2, 3078);
  v26 = 0;
  v10 = (unsigned __int16 *)(a2 + 3100);
  v11 = FIELD_U16(a2, 3100);
  if ( v11 )
  {
    if ( (v9 & 0xFFFE) == 2 )
    {
      v12 = (_WORD *)(a2 + 3086);
      v13 = (_WORD *)(a2 + 3084);
      v14 = 0;
      v22 = (_WORD *)(a2 + 3098);
      v15 = 0;
      do
      {
        v16 = v15 + 3;
        v17 = (unsigned __int16)*v22;
        do
        {
          v18 = *(unsigned __int8 *)(FIELD_U32(a2, 3072) + v16);
          v16 += 3;
        }
        while ( v18 != 254 );
        if ( *v22 )
        {
          v19 = v15 + 1;
          v25 = v14;
          do
          {
            sub_6072342C(a1, a2, v19);
            sub_6072334C(a1, (_WORD *)a2, a3);
            if ( FIELD_U16(a2, 3082) != 0xFFFF )
              sub_607261E4(a1, a2, 1);
            --v17;
            ++*v13;
          }
          while ( v17 );
          v12 = (_WORD *)(a2 + 3086);
          v14 = v25;
          v11 = FIELD_U16(a2, 3100);
          result = FIELD_U16(a2, 3086);
        }
        ++result;
        ++v14;
        *v13 = v24;
        *v12 = result;
        v15 = v16 - 2;
        if ( v16 - 2 >= a4 )
          v15 = 0;
      }
      while ( v14 < v11 );
      v26 = v15;
    }
    else
    {
      v20 = 0;
      do
      {
        sub_60723CC0(a1, a2, &v26, FIELD_U16(a2, 3098), a3);
        ++v20;
        v21 = v26 + 1;
        if ( v26 + 1 >= a4 )
          v21 = 0;
        v26 = v21;
        result = *v10;
      }
      while ( v20 < result );
    }
  }
  return result;
}
