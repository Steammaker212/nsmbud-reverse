/* sub_608AAA10
 * address: 0x608AAA10   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AAA10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r6
  int v11; // r5
  int v12; // r0
  int v13; // r6
  int v14; // r7
  unsigned int v15; // r7
  _DWORD v17[2]; // [sp+Ch] [bp-44h] BYREF
  int v18; // [sp+14h] [bp-3Ch]
  int v19; // [sp+20h] [bp-30h]
  char v20; // [sp+2Ch] [bp-24h]
  int v21; // [sp+30h] [bp-20h] BYREF
  _DWORD v22[7]; // [sp+34h] [bp-1Ch] BYREF

  v10 = 0;
  if ( (a3 & 0xFFF) == 0 )
  {
    v11 = a3 + a4;
    v21 = a3;
    v10 = 0;
    if ( sub_608AAC68(a1, a2, &v21, a3 + a4) == 1 )
    {
      if ( sub_608A9E10(a2, (int)v17) == 1 )
      {
        v10 = 0;
        if ( sub_608C12FC(a1 + 264, v18, &v21, v11, a7, a8) != 1 )
          return v10;
        FIELD_U8(a1, 406) = v20;
        if ( sub_608B994C(a1 + 40, v17[0], &v21, v11) != 1 )
          return v10;
        if ( FIELD_U8(a1, 406) )
        {
          if ( !sub_608AE59C(a1 + 232, v19, &v21, v11) )
            return v10;
        }
        else if ( sub_608CCC78(a1 + 160, v19, &v21, v11) != 1 )
        {
          return v10;
        }
        if ( sub_608B9E94(a1 + 40, v17[1], &v21, v11) != 1 )
          return v10;
      }
      if ( a6 >= 1 )
      {
        v12 = v21;
        v10 = 0;
        if ( (v21 & 0x3F) != 0 || (int)(v21 + ((96 * a6 + 63) & 0xFFFFFFC0) - v11) > 0 )
          return v10;
        v21 += (96 * a6 + 63) & 0xFFFFFFC0;
        FIELD_U32(a1, 368) = a6;
        FIELD_U32(a1, 372) = v12;
        ((void (*)(void))sub_608AE4A4)();
        if ( FIELD_S32(a1, 368) >= 2 )
        {
          v13 = 1;
          v14 = 96;
          do
          {
            sub_608AE4A4(FIELD_U32(a1, 372) + v14);
            ++v13;
            v14 += 96;
          }
          while ( v13 < FIELD_U32(a1, 368) );
        }
      }
      if ( a5 )
      {
        v10 = 0;
        if ( (v21 & 0x3F) == 0 )
        {
          v22[0] = v21;
          v15 = (a5 + 3) & 0xFFFFFFFC;
          v21 += (v19 + v17[0] + v18) * v15;
          if ( FIELD_U8(a1, 406) )
            sub_608AE904(a1 + 232, v22, (a5 + 3) & 0xFFFFFFFC);
          else
            sub_608CD1E8(a1 + 160, v22, (a5 + 3) & 0xFFFFFFFC);
          sub_608B9EE8(a1 + 40, v22, v15);
          sub_608C19E4(a1 + 264, v22, v15);
          FIELD_U32(a1, 364) = v15;
          if ( v22[0] - v11 <= 0 )
            return 1;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  return v10;
}
