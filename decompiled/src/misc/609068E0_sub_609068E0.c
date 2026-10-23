/* sub_609068E0
 * address: 0x609068E0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609068E0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, _BYTE *, int), int a3, unsigned int a4)
{
  unsigned int v8; // r6
  bool v9; // cc
  unsigned int v10; // r4
  unsigned int v12; // [sp+4h] [bp-1Ch] BYREF

  sub_609080F8(&unk_60CCF41C);
  sub_60905918(a1, a2);
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  v8 = 0;
  while ( *(_BYTE *)(dword_60CCF014 + v8) )
  {
    if ( !*(_BYTE *)(dword_60CCF014 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(dword_60CCF014 + v8 + 2) )
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
  v12 = 0;
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  sead__Base64__decode(a3, a4, (unsigned __int8 *)dword_60CCF014, v8, &v12);
  v10 = v12;
  sub_60908100(&unk_60CCF41C);
  return v10;
}
