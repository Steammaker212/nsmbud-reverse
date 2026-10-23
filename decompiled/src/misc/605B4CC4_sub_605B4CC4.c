/* sub_605B4CC4
 * address: 0x605B4CC4   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B4CC4(int a1)
{
  unsigned __int8 *v2; // r6
  unsigned __int8 v3; // r0
  unsigned __int8 v4; // r0
  unsigned __int8 v5; // r0
  unsigned __int8 v6; // r0
  int v7; // r5
  int v8; // r0
  int v10; // r0
  int v11; // r1
  _BYTE *v12; // r0
  int v13; // r2
  int v14; // r3
  unsigned __int8 *v15; // r6
  unsigned __int8 v16; // r0
  unsigned __int8 v17; // r0
  unsigned __int8 v18; // r0
  unsigned __int8 v19; // r0
  int v20; // r3
  int v21; // r3
  bool v22; // zf
  int v23; // r3
  bool v24; // zf
  int v25; // r3
  int v26; // r3
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r1

  if ( FIELD_U8(a1, 6843) || FIELD_U32(a1, 6824) != -1 || FIELD_U32(a1, 6828) )
  {
    FIELD_U8(a1, 6850) = 0;
    v2 = (unsigned __int8 *)(a1 + 6850);
    v3 = FIELD_U8(a1, 6917);
    if ( v3 != 255 )
    {
      *v2 = v3;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6917) = -1;
    }
    v4 = FIELD_U8(a1, 6929);
    if ( v4 != 255 )
    {
      *v2 = v4;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6929) = -1;
    }
    v5 = FIELD_U8(a1, 6941);
    if ( v5 != 255 )
    {
      *v2 = v5;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6941) = -1;
    }
    v6 = FIELD_U8(a1, 6953);
    if ( v6 != 255 )
    {
      *v2 = v6;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6953) = -1;
    }
    v7 = 3;
    v8 = FIELD_U32(a1, 6824);
    if ( v8 == -1 )
    {
      LOBYTE(v8) = 2;
      v7 = 1;
    }
    FIELD_U8(a1, 6849) = v8;
    if ( FIELD_U32(a1, 6828) )
    {
      *v2 = -1;
      return 3;
    }
    return v7;
  }
  v10 = FIELD_U8(a1, 6845);
  if ( v10 == 3 )
  {
    FIELD_U8(a1, 6850) = 0;
    v15 = (unsigned __int8 *)(a1 + 6850);
    FIELD_U8(a1, 6849) = 2;
    v16 = FIELD_U8(a1, 6918);
    if ( v16 != 255 )
    {
      *v15 = v16;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v17 = FIELD_U8(a1, 6930);
    if ( v17 != 255 )
    {
      *v15 = v17;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v18 = FIELD_U8(a1, 6942);
    if ( v18 != 255 )
    {
      *v15 = v18;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v7 = 1;
    v19 = FIELD_U8(a1, 6954);
    if ( v19 != 255 )
    {
      *v15 = v19;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      return 1;
    }
  }
  else
  {
    v7 = 0;
    if ( v10 == 2 )
    {
      v11 = 0;
      FIELD_U8(a1, 6850) = 0;
      v12 = (_BYTE *)(a1 + 6850);
      v13 = dword_60CC6D8C;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        v14 = FIELD_U8(a1, 6920);
        if ( v14 != 255 )
        {
          *v12 = v14;
          v11 = 1;
        }
      }
      else
      {
        v20 = FIELD_U8(a1, 6916);
        if ( v20 != 255 )
          *v12 = v20;
      }
      if ( FIELD_U8(v13, 17) )
      {
        v21 = FIELD_U8(a1, 6932);
        v22 = v21 == 255;
        if ( v21 != 255 )
          v11 = 1;
      }
      else
      {
        v21 = FIELD_U8(a1, 6928);
        v22 = v21 == 255;
      }
      if ( !v22 )
        *v12 = v21;
      if ( FIELD_U8(v13, 17) )
      {
        v23 = FIELD_U8(a1, 6944);
        v24 = v23 == 255;
        if ( v23 != 255 )
          v11 = 1;
      }
      else
      {
        v23 = FIELD_U8(a1, 6940);
        v24 = v23 == 255;
      }
      if ( !v24 )
        *v12 = v23;
      if ( FIELD_U8(v13, 17) )
      {
        v25 = FIELD_U8(a1, 6956);
        if ( v25 != 255 )
        {
          *v12 = v25;
LABEL_60:
          v7 = 2;
          FIELD_U8(a1, 6849) = 3;
          return v7;
        }
      }
      else
      {
        v26 = FIELD_U8(a1, 6952);
        if ( v26 != 255 )
          *v12 = v26;
      }
      if ( !(v11 | (FIELD_U8(v13, 17) == 0)) )
      {
        v27 = FIELD_U8(a1, 6916);
        if ( v27 != 255 )
          *v12 = v27;
        v28 = FIELD_U8(a1, 6928);
        if ( v28 != 255 )
          *v12 = v28;
        v29 = FIELD_U8(a1, 6940);
        if ( v29 != 255 )
          *v12 = v29;
        v30 = FIELD_U8(a1, 6952);
        if ( v30 != 255 )
          *v12 = v30;
      }
      goto LABEL_60;
    }
  }
  return v7;
}
