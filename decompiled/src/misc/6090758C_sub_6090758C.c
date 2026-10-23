/* sub_6090758C
 * address: 0x6090758C   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090758C(int a1, int a2, int a3, int a4)
{
  int v5; // r8
  signed int i; // r5
  int v7; // r5
  int v8; // r0
  int v9; // r10
  int v10; // r9
  int v11; // r1
  int v12; // r2
  bool v13; // cc
  char v14; // r3
  void (__fastcall *v15)(int, int, int); // r5
  void (__fastcall *v16)(int, _DWORD, int); // r4

  sub_609080F8(&unk_60CCF41C);
  v5 = dword_60CCF014;
  if ( (char *)dword_60CCF014 != "0b" )
  {
    for ( i = 0; a0b[i]; i += 2 )
    {
      if ( i > 0x7FFFF )
      {
        i = 0;
        break;
      }
      if ( !a0b[i + 1] )
      {
        ++i;
        break;
      }
    }
    if ( i >= dword_60CCF018 )
      i = dword_60CCF018 - 1;
    qmemcpy((void *)dword_60CCF014, "0b", i);
    *(_BYTE *)(v5 + i) = 0;
  }
  v7 = 0;
  if ( (unsigned int)(a4 + 7) >> 3 )
  {
    while ( 1 )
    {
      v8 = a4 - 8 * v7;
      if ( (unsigned int)v8 >= 8 )
        v8 = 8;
      if ( v8 >= 1 )
        break;
LABEL_39:
      if ( ++v7 == (unsigned int)(a4 + 7) >> 3 )
        goto LABEL_40;
    }
    while ( 1 )
    {
      v9 = v8;
      v10 = *(unsigned __int8 *)(a3 + v7);
      (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
      v11 = dword_60CCF014;
      v8 = v9 - 1;
      if ( (v10 & (1 << (v9 - 1))) != 0 )
      {
        v12 = 0;
        while ( *(_BYTE *)(dword_60CCF014 + v12) )
        {
          if ( !*(_BYTE *)(dword_60CCF014 + v12 + 1) )
          {
            ++v12;
            break;
          }
          if ( !*(_BYTE *)(dword_60CCF014 + v12 + 2) )
          {
            v12 += 2;
            break;
          }
          v13 = v12 + 2 <= 0x7FFFF;
          v12 += 3;
          if ( !v13 )
          {
            v12 = 0;
            break;
          }
        }
        if ( v12 >= dword_60CCF018 - 1 )
          goto LABEL_38;
        v14 = 49;
      }
      else
      {
        v12 = 0;
        while ( *(_BYTE *)(dword_60CCF014 + v12) )
        {
          if ( !*(_BYTE *)(dword_60CCF014 + v12 + 1) )
          {
            ++v12;
            break;
          }
          if ( !*(_BYTE *)(dword_60CCF014 + v12 + 2) )
          {
            v12 += 2;
            break;
          }
          v13 = v12 + 2 <= 0x7FFFF;
          v12 += 3;
          if ( !v13 )
          {
            v12 = 0;
            break;
          }
        }
        if ( v12 >= dword_60CCF018 - 1 )
          goto LABEL_38;
        v14 = 48;
      }
      *(_BYTE *)(dword_60CCF014 + v12) = v14;
      *(_BYTE *)(v11 + v12 + 1) = 0;
LABEL_38:
      if ( v9 <= 1 )
        goto LABEL_39;
    }
  }
LABEL_40:
  v15 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 4);
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  v15(a2, dword_60CCF014, a4 + 2);
  v16 = *(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 4) + 12))(a1 + 4);
  v16(a2, FIELD_U32(a1, 8), 1);
  return sub_60908100(&unk_60CCF41C);
}
