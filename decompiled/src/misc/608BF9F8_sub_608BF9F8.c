/* sub_608BF9F8
 * address: 0x608BF9F8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BF9F8(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf
  int *v5; // r2
  int v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r6
  int v14; // r5
  int v15; // r1
  int v16; // r7
  _DWORD *v17; // r6
  int v18; // r1

  result = FIELD_U32(a1, 204);
  if ( !result )
  {
    v3 = FIELD_U32(a1, 200);
    v4 = v3 == 0;
    if ( v3 )
    {
      result = FIELD_U32(v3, 24);
      v4 = result == v3 + 20;
    }
    if ( v4 )
      return result;
    v5 = *(int **)(result + 4);
    v6 = *v5;
    *(_DWORD *)(*(_DWORD *)result + 4) = v5;
    *v5 = *(_DWORD *)result;
    FIELD_U32(v6, 4) = result;
    *(_DWORD *)result = v6;
    result -= 9992;
    FIELD_U32(a1, 204) = result;
  }
  if ( !FIELD_U8(a1, 56248) )
  {
    sub_608D72C4();
    sub_608BDDB4(a1, (_BYTE *)(a1 + 56252));
    sub_608BE484(a1, (const void *)(a1 + 55556));
    result = FIELD_U32(a1, 204);
  }
  if ( !result )
    return result;
  sub_608D74FC();
  v7 = FIELD_U32(a1, 236);
  if ( v7 >= 1 )
  {
    result = v7 - 1;
    FIELD_U32(a1, 236) = result;
    return result;
  }
  v8 = FIELD_U8(a1, 186) == 0;
  if ( FIELD_U8(a1, 186) )
    v8 = FIELD_U8(a1, 177) == 0;
  if ( !v8 && !FIELD_U8(a1, 37) )
    ((void (__fastcall *)(int))loc_608BED14)(a1);
  sub_608BFC10(a1);
  if ( !FIELD_U8(a1, 37) )
  {
LABEL_24:
    if ( FIELD_U8(a1, 181) )
    {
      if ( !sub_608D7588(FIELD_U32(a1, 204)) && !byte_60CC8CD1 )
      {
        FIELD_U8(a1, 181) = 0;
        FIELD_U8(a1, 184) = 0;
        v14 = FIELD_U8(a1, 38);
        if ( v14 != FIELD_U8(a1, 180) )
        {
          v15 = FIELD_U32(a1, 996);
          if ( v15 >= 1 )
          {
            v16 = 0;
            v17 = (_DWORD *)(a1 + 1028);
            do
            {
              if ( *v17 )
              {
                v18 = v14;
                if ( v14 )
                  v18 = 1;
                sub_608C9520(*v17, v18);
                v15 = FIELD_U32(a1, 996);
              }
              ++v16;
              v17 += 832;
            }
            while ( v16 < v15 );
          }
          FIELD_U8(a1, 180) = v14;
        }
      }
    }
    result = FIELD_U8(a1, 183);
    if ( FIELD_U8(a1, 183) )
    {
      result = 0;
      FIELD_U8(a1, 183) = 0;
    }
    return result;
  }
  v9 = FIELD_U32(a1, 996);
  if ( v9 < 1 )
  {
LABEL_21:
    if ( FIELD_S32(a1, 1000) >= 1 )
    {
      v12 = a1 + 54272;
      v13 = 0;
      do
      {
        ((void (__fastcall *)(int, int))loc_608C00F8)(a1, v12);
        ++v13;
        v12 += 112;
      }
      while ( v13 < FIELD_U32(a1, 1000) );
    }
    goto LABEL_24;
  }
  v10 = 0;
  v11 = 1028;
  while ( *(_DWORD *)(a1 + v11) )
  {
    ++v10;
    v11 += 3328;
    if ( v10 >= v9 )
      goto LABEL_21;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  FIELD_U8(a1, 39) = 1;
  return 1;
}
