/* sub_604FDA90
 * address: 0x604FDA90   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FDA90(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  int v4; // r0
  _BYTE *v5; // r8
  _BYTE *v6; // r9
  int v7; // r5
  int v8; // r0
  int v9; // r4
  int v10; // r7
  int i; // r2
  int result; // r0

  v3 = (_DWORD *)(a1 + 40080);
  v2 = FIELD_U32(a1, 40080);
  v5 = (_BYTE *)(a1 + 40012);
  v4 = FIELD_U8(a1, 40012);
  if ( v2 )
  {
    if ( !v4 )
    {
      sub_604742D0((_DWORD *)(a1 + 31900), 2u, &dword_60CA70A0, FIELD_U32(a1, 39788), 1.0, 0);
      *v5 = 1;
    }
  }
  else if ( v4 )
  {
    sub_60474420((_DWORD *)(a1 + 31900), 2u, &dword_60CA70A0, FIELD_U32(a1, 39788), 0);
    *v5 = 0;
  }
  v6 = (_BYTE *)(a1 + 40013);
  if ( *v3 == FIELD_U32(a1, 40084) - 1 )
  {
    if ( FIELD_U8(a1, 40013) )
    {
      sub_60474420((_DWORD *)(a1 + 31900), 3u, &dword_60CA70A0, FIELD_U32(a1, 39792), 0);
      *v6 = 0;
    }
  }
  else if ( !FIELD_U8(a1, 40013) )
  {
    sub_604742D0((_DWORD *)(a1 + 31900), 3u, &dword_60CA70A0, FIELD_U32(a1, 39792), 1.0, 0);
    *v6 = 1;
  }
  v7 = a1 + 35508;
  sub_60502B04(a1 + 35508, &unk_60B035A4, 1);
  sub_60502B04(a1 + 35508, &unk_60B035A8, 1);
  v8 = sub_6047482C(a1 + 31900, 1u);
  v9 = v8;
  if ( v8 )
  {
    v10 = FIELD_U32(v8, 56);
    (*(void (__fastcall **)(int *))(dword_60CA70B8 + 12))(&dword_60CA70B8);
    (*(void (__fastcall **)(int *))(dword_60CA70B8 + 12))(&dword_60CA70B8);
    if ( dword_60CA70BC == v10 )
    {
LABEL_20:
      result = (int)FIELD_F32(v9, 16);
      if ( result )
        return result;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA70BC + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA70BC + i - 1) )
          goto LABEL_20;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA70BC + i) != *(unsigned __int8 *)(v10 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA70BC + i) )
          goto LABEL_20;
      }
    }
  }
  if ( *v5 )
    sub_60502C84(v7, &unk_60B035A4, 1);
  result = (unsigned __int8)*v6;
  if ( *v6 )
    return sub_60502C84(v7, &unk_60B035A8, 1);
  return result;
}
