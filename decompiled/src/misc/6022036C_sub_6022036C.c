/* sub_6022036C
 * address: 0x6022036C   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022036C(int a1, int a2, unsigned int a3)
{
  int v4; // r4
  _DWORD *v5; // r5
  char *v6; // r0
  int v7; // r1
  bool v8; // cc
  char *v9; // r0
  int v10; // r1
  signed int v11; // r6
  int v12; // r0
  _BOOL4 v13; // r1
  int result; // r0
  _DWORD v15[11]; // [sp+4h] [bp-2Ch] BYREF

  v4 = sub_601DFFE4(a2);
  v5 = (_DWORD *)sub_60178694(v4, a3);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(v5[1] + 12))(v5 + 1);
    v6 = (char *)v5[2];
    v7 = 0;
    while ( v6[v7] )
    {
      if ( !v6[v7 + 1] )
      {
        ++v7;
        break;
      }
      if ( !v6[v7 + 2] )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 < 0 )
      v6 = &byte_60B3BA34;
    if ( *v6 == 70 )
      break;
    (*(void (__fastcall **)(_DWORD *))(v5[1] + 12))(v5 + 1);
    v9 = (char *)v5[2];
    v10 = 0;
    while ( v9[v10] )
    {
      if ( !v9[v10 + 1] )
      {
        ++v10;
        break;
      }
      if ( !v9[v10 + 2] )
      {
        v10 += 2;
        break;
      }
      v8 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v8 )
      {
        v10 = 0;
        break;
      }
    }
    if ( v10 < 0 )
      v9 = &byte_60B3BA34;
    if ( *v9 == 87 )
      break;
    v11 = 0;
    do
      v12 = sub_60178694((int)v5, v11++);
    while ( (v12 == 0 || v12 == v4) && v11 < 6 );
    v4 = (int)v5;
    v5 = (_DWORD *)v12;
  }
  v15[0] = v5[21];
  v15[1] = v5[22];
  v15[2] = v5[24];
  if ( sub_601D9FC4((int)v15) )
    return 1;
  if ( sub_601D9FC4((int)v15) )
    return 1;
  if ( sub_601D9FC4((int)v15) )
    return 1;
  if ( sub_601D9FC4((int)v15) )
    return 1;
  v13 = sub_601D9FC4((int)v15);
  result = 0;
  if ( v13 )
    return 1;
  return result;
}
