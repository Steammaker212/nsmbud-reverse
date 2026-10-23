/* sub_609064F4
 * address: 0x609064F4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609064F4(_DWORD *a1, int (__fastcall ***a2)(_DWORD, _BYTE *, int), int a3)
{
  void *v6; // r5
  const void *v7; // r6
  signed int v8; // r7
  bool v9; // cc
  signed int v10; // r0

  sub_609080F8(&unk_60CCF41C);
  sub_60905918(a1, a2);
  v6 = *(void **)(a3 + 4);
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  v7 = (const void *)dword_60CCF014;
  if ( v6 != (void *)dword_60CCF014 )
  {
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
      v9 = v8 + 2 < 0x80000;
      v8 += 3;
      if ( !v9 )
      {
        v8 = 0;
        break;
      }
    }
    v10 = FIELD_U32(a3, 8);
    if ( v8 >= v10 )
      v8 = v10 - 1;
    qmemcpy(v6, v7, v8);
    *((_BYTE *)v6 + v8) = 0;
  }
  return sub_60908100(&unk_60CCF41C);
}
