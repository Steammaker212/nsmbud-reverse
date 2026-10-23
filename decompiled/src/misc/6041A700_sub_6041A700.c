/* sub_6041A700
 * address: 0x6041A700   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041A700(int *a1, _DWORD *a2, _DWORD *a3)
{
  int *v6; // r1
  _DWORD *v7; // r6
  int v8; // r1
  void *v9; // r9
  const void *v10; // r10
  _DWORD *v11; // r11
  int v12; // r0
  signed int v13; // r5
  bool v14; // cc
  _DWORD *v15; // r6
  int v16; // r8
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  bool v21; // nf
  _DWORD *v22; // r0
  int v23; // r1
  int v24; // r0
  int (**v26)(); // [sp+0h] [bp-30h] BYREF
  _DWORD *v27; // [sp+4h] [bp-2Ch]
  int v28; // [sp+8h] [bp-28h]

  if ( a1[3] >= a1[4] )
  {
    v15 = (_DWORD *)*a1;
    if ( *a1 )
    {
      v11 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v16 = a2[1];
        (*(void (__fastcall **)(_DWORD *))(v15[4] + 12))(v15 + 4);
        v17 = v15[5];
        if ( v16 == v17 )
        {
LABEL_24:
          v23 = a3[1];
          v15[6] = *a3;
          v11 = v15 + 6;
          v15[7] = v23;
        }
        else
        {
          v18 = a2[1];
          v19 = 0;
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)(v18 + v19);
            v21 = v20 - *(unsigned __int8 *)(v17 + v19) < 0;
            if ( v20 != *(unsigned __int8 *)(v17 + v19) )
              break;
            if ( *(_BYTE *)(v18 + v19) )
            {
              if ( ++v19 < 0x80000 )
                continue;
            }
            if ( !v15 )
              return 0;
            goto LABEL_24;
          }
          v22 = v15 + 2;
          if ( v21 )
            v22 = v15 + 1;
          v15 = (_DWORD *)*v22;
          if ( *v22 )
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
    v6 = (int *)a1[1];
    v7 = 0;
    if ( v6 )
    {
      v7 = (_DWORD *)a1[1];
      a1[1] = *v6;
    }
    v7[4] = &sead__SafeStringBase__vtable;
    v7[5] = &byte_60B3BA34;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *v7 = &off_60BF9DD4;
    v8 = a3[1];
    v7[6] = *a3;
    v7[7] = v8;
    v7[8] = a1;
    v27 = v7 + 9;
    v26 = &BufferedSafeStringBase_char_vtable_probably;
    v28 = 33;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v26);
    v9 = v27;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = (const void *)a2[1];
    v11 = v7 + 6;
    if ( v9 != v10 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v12 = a2[1];
      v13 = 0;
      while ( *(_BYTE *)(v12 + v13) )
      {
        if ( !*(_BYTE *)(v12 + v13 + 1) )
        {
          ++v13;
          break;
        }
        if ( !*(_BYTE *)(v12 + v13 + 2) )
        {
          v13 += 2;
          break;
        }
        v14 = v13 + 2 < 0x80000;
        v13 += 3;
        if ( !v14 )
        {
          v13 = 0;
          break;
        }
      }
      if ( v13 >= v28 )
        v13 = v28 - 1;
      qmemcpy(v9, v10, v13);
      *((_BYTE *)v9 + v13) = 0;
    }
    sead__SafeStringBase__operator_assign((int)(v7 + 4), (int)&v26);
    ++a1[3];
    v24 = sub_6041FD48(a1, *a1, v7);
    *a1 = v24;
    FIELD_U32(v24, 12) = 1;
  }
  return v11;
}
