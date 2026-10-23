/* sub_60472DBC
 * address: 0x60472DBC   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60472DBC(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // r1
  _DWORD *v7; // r6
  void *v8; // r8
  const void *v9; // r10
  _DWORD *v10; // r11
  int v11; // r0
  signed int v12; // r5
  bool v13; // cc
  _DWORD *v14; // r6
  int v15; // r9
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  bool v20; // nf
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  int (**v24)(); // [sp+0h] [bp-30h] BYREF
  _DWORD *v25; // [sp+4h] [bp-2Ch]
  int v26; // [sp+8h] [bp-28h]

  if ( FIELD_U32(a1, 12) >= FIELD_U32(a1, 16) )
  {
    v14 = *(_DWORD **)a1;
    if ( *(_DWORD *)a1 )
    {
      v10 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v15 = a2[1];
        (*(void (__fastcall **)(_DWORD *))(v14[4] + 12))(v14 + 4);
        v16 = v14[5];
        if ( v15 == v16 )
        {
LABEL_24:
          v14[6] = *a3;
          return v14 + 6;
        }
        else
        {
          v17 = a2[1];
          v18 = 0;
          while ( 1 )
          {
            v19 = *(unsigned __int8 *)(v17 + v18);
            v20 = v19 - *(unsigned __int8 *)(v16 + v18) < 0;
            if ( v19 != *(unsigned __int8 *)(v16 + v18) )
              break;
            if ( *(_BYTE *)(v17 + v18) )
            {
              if ( ++v18 < 0x80000 )
                continue;
            }
            if ( !v14 )
              return 0;
            goto LABEL_24;
          }
          v21 = v14 + 2;
          if ( v20 )
            v21 = v14 + 1;
          v14 = (_DWORD *)*v21;
          if ( *v21 )
            continue;
        }
        break;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v6 = *(_DWORD **)(a1 + 4);
    v7 = 0;
    if ( v6 )
    {
      v7 = *(_DWORD **)(a1 + 4);
      FIELD_U32(a1, 4) = *v6;
    }
    v7[4] = &sead__SafeStringBase__vtable;
    v7[5] = &byte_60B3BA34;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *v7 = &off_60BFCA5C;
    v7[6] = *a3;
    v7[7] = a1;
    v25 = v7 + 8;
    v24 = &BufferedSafeStringBase_char_vtable_probably;
    v26 = 65;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v24);
    v8 = v25;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v9 = (const void *)a2[1];
    v10 = v7 + 6;
    if ( v8 != v9 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v11 = a2[1];
      v12 = 0;
      while ( *(_BYTE *)(v11 + v12) )
      {
        if ( !*(_BYTE *)(v11 + v12 + 1) )
        {
          ++v12;
          break;
        }
        if ( !*(_BYTE *)(v11 + v12 + 2) )
        {
          v12 += 2;
          break;
        }
        v13 = v12 + 2 < 0x80000;
        v12 += 3;
        if ( !v13 )
        {
          v12 = 0;
          break;
        }
      }
      if ( v12 >= v26 )
        v12 = v26 - 1;
      qmemcpy(v8, v9, v12);
      *((_BYTE *)v8 + v12) = 0;
    }
    sead__SafeStringBase__operator_assign((int)(v7 + 4), (int)&v24);
    ++FIELD_U32(a1, 12);
    v22 = sub_6041FD48(a1, *(_DWORD **)a1, v7);
    *(_DWORD *)a1 = v22;
    v22[3] = 1;
  }
  return v10;
}
