/* sub_608878A4
 * address: 0x608878A4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608878A4(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r7
  int v10; // r1
  int v11; // r7
  int v12; // r0
  int v13; // r6
  int v14; // r5
  int v15; // r4
  int v16; // r7

  v4 = FIELD_U16(a2, 188);
  FIELD_U32(a1, 68) = v4;
  if ( v4 )
  {
    v5 = 104 * v4 + 32;
    v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 948) + 8))(FIELD_U32(a1, 948), v5, 128);
    FIELD_U32(a1, 952) += v5;
    ++FIELD_U32(a1, 956);
    FIELD_U32(a1, 72) = v6;
    v7 = FIELD_U32(a1, 68);
    if ( v7 )
    {
      v8 = v6 + 104 * v7;
      v9 = v6;
      do
      {
        *(_DWORD *)v9 = off_60C5AA24;
        FIELD_U32(v9, 24) = 0;
        FIELD_U32(v9, 28) = 0;
        FIELD_U32(v9, 32) = 0;
        FIELD_U32(v9, 36) = 0;
        FIELD_U8(v9, 4) = 0;
        v9 += 104;
      }
      while ( v9 != v8 );
      v10 = FIELD_U32(a1, 68);
      FIELD_U32(a1, 76) = v6;
      if ( v10 >= 1 )
      {
        v11 = FIELD_U32(a1, 96);
        ((void (*)(void))sub_608A45B4)();
        if ( FIELD_S32(a1, 68) >= 2 )
        {
          v12 = FIELD_U32(v11, 8);
          v13 = 120;
          v14 = 104;
          v15 = 1;
          v16 = v11 + v12;
          do
          {
            if ( !v12 )
              v16 = 0;
            sub_608A45B4(FIELD_U32(a1, 76) + v14, FIELD_U32(a2, 40) + v13, v16);
            v12 = FIELD_U32(v16, 8);
            ++v15;
            v14 += 104;
            v13 += 120;
            v16 += v12;
          }
          while ( v15 < FIELD_U32(a1, 68) );
        }
      }
      return 1;
    }
    else
    {
      FIELD_U32(a1, 76) = v6;
      return 1;
    }
  }
  else
  {
    FIELD_U32(a1, 72) = 0;
    FIELD_U32(a1, 76) = 0;
    return 0;
  }
}
