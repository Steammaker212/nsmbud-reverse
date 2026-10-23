/* sub_60907B14
 * address: 0x60907B14   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60907B14(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v8; // r0
  int v9; // r11
  _BYTE *v10; // r0
  int v11; // r6
  bool v12; // cc
  void (__fastcall *v13)(int, int, int); // r4
  void (__fastcall *v14)(int, _DWORD, int); // r4
  int v15; // r8
  int v16; // t1

  sub_609080F8(&unk_60CCF41C);
  *(_BYTE *)dword_60CCF014 = 0;
  v8 = a4 / 3;
  if ( a4 % 3 )
    v8 = a4 / 3 + 1;
  if ( ((4 * v8) | 1) < dword_60CCF018 )
  {
    v9 = 4 * v8;
    (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
    v10 = (_BYTE *)dword_60CCF014;
    v11 = 0;
    *(_BYTE *)(dword_60CCF014 + v9) = 0;
    sead__Base64__encode(v10, a3, a4, 0);
    (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
    while ( *(_BYTE *)(dword_60CCF014 + v11) )
    {
      if ( !*(_BYTE *)(dword_60CCF014 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(dword_60CCF014 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v12 = v11 + 2 < 0x80000;
      v11 += 3;
      if ( !v12 )
      {
        v11 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(int, const char *, int))(*(_DWORD *)a2 + 4))(a2, "\"", 1);
    v13 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 4);
    (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
    v13(a2, dword_60CCF014, v11);
    (*(void (__fastcall **)(int, const char *, int))(*(_DWORD *)a2 + 4))(a2, "\"", 1);
    v14 = *(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 4);
    v16 = FIELD_U32(a1, 4);
    v15 = a1 + 4;
    (*(void (__fastcall **)(int))(v16 + 12))(v15);
    v14(a2, FIELD_U32(v15, 4), 1);
  }
  return sub_60908100(&unk_60CCF41C);
}
