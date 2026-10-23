/* sub_60906604
 * address: 0x60906604   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60906604(_DWORD *a1, int (__fastcall ***a2)(_DWORD, _BYTE *, int), int a3, unsigned int a4)
{
  int v4; // r11
  int v8; // r1
  bool v9; // cc
  char *v10; // r0
  int v11; // r0
  bool v12; // zf
  char v13; // r5
  unsigned int v14; // r6
  int v15; // r1
  char *v16; // r0
  int (**v18)(); // r0
  _DWORD v20[2]; // [sp+4h] [bp-34h] BYREF
  int (**v21)(); // [sp+Ch] [bp-2Ch] BYREF
  int v22; // [sp+10h] [bp-28h]

  sub_609080F8(&unk_60CCF41C);
  sub_60905918(a1, a2);
  v21 = &sead__SafeStringBase__vtable;
  v22 = dword_60CCF014;
  if ( (char *)dword_60CCF014 == "0b" )
    goto LABEL_5;
  if ( *(_BYTE *)dword_60CCF014 != 48 )
  {
    v18 = &sead__SafeStringBase__vtable;
    goto LABEL_19;
  }
  if ( FIELD_U8(dword_60CCF014, 1) == 98 )
  {
LABEL_5:
    v8 = 0;
    while ( 1 )
    {
      if ( !*(_BYTE *)(dword_60CCF014 + v8) )
        goto LABEL_15;
      if ( !*(_BYTE *)(dword_60CCF014 + v8 + 1) )
      {
        if ( v8 + 1 <= 1 )
          goto LABEL_16;
        goto LABEL_17;
      }
      if ( !*(_BYTE *)(dword_60CCF014 + v8 + 2) )
        break;
      v9 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v9 )
        goto LABEL_16;
    }
    v8 += 2;
LABEL_15:
    if ( v8 <= 1 )
    {
LABEL_16:
      v10 = off_60C5CB34;
      goto LABEL_18;
    }
LABEL_17:
    v10 = (char *)(dword_60CCF014 + 2);
LABEL_18:
    v20[1] = v10;
    v20[0] = &sead__SafeStringBase__vtable;
    sead__SafeStringBase__operator_assign((int)&v21, (int)v20);
    v18 = v21;
  }
  else
  {
    v18 = &sead__SafeStringBase__vtable;
  }
LABEL_19:
  v18[3]();
  v11 = 0;
  while ( *(_BYTE *)(v22 + v11) )
  {
    if ( !*(_BYTE *)(v22 + v11 + 1) )
    {
      ++v11;
      break;
    }
    if ( !*(_BYTE *)(v22 + v11 + 2) )
    {
      v11 += 2;
      break;
    }
    v9 = v11 + 2 <= 0x7FFFF;
    v11 += 3;
    if ( !v9 )
    {
      v11 = 0;
      break;
    }
  }
  v12 = a4 == 0;
  if ( a4 )
  {
    v4 = v11 + 1;
    v12 = v11 == -1;
  }
  if ( !v12 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      ((void (__fastcall *)(int (***)()))v21[3])(&v21);
      v15 = 0;
      v13 *= 2;
      while ( *(_BYTE *)(v22 + v15) )
      {
        if ( !*(_BYTE *)(v22 + v15 + 1) )
        {
          ++v15;
          break;
        }
        if ( !*(_BYTE *)(v22 + v15 + 2) )
        {
          v15 += 2;
          break;
        }
        v9 = v15 + 2 <= 0x7FFFF;
        v15 += 3;
        if ( !v9 )
        {
          v15 = 0;
          break;
        }
      }
      v16 = (char *)(v22 + v14);
      v9 = v15 < (int)v14++;
      if ( v9 )
        v16 = &byte_60B3BA34;
      if ( *v16 == 49 )
        v13 |= 1u;
      if ( (v14 & 7) == 0 )
      {
        *(_BYTE *)(a3 + (v14 >> 3) - 1) = v13;
        v13 = 0;
      }
    }
    while ( v14 != v4 && v14 < a4 );
    if ( (v14 & 7) != 0 )
      *(_BYTE *)(a3 + (v14 >> 3)) = *(_BYTE *)(a3 + (v14 >> 3)) & (-1 << (v14 & 7)) | v13;
  }
  return sub_60908100(&unk_60CCF41C);
}
