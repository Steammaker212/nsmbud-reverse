/* sub_6074E918
 * address: 0x6074E918   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6074E918(int a1, _DWORD *a2)
{
  char *v4; // r5
  char *v5; // r9
  int v6; // r0
  signed int v7; // r7
  char *v9; // r0
  int v10; // r1
  int i; // r2
  int j; // r3
  bool v13; // cc
  int v14; // r3
  int v15; // r5
  nn__prepo__PlayReport *v16; // r4
  int (**v17)(); // [sp+4h] [bp-4Ch] BYREF
  char *v18; // [sp+8h] [bp-48h]
  int v19; // [sp+Ch] [bp-44h]
  int v20; // [sp+10h] [bp-40h] BYREF

  if ( !FIELD_U8(a1, 16) )
    return 0;
  v18 = (char *)&v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 31;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  v17 = &off_60C23BD8;
  v4 = v18;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v5 = (char *)a2[1];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = a2[1];
    v7 = 0;
    while ( *(_BYTE *)(v6 + v7) )
    {
      if ( !*(_BYTE *)(v6 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v6 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v13 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v13 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 >= v19 )
      v7 = v19 - 1;
    qmemcpy(v4, v5, v7);
    v4[v7] = 0;
  }
  v17 = &off_60C23BC0;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  v9 = v18;
  v10 = 0;
  while ( v18[v10] )
  {
    if ( !v18[v10 + 1] )
    {
      ++v10;
      break;
    }
    if ( !v18[v10 + 2] )
    {
      v10 += 2;
      break;
    }
    v13 = v10 + 2 <= 0x7FFFF;
    v10 += 3;
    if ( !v13 )
    {
      v10 = 0;
      break;
    }
  }
  for ( i = 0; aAbcdefghijklmn[i]; i += 2 )
  {
    if ( i > 0x7FFFF )
    {
      i = 0;
      break;
    }
    if ( !aAbcdefghijklmn[i + 1] )
    {
      ++i;
      break;
    }
  }
  for ( j = 0; aAbcdefghijklmn_0[j]; j += 2 )
  {
    if ( j > 0x7FFFF )
    {
      j = 0;
      break;
    }
    if ( !aAbcdefghijklmn_0[j + 1] )
    {
      ++j;
      break;
    }
  }
  if ( i > j )
    i = j;
  v13 = v10 < 1;
  if ( v10 >= 1 )
    v13 = i < 1;
  if ( !v13 )
  {
    v14 = 0;
    do
    {
      v15 = 0;
      while ( v9[v14] != aAbcdefghijklmn[v15] )
      {
        if ( ++v15 >= i )
          goto LABEL_49;
      }
      v9[v14] = aAbcdefghijklmn_0[v15];
LABEL_49:
      ++v14;
    }
    while ( v14 != v10 );
  }
  v16 = *(nn__prepo__PlayReport **)(a1 + 64);
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  return nn__prepo__PlayReport__SetEventId(v16, v18) == 0;
}
