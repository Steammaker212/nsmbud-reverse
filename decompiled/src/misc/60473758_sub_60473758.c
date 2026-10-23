/* sub_60473758
 * address: 0x60473758   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60473758(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // r1
  _DWORD *v7; // r6
  int v8; // r1
  int v9; // r2
  void *v10; // r11
  const void *v11; // r10
  _DWORD *v12; // r9
  int v13; // r0
  signed int v14; // r5
  bool v15; // cc
  _DWORD *v16; // r6
  int v17; // r8
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  bool v22; // nf
  _DWORD *v23; // r0
  int v24; // r1
  int v25; // r2
  _DWORD *v26; // r0
  int (**v28)(); // [sp+0h] [bp-30h] BYREF
  _DWORD *v29; // [sp+4h] [bp-2Ch]
  int v30; // [sp+8h] [bp-28h]

  if ( FIELD_U32(a1, 12) >= FIELD_U32(a1, 16) )
  {
    v16 = *(_DWORD **)a1;
    if ( *(_DWORD *)a1 )
    {
      v12 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v17 = a2[1];
        (*(void (__fastcall **)(_DWORD *))(v16[4] + 12))(v16 + 4);
        v18 = v16[5];
        if ( v17 == v18 )
        {
LABEL_24:
          v24 = a3[1];
          v25 = a3[2];
          v16[6] = *a3;
          v12 = v16 + 6;
          v16[7] = v24;
          v16[8] = v25;
        }
        else
        {
          v19 = a2[1];
          v20 = 0;
          while ( 1 )
          {
            v21 = *(unsigned __int8 *)(v19 + v20);
            v22 = v21 - *(unsigned __int8 *)(v18 + v20) < 0;
            if ( v21 != *(unsigned __int8 *)(v18 + v20) )
              break;
            if ( *(_BYTE *)(v19 + v20) )
            {
              if ( ++v20 < 0x80000 )
                continue;
            }
            if ( !v16 )
              return 0;
            goto LABEL_24;
          }
          v23 = v16 + 2;
          if ( v22 )
            v23 = v16 + 1;
          v16 = (_DWORD *)*v23;
          if ( *v23 )
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
    *v7 = &off_60BFCC1C;
    v8 = a3[1];
    v9 = a3[2];
    v7[6] = *a3;
    v7[7] = v8;
    v7[8] = v9;
    v7[9] = a1;
    v29 = v7 + 10;
    v28 = &BufferedSafeStringBase_char_vtable_probably;
    v30 = 65;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v28);
    v10 = v29;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v11 = (const void *)a2[1];
    v12 = v7 + 6;
    if ( v10 != v11 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v13 = a2[1];
      v14 = 0;
      while ( *(_BYTE *)(v13 + v14) )
      {
        if ( !*(_BYTE *)(v13 + v14 + 1) )
        {
          ++v14;
          break;
        }
        if ( !*(_BYTE *)(v13 + v14 + 2) )
        {
          v14 += 2;
          break;
        }
        v15 = v14 + 2 < 0x80000;
        v14 += 3;
        if ( !v15 )
        {
          v14 = 0;
          break;
        }
      }
      if ( v14 >= v30 )
        v14 = v30 - 1;
      qmemcpy(v10, v11, v14);
      *((_BYTE *)v10 + v14) = 0;
    }
    sead__SafeStringBase__operator_assign((int)(v7 + 4), (int)&v28);
    ++FIELD_U32(a1, 12);
    v26 = sub_6041FD48(a1, *(_DWORD **)a1, v7);
    *(_DWORD *)a1 = v26;
    v26[3] = 1;
  }
  return v12;
}
