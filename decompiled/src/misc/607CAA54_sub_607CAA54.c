/* sub_607CAA54
 * address: 0x607CAA54   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CAA54(int a1, float a2)
{
  int result; // r0
  bool v5; // zf
  _BOOL4 v6; // r0
  int v7; // r1
  bool v8; // zf
  bool v9; // zf
  int v10; // r9
  int *v11; // r7
  int v12; // r8
  char *v13; // r6
  char *v14; // r10
  int v15; // r0
  signed int v16; // r5
  bool v17; // cc
  _BOOL4 v18; // r0
  bool v19; // zf
  int v20; // r5
  void (__fastcall *v21)(int, int, int (***)(), int, float, float, float); // r6
  float v22; // s18
  float v23; // s0
  int (**v24)(); // [sp+4h] [bp-5Ch] BYREF
  char *v25; // [sp+8h] [bp-58h]
  int v26; // [sp+Ch] [bp-54h]
  char v27; // [sp+10h] [bp-50h] BYREF

  result = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 140))(a1, a2);
  v5 = result == 0;
  if ( !result )
  {
    result = FIELD_U8(a1, 576);
    v5 = result == 0;
  }
  if ( !v5 )
  {
    FIELD_U8(a1, 576) = 0;
    ((void (__fastcall *)(int, float))loc_60792114)(a1, a2);
    FIELD_U32(a1, 32) = -1;
    v6 = sub_60793198(a1);
    v7 = FIELD_U32(a1, 28);
    if ( !v6 )
    {
      v8 = v7 == 26;
      if ( v7 != 26 )
        v8 = v7 == 114;
      if ( !v8 )
      {
        v9 = v7 == 116;
        if ( v7 != 116 )
          v9 = (FIELD_U8(a1, 200) & 2) == 0;
        if ( !v9 )
        {
          switch ( v7 )
          {
            case 25:
              v7 = 1;
              break;
            case 227:
              v7 = 6;
              break;
            case 226:
              v7 = 5;
              break;
            default:
              v7 = FIELD_U32(a1, 196) & 0xC000;
              if ( v7 )
                v7 = 142 - ((FIELD_U32(a1, 196) >> 14) & 1);
              break;
          }
          FIELD_U32(a1, 28) = v7;
        }
      }
    }
    v10 = 3 * v7;
    v11 = &dword_60CC2C64[6 * v7];
    FIELD_U32(a1, 200) = v11[5];
    v12 = FIELD_U32(a1, 544);
    v25 = &v27;
    v24 = &BufferedSafeStringBase_char_vtable_probably;
    v26 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v24);
    v13 = v25;
    (*(void (__fastcall **)(int *))(dword_60CC2C64[2 * v10] + 12))(v11);
    v14 = (char *)v11[1];
    if ( v13 != v14 )
    {
      (*(void (__fastcall **)(int *))(*v11 + 12))(v11);
      v15 = v11[1];
      v16 = 0;
      while ( *(_BYTE *)(v15 + v16) )
      {
        if ( !*(_BYTE *)(v15 + v16 + 1) )
        {
          ++v16;
          break;
        }
        if ( !*(_BYTE *)(v15 + v16 + 2) )
        {
          v16 += 2;
          break;
        }
        v17 = v16 + 2 < 0x80000;
        v16 += 3;
        if ( !v17 )
        {
          v16 = 0;
          break;
        }
      }
      if ( v16 >= v26 )
        v16 = v26 - 1;
      qmemcpy(v13, v14, v16);
      v13[v16] = 0;
    }
    v18 = sub_60793198(a1);
    v19 = v18;
    if ( v18 )
      v19 = (FIELD_U8(a1, 200) & 2) == 0;
    if ( v19 )
    {
      return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)a1 + 104))(a1, 0, a2);
    }
    else
    {
      v20 = dword_60CC2C64[2 * v10 + 2];
      v21 = *(void (__fastcall **)(int, int, int (***)(), int, float, float, float))(*(_DWORD *)a1 + 44);
      v22 = sub_607934C0(a1);
      v23 = sub_60793184(a1);
      v21(a1, v12, &v24, v20, v22, v23, a2);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
    }
  }
  return result;
}
