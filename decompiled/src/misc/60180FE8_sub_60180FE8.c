/* sub_60180FE8
 * address: 0x60180FE8   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60180FE8(int a1, int a2, _DWORD *a3)
{
  char v6; // r12
  unsigned int v7; // r0
  int v8; // r0
  char *v9; // r0
  int result; // r0
  int v11; // r7
  int *v12; // r5
  int i; // r1
  unsigned int v14; // r1
  int (**v15)(); // [sp+0h] [bp-40h] BYREF
  int *v16; // [sp+4h] [bp-3Ch]
  int v17; // [sp+8h] [bp-38h]
  int v18; // [sp+Ch] [bp-34h] BYREF

  v16 = &v18;
  v15 = &BufferedSafeStringBase_char_vtable_probably;
  v17 = 20;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v15);
  *(_BYTE *)v16 = 0;
  v15 = &off_60BD5178;
  *a3 += sub_60181410(&v15, a2);
  if ( ((unsigned int)&dword_60C88F8C & ~(1612189816 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C88F8C) )
  {
    dword_60C88ED4[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C88ED8 = (int)&unk_60ABF2B3;
    dword_60C88EDC = (int)&sead__SafeStringBase__vtable;
    dword_60C88EE0 = (int)&unk_60ABF2B7;
    dword_60C88EE4 = (int)&sead__SafeStringBase__vtable;
    dword_60C88EE8 = (int)&unk_60ABF2BB;
    dword_60C88EEC = (int)&sead__SafeStringBase__vtable;
    dword_60C88EF0 = (int)&unk_60ABF2BF;
    dword_60C88EF4 = (int)&sead__SafeStringBase__vtable;
    dword_60C88EF8 = (int)&unk_60ABF2CC;
    dword_60C88EFC = (int)&sead__SafeStringBase__vtable;
    dword_60C88F00 = (int)&unk_60ABF2D6;
    dword_60C88F04 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F08 = (int)&unk_60ABF2DD;
    dword_60C88F0C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F10 = (int)&unk_60ABF2E1;
    dword_60C88F14 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F18 = (int)&unk_60ABF2E8;
    dword_60C88F1C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F20 = (int)&unk_60ABF301;
    dword_60C88F24 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F28 = (int)&unk_60ABF308;
    dword_60C88F2C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F30 = (int)&unk_60ABF30C;
    dword_60C88F34 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F38 = (int)&unk_60ABF310;
    dword_60C88F3C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F40 = (int)&unk_60ABF314;
    dword_60C88F44 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F48 = (int)&unk_60ABF318;
    dword_60C88F4C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F50 = (int)&unk_60ABF325;
    dword_60C88F54 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F58 = (int)&unk_60ABF332;
    dword_60C88F5C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F60 = (int)&unk_60ABF33F;
    dword_60C88F64 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F68 = (int)&unk_60ABF34F;
    dword_60C88F6C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F70 = (int)&unk_60ABF35F;
    dword_60C88F74 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F78 = (int)&unk_60ABF36C;
    dword_60C88F7C = (int)&sead__SafeStringBase__vtable;
    dword_60C88F80 = (int)&unk_60ABF370;
    dword_60C88F84 = (int)&sead__SafeStringBase__vtable;
    dword_60C88F88 = (int)&unk_60ABF377;
    sub_60000288();
    _cxa_guard_release(&dword_60C88F8C);
  }
  v7 = FIELD_U32(a1, 36);
  if ( v7 >= 0x100 )
    v7 = 0;
  v8 = a1 + 32 * v7;
  if ( FIELD_S32(v8, 280628) < 1 )
    v9 = &byte_60B3BA34;
  else
    v9 = *(char **)(v8 + 280624);
  result = (unsigned __int8)*v9;
  if ( result != 48 )
  {
    v11 = 0;
    while ( 1 )
    {
      ((void (__fastcall *)(int (***)()))v15[3])(&v15);
      ((void (__fastcall *)(int (***)()))v15[3])(&v15);
      v12 = v16;
      (*(void (__fastcall **)(int *))(dword_60C88ED4[2 * v11] + 12))(&dword_60C88ED4[2 * v11]);
      result = dword_60C88ED4[2 * v11 + 1];
      if ( v12 == (int *)result )
        break;
      for ( i = 1; *((unsigned __int8 *)v16 + i - 1) == *(unsigned __int8 *)(result + i - 1); i += 2 )
      {
        if ( !*((_BYTE *)v16 + i - 1) )
          goto LABEL_22;
        if ( i > 0x80000 || *((unsigned __int8 *)v16 + i) != *(unsigned __int8 *)(result + i) )
          break;
        if ( !*((_BYTE *)v16 + i) )
          goto LABEL_22;
      }
      if ( ++v11 >= 23 )
        return result;
    }
LABEL_22:
    v14 = FIELD_U32(a1, 36);
    result = dword_60AF7B04[v11];
    if ( v14 >= 0x100 )
      v14 = 0;
    *(_DWORD *)(a1 + 32 * v14 + 280644) = result;
  }
  return result;
}
