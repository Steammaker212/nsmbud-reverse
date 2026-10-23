/* sub_6074C694
 * address: 0x6074C694   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074C694(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r1
  _WORD *i; // r0
  int v7; // r2
  _WORD *v8; // r1
  int v9; // r0
  int v10; // r10
  int v11; // r9
  int v12; // r6
  int v13; // r5
  int v14; // r4
  unsigned __int16 *v15; // r1
  unsigned __int16 *v16; // r0
  int v17; // r2
  bool v18; // cc

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v4 = 0;
  v5 = 1;
  for ( i = (_WORD *)(a1[1] + 2); *(i - 1); i += 2 )
  {
    if ( v5 - 1 > 0x7FFFF )
    {
      v4 = 0;
      break;
    }
    if ( !*i )
    {
      v4 = v5;
      break;
    }
    v5 += 2;
    v4 += 2;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v7 = 1;
  v8 = (_WORD *)(a2[1] + 2);
  v9 = 0;
  while ( *(v8 - 1) )
  {
    if ( v7 - 1 > 0x7FFFF )
    {
      v9 = 0;
      break;
    }
    if ( !*v8 )
    {
      v9 = v7;
      break;
    }
    v8 += 2;
    v7 += 2;
    v9 += 2;
  }
  v10 = v4 - v9;
  v11 = -1;
  if ( v4 - v9 >= 0 )
  {
    v12 = v9;
    if ( v9 >= 0x80000 )
      v12 = 0x80000;
    if ( v9 < 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      return 0;
    }
    else
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = a1[1];
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v15 = (unsigned __int16 *)a2[1];
        v16 = (unsigned __int16 *)(v14 + 2 * v13);
        if ( v16 == v15 )
          break;
        v17 = 1;
        while ( *v16 == *v15 )
        {
          if ( *v16 )
          {
            v18 = v17 < v12;
            ++v16;
            ++v15;
            ++v17;
            if ( v18 )
              continue;
          }
          return v13;
        }
        v18 = v13++ < v10;
        if ( !v18 )
          return v11;
      }
      return v13;
    }
  }
  return v11;
}
