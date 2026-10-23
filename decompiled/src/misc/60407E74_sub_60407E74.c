/* sub_60407E74
 * address: 0x60407E74   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407E74(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v9; // lr
  int v10; // r4
  int v11; // r0
  int *v12; // r9
  int v13; // r5
  unsigned int v14; // r6
  int v15; // r4
  int v16; // r0
  int v17; // r5
  int v18; // r5
  int v19; // r9
  int v20; // r7
  int v21; // r10
  int v22; // r0
  _DWORD v23[10]; // [sp+8h] [bp-28h] BYREF

  if ( FIELD_U32(dword_60C99DD4, 764) != 2 || a3 > 0x19 || (result = 1, ((1 << a3) & 0x3E000FF) == 0) )
  {
    v9 = a6;
    v10 = 0;
    v12 = (int *)(a1 + 231376);
    v11 = FIELD_U32(a1, 231376);
    while ( 1 )
    {
      v13 = 0;
      v14 = (v11 + v10) % 60;
      if ( v14 < 0x3C )
        v13 = (v11 + v10) % 60;
      if ( !*(_BYTE *)(a1 + 3856 * v13 + 3832) )
        break;
      if ( ++v10 >= 60 )
      {
        v15 = 0;
        while ( 1 )
        {
          v13 = 0;
          v14 = (v11 + v15) % 60;
          if ( v14 < 0x3C )
            v13 = (v11 + v15) % 60;
          if ( *(_DWORD *)(a1 + 3856 * v13 + 3808) != 32 )
            goto LABEL_15;
          if ( ++v15 > 59 )
            goto LABEL_17;
        }
      }
    }
LABEL_15:
    *v12 = v14;
    if ( a3 == 21 )
    {
      v16 = a1 + 3856 * v13;
      v17 = a2;
      PointGet_1UP_00_ref_2(v16 + 16, a2, 21, 3856);
      v9 = a6;
      a2 = v17;
      a3 = 21;
    }
LABEL_17:
    v18 = *v12;
    v19 = 0;
    v20 = 0;
    if ( (unsigned int)v18 < 0x3C )
      v19 = v18;
    v21 = a1 + 3856 * v19;
    FIELD_U32(v21, 3860) = a4;
    v22 = v21 + 16;
    if ( a4 < 0 )
    {
      v23[0] = FIELD_U32(dword_60C99DD4, 304);
      ((void (__fastcall *)(int, int, unsigned int, _DWORD *, int, _DWORD))sub_6054F8EC)(v22, a2, a3, v23, v9, 0);
      FIELD_U8(v21, 3838) = 1;
    }
    else
    {
      if ( (unsigned int)a4 < 6 )
        v20 = a4;
      v23[0] = *(_DWORD *)(dword_60C99DD4 + 72 * v20 + 304);
      ((void (__fastcall *)(int, int, unsigned int, _DWORD *, int, int))sub_6054F8EC)(v22, a2, a3, v23, v9, a4);
    }
    if ( a5 == 1 )
      *(_BYTE *)(a1 + 3856 * v19 + 3833) = 1;
    FIELD_U32(a1, 231380) = v18;
    result = v18 + 1;
    if ( v18 > 58 )
      result = 0;
    FIELD_U32(a1, 231376) = result;
  }
  return result;
}
