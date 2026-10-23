/* sub_60022E9C
 * address: 0x60022E9C   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60022E9C(int a1)
{
  bool v2; // zf
  int result; // r0
  int Area; // r5
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  int v9; // r3
  int v10; // r0
  int v11; // r4
  unsigned __int8 *v12; // r5
  int v13; // r0
  int v14; // r4
  unsigned __int8 *v15; // r5
  int v16; // r0
  int v17; // r4
  unsigned __int8 *v18; // r5
  int v19; // r4
  unsigned __int8 *v20; // r5

  v2 = dword_60C9A230 == 0;
  if ( dword_60C9A230 )
    v2 = FIELD_U8(dword_60C9A230, 2084) == 0;
  if ( !v2 )
  {
    sub_60815C90(dword_60CC6B68, FIELD_U32(a1, 40));
    FIELD_U8(a1, 5) = 1;
    return 1;
  }
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v5 = sub_60727D48(Area, FIELD_U8(LevelInfo_instance, 19));
  v6 = sub_60727620(Area, FIELD_U8(v5, 13), 0);
  v7 = dword_60C9A230 == 0;
  if ( dword_60C9A230 )
    v7 = FIELD_U8(dword_60C9A230, 2084) == 0;
  if ( !v7 )
  {
    FIELD_U8(a1, 19) = 0;
    goto LABEL_19;
  }
  *(_DWORD *)a1 = FIELD_U8(v6, 22);
  FIELD_U8(a1, 19) = 0;
  v8 = FIELD_U8(v6, 23);
  if ( (v8 & 0xF) == 2 )
  {
    v9 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v9 = dword_60C99DEC + 16;
    v2 = (FIELD_U8(v9, 576) & 1) == 0;
    FIELD_U8(a1, 4) = !(FIELD_U8(v9, 576) & 1);
    if ( !v2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (v8 & 0xF) != 0 )
  {
    FIELD_U8(a1, 4) = 1;
LABEL_17:
    FIELD_U8(a1, 19) = 0;
    goto LABEL_18;
  }
  FIELD_U8(a1, 4) = 0;
LABEL_18:
  sub_60815F14(dword_60CC6B68, v8 >> 4);
LABEL_19:
  sub_60024074(*(_DWORD *)a1, 0);
  sub_60815C90(dword_60CC6B68, FIELD_U32(a1, 40));
  FIELD_U8(a1, 5) = 1;
  v10 = Level_getArea(Level_instance, 0);
  if ( v10 )
  {
    v11 = FIELD_U32(v10, 160);
    if ( v11 >= 1 )
    {
      v12 = (unsigned __int8 *)(FIELD_U32(v10, 40) + 22);
      do
      {
        if ( v12 != (unsigned __int8 *)22 )
          sub_60817728(dword_60CC6B68, *v12);
        v12 += 28;
        --v11;
      }
      while ( v11 );
    }
  }
  v13 = Level_getArea(Level_instance, 1u);
  if ( v13 )
  {
    v14 = FIELD_U32(v13, 160);
    if ( v14 >= 1 )
    {
      v15 = (unsigned __int8 *)(FIELD_U32(v13, 40) + 22);
      do
      {
        if ( v15 != (unsigned __int8 *)22 )
          sub_60817728(dword_60CC6B68, *v15);
        v15 += 28;
        --v14;
      }
      while ( v14 );
    }
  }
  v16 = Level_getArea(Level_instance, 2u);
  if ( v16 )
  {
    v17 = FIELD_U32(v16, 160);
    if ( v17 >= 1 )
    {
      v18 = (unsigned __int8 *)(FIELD_U32(v16, 40) + 22);
      do
      {
        if ( v18 != (unsigned __int8 *)22 )
          sub_60817728(dword_60CC6B68, *v18);
        v18 += 28;
        --v17;
      }
      while ( v17 );
    }
  }
  result = Level_getArea(Level_instance, 3u);
  if ( result )
  {
    v19 = FIELD_U32(result, 160);
    if ( v19 >= 1 )
    {
      v20 = (unsigned __int8 *)(FIELD_U32(result, 40) + 22);
      result = 0xC3F7C0u;
      do
      {
        if ( v20 != (unsigned __int8 *)22 )
          result = sub_60817728(dword_60CC6B68, *v20);
        v20 += 28;
        --v19;
      }
      while ( v19 );
    }
  }
  return result;
}
