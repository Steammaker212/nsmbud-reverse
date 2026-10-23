/* sub_6085CC60
 * address: 0x6085CC60   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085CC60(_DWORD *a1, int a2, const char **a3, int a4)
{
  _BYTE *v7; // r0
  unsigned __int16 v8; // r4
  int v9; // r6
  int v11; // [sp+0h] [bp-28h] BYREF
  char v12[4]; // [sp+4h] [bp-24h] BYREF

  v7 = *(_BYTE **)a4;
  if ( !*(_DWORD *)a4 )
    return 0;
  v8 = FIELD_U16(a4, 4);
  if ( !v8 )
  {
    *(_DWORD *)v12 = *(_DWORD *)a4;
    v8 = 0;
    if ( *v7 )
    {
      do
      {
        nn__util__PickOutCharacterFromUtf8String((nn__util *)&v11, v12, a3);
        ++v8;
      }
      while ( **(_BYTE **)v12 );
    }
  }
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 112))(a1, a2);
  v9 = 1;
  if ( a1[43] )
    (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*a1 + 136))(a1, *(_DWORD *)a4, 0, v8);
  return v9;
}
