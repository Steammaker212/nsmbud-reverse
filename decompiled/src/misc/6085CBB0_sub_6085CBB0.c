/* sub_6085CBB0
 * address: 0x6085CBB0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085CBB0(_DWORD *a1, int a2, int a3, int a4)
{
  _WORD *v6; // r0
  unsigned __int16 v7; // r7
  unsigned __int16 *v8; // r0
  int v9; // t1
  int v11; // r0
  int v12; // r2

  v6 = *(_WORD **)a4;
  if ( !*(_DWORD *)a4 )
    return 0;
  v7 = FIELD_U16(a4, 4);
  if ( !v7 )
  {
    if ( *v6 )
    {
      v8 = v6 + 1;
      v7 = 0;
      do
      {
        v9 = *v8++;
        ++v7;
      }
      while ( v9 );
    }
    else
    {
      v7 = 0;
    }
  }
  v11 = FIELD_U32(a4, 8);
  if ( v11 )
    v12 = (unsigned __int16)v11;
  else
    v12 = v7;
  (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 112))(a1, a2, v12);
  if ( a1[43] )
    (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*a1 + 132))(a1, *(_DWORD *)a4, 0, v7);
  return 1;
}
