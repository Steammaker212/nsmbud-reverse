/* sub_605B5054
 * address: 0x605B5054   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B5054(int a1)
{
  int *v2; // r5
  unsigned __int8 *v3; // r6
  unsigned __int8 v4; // r0
  unsigned __int8 v5; // r0
  unsigned __int8 v6; // r0
  unsigned __int8 v7; // r0
  int v8; // r0
  int v9; // r5
  unsigned __int8 *v11; // r6
  unsigned __int8 v12; // r0
  unsigned __int8 v13; // r0
  unsigned __int8 v14; // r0
  unsigned __int8 v15; // r0

  v2 = (int *)(a1 + 6824);
  if ( FIELD_U32(a1, 6824) == -1 && !FIELD_U32(a1, 6828) )
  {
    v9 = 0;
    if ( FIELD_U8(a1, 6845) == 3 )
    {
      FIELD_U8(a1, 6850) = 0;
      v11 = (unsigned __int8 *)(a1 + 6850);
      FIELD_U8(a1, 6849) = 2;
      v12 = FIELD_U8(a1, 6918);
      if ( v12 != 255 )
      {
        *v11 = v12;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      }
      v13 = FIELD_U8(a1, 6930);
      if ( v13 != 255 )
      {
        *v11 = v13;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      }
      v14 = FIELD_U8(a1, 6942);
      if ( v14 != 255 )
      {
        *v11 = v14;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      }
      v9 = 1;
      v15 = FIELD_U8(a1, 6954);
      if ( v15 != 255 )
      {
        *v11 = v15;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      }
    }
  }
  else
  {
    FIELD_U8(a1, 6850) = 0;
    v3 = (unsigned __int8 *)(a1 + 6850);
    v4 = FIELD_U8(a1, 6917);
    if ( v4 != 255 )
    {
      *v3 = v4;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6917) = -1;
    }
    v5 = FIELD_U8(a1, 6929);
    if ( v5 != 255 )
    {
      *v3 = v5;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6929) = -1;
    }
    v6 = FIELD_U8(a1, 6941);
    if ( v6 != 255 )
    {
      *v3 = v6;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6941) = -1;
    }
    v7 = FIELD_U8(a1, 6953);
    if ( v7 != 255 )
    {
      *v3 = v7;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
      FIELD_U8(a1, 6953) = -1;
    }
    v8 = *v2;
    v9 = 3;
    if ( v8 == -1 )
    {
      LOBYTE(v8) = 2;
      v9 = 1;
    }
    FIELD_U8(a1, 6849) = v8;
    if ( FIELD_U32(a1, 6828) )
    {
      *v3 = -1;
      return 3;
    }
  }
  return v9;
}
