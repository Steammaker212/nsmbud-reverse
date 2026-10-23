/* sub_6024B4D0
 * address: 0x6024B4D0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024B4D0(int a1)
{
  int result; // r0
  _WORD *v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r5
  int v8; // r2
  _BYTE *v9; // r1
  int v10; // [sp+0h] [bp-30h]
  int v11; // [sp+4h] [bp-2Ch]
  int v12; // [sp+8h] [bp-28h]

  v3 = (_WORD *)(a1 + 15452);
  result = FIELD_S16(a1, 15452);
  if ( result <= 0 )
  {
    *v3 = ((60 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 240;
    result = FIELD_U8(a1, 15460);
    if ( !FIELD_U8(a1, 15460) )
    {
      v4 = FIELD_U32(a1, 112);
      v5 = FIELD_U32(a1, 116);
      v6 = FIELD_U32(a1, 108);
      v10 = FIELD_U32(a1, 156);
      v11 = FIELD_U32(a1, 160);
      v12 = FIELD_U32(a1, 164);
      v7 = (_DWORD *)(a1 + 12344);
      do
      {
        *v7 = v6;
        v7[1] = v4;
        v7[2] = v5;
        v7[5] = v12;
        v7[4] = v11;
        v7[3] = v10;
        v7 += 6;
      }
      while ( (unsigned int)v7 <= a1 + 15392 );
      v8 = 0;
      v9 = (_BYTE *)(a1 + 15416);
      do
      {
        *v9++ = v8;
        v8 += 12;
      }
      while ( (unsigned int)v9 <= a1 + 15420 );
      FIELD_U8(a1, 15421) = 0;
      if ( !sub_6024B62C(a1 + 15424) )
      {
        sub_6024A7E8((unsigned int *)(a1 + 15424));
        if ( sub_6024B62C(a1 + 15424) != 1 )
        {
          sub_6024A7E8((unsigned int *)(a1 + 15424));
          if ( !sub_6024B62C(a1 + 15424) )
          {
            sub_6024A7E8((unsigned int *)(a1 + 15424));
            if ( !sub_6024B62C(a1 + 15424) )
              sub_6024A7E8((unsigned int *)(a1 + 15424));
          }
        }
      }
      FIELD_U8(a1, 15460) = 1;
      FIELD_U8(a1, 15462) = 1;
      return 1;
    }
  }
  return result;
}
