/* sub_601D413C
 * address: 0x601D413C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601D413C(_DWORD *a1)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r6
  int v4; // r1
  char *v5; // r0
  bool v6; // cc
  char *v7; // r0
  int v8; // r1
  _DWORD *result; // r0

  a1[274] = a1[273];
  v2 = a1 + 258;
  sub_6019EC34(a1 + 255, a1 + 258);
  sub_6019EC34(v2, a1 + 261);
  if ( sub_601D9D1C(v2) == 1 )
    sub_6019EC34((_DWORD *)(dword_60CC6D78 + 468), v2);
  a1[261] = -1;
  a1[262] = -1;
  a1[263] = -1;
  v3 = (_DWORD *)sub_601E0010(v2);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v4 = 0;
  v5 = (char *)v3[1];
  while ( v5[v4] )
  {
    if ( !v5[v4 + 1] )
    {
      ++v4;
      break;
    }
    if ( !v5[v4 + 2] )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  if ( v4 < 0 )
    v5 = &byte_60B3BA34;
  if ( *v5 == 70 )
    return sub_6019EC34(a1 + 267, v2);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v7 = (char *)v3[1];
  v8 = 0;
  while ( v7[v8] )
  {
    if ( !v7[v8 + 1] )
    {
      ++v8;
      break;
    }
    if ( !v7[v8 + 2] )
    {
      v8 += 2;
      break;
    }
    v6 = v8 + 2 <= 0x7FFFF;
    v8 += 3;
    if ( !v6 )
    {
      v8 = 0;
      break;
    }
  }
  if ( v8 < 0 )
    v7 = &byte_60B3BA34;
  result = (_DWORD *)(unsigned __int8)*v7;
  if ( result == (_DWORD *)87 )
    return sub_6019EC34(a1 + 267, v2);
  return result;
}
