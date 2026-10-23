/* sub_6056B4E4
 * address: 0x6056B4E4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056B4E4(int a1)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 v3; // r0
  unsigned __int8 v4; // r0
  unsigned __int8 v5; // r0
  unsigned __int8 v6; // r0
  int v8; // r0
  int v9; // r5
  _BYTE *v10; // r4
  int v11; // r0
  unsigned __int8 *v12; // r6
  unsigned __int8 v13; // r0
  unsigned __int8 v14; // r0
  unsigned __int8 v15; // r0
  unsigned __int8 v16; // r0

  if ( FIELD_U8(a1, 6843) || FIELD_U32(a1, 6824) != -1 )
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
    FIELD_U8(a1, 6849) = 2;
    return 1;
  }
  v8 = FIELD_U8(a1, 6845);
  if ( v8 == 3 )
  {
    FIELD_U8(a1, 6850) = 0;
    v12 = (unsigned __int8 *)(a1 + 6850);
    FIELD_U8(a1, 6849) = 2;
    v13 = FIELD_U8(a1, 6918);
    if ( v13 != 255 )
    {
      *v12 = v13;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v14 = FIELD_U8(a1, 6930);
    if ( v14 != 255 )
    {
      *v12 = v14;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v15 = FIELD_U8(a1, 6942);
    if ( v15 != 255 )
    {
      *v12 = v15;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    v9 = 1;
    v16 = FIELD_U8(a1, 6954);
    if ( v16 != 255 )
    {
      *v12 = v16;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    }
    return v9;
  }
  v9 = 0;
  if ( v8 != 2 )
    return v9;
  FIELD_U8(a1, 6850) = 0;
  v10 = (_BYTE *)(a1 + 6850);
  v11 = (unsigned __int8)v10[66];
  if ( v11 == 255 )
    LOBYTE(v11) = 0;
  *v10 = v11;
  if ( (unsigned __int8)v10[78] != 255 )
    LOBYTE(v11) = v10[78];
  *v10 = v11;
  if ( (unsigned __int8)v10[90] != 255 )
    LOBYTE(v11) = v10[90];
  *v10 = v11;
  if ( (unsigned __int8)v10[102] != 255 )
    LOBYTE(v11) = v10[102];
  *v10 = v11;
  *(v10 - 1) = 3;
  return 2;
}
