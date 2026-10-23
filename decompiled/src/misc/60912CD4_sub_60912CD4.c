/* sub_60912CD4
 * address: 0x60912CD4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912CD4(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  int v7; // r1
  unsigned int v8; // r6
  bool v9; // cc
  void (__fastcall *v10)(int, _DWORD, unsigned int); // r9
  unsigned int v11; // r7
  int result; // r0
  char v13; // [sp+7h] [bp-21h] BYREF

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v7 = a3[1];
  v8 = 0;
  while ( *(_BYTE *)(v7 + v8) )
  {
    if ( !*(_BYTE *)(v7 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(v7 + v8 + 2) )
    {
      v8 += 2;
      break;
    }
    v9 = (int)(v8 + 2) < 0x80000;
    v8 += 3;
    if ( !v9 )
    {
      v8 = 0;
      break;
    }
  }
  v10 = *(void (__fastcall **)(int, _DWORD, unsigned int))(*(_DWORD *)a2 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v11 = v8;
  if ( v8 > a4 )
    v11 = a4;
  v10(a2, a3[1], v11);
  result = 0;
  v13 = 0;
  if ( v8 < a4 )
  {
    do
    {
      result = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)a2 + 4))(a2, &v13, 1);
      ++v11;
    }
    while ( v11 < a4 );
  }
  return result;
}
