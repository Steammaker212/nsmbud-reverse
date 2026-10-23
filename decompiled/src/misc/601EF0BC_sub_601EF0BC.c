/* sub_601EF0BC
 * address: 0x601EF0BC   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF0BC(int a1)
{
  int v2; // r6
  int v3; // r11
  int *v4; // r10
  int *v5; // r6
  int *v6; // r5
  int *v7; // r9
  signed int v8; // r6
  int v9; // r0
  bool v10; // cc
  int v11; // r0
  float v12; // r1
  float *v13; // r6
  float v14; // r2
  float v15; // s4
  float v16; // s6
  float v17; // s2
  int result; // r0
  int v19; // r1
  int (**v20)(); // [sp+8h] [bp-38h] BYREF
  int *v21; // [sp+Ch] [bp-34h]
  int v22; // [sp+10h] [bp-30h]
  int v23; // [sp+14h] [bp-2Ch] BYREF

  v2 = FIELD_U32(a1, 364);
  v3 = FIELD_U32(dword_60CC6D78, 412);
  if ( v2 > 1 )
  {
    v11 = a1 + 80;
    v12 = FIELD_F32(a1, 80);
    v13 = (float *)(a1 + 328);
    FIELD_F32(a1, 328) = v12;
    FIELD_U32(a1, 332) = FIELD_U32(a1, 84);
    v14 = FIELD_F32(a1, 88);
    FIELD_F32(a1, 336) = v14;
    FIELD_U32(a1, 368) = 40;
    FIELD_U32(a1, 372) = 1102053376;
    switch ( v3 )
    {
      case 0:
        v15 = 600.0;
        v16 = -300.0;
        goto LABEL_21;
      case 1:
        v15 = 400.0;
        v16 = 800.0;
LABEL_21:
        FIELD_F32(a1, 328) = v12 + v15;
        FIELD_F32(a1, 336) = v14 + v16;
        break;
      case 2:
      case 5:
        FIELD_F32(a1, 328) = v12 + -800.0;
        FIELD_U32(a1, 368) = 60;
        FIELD_U32(a1, 372) = 1106247680;
        break;
      case 3:
        v17 = -800.0;
        goto LABEL_24;
      case 4:
        v17 = -600.0;
LABEL_24:
        *v13 = v12 + v17;
        break;
      case 6:
        FIELD_F32(a1, 336) = v14 + 800.0;
        break;
      default:
        break;
    }
  }
  else
  {
    v21 = &v23;
    v20 = &BufferedSafeStringBase_char_vtable_probably;
    v22 = 8;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
    v20 = &off_60BD58EC;
    v4 = v21;
    v5 = &dword_60C8B5C0[14 * v2 + 2 * v3];
    (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
    v6 = v5 + 1;
    v7 = (int *)v5[1];
    if ( v4 != v7 )
    {
      (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
      v8 = 0;
      v9 = *v6;
      while ( *(_BYTE *)(v9 + v8) )
      {
        if ( !*(_BYTE *)(v9 + v8 + 1) )
        {
          ++v8;
          break;
        }
        if ( !*(_BYTE *)(v9 + v8 + 2) )
        {
          v8 += 2;
          break;
        }
        v10 = v8 + 2 < 0x80000;
        v8 += 3;
        if ( !v10 )
        {
          v8 = 0;
          break;
        }
      }
      if ( v8 >= v22 )
        v8 = v22 - 1;
      qmemcpy(v4, v7, v8);
      *((_BYTE *)v4 + v8) = 0;
    }
    v13 = (float *)(a1 + 328);
    v20 = &off_60BD4B8C;
    sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 328), v3, 0, (int)&v20);
    if ( v3 == 2 )
      *v13 = *v13 + 120.0;
    v11 = a1 + 80;
  }
  FIELD_U32(a1, 412) = sub_608332B0(v11, v13);
  sub_601ECD14(a1, 0);
  result = FIELD_U32(a1, 364);
  v19 = 30;
  if ( result )
    v19 = 8;
  FIELD_U32(a1, 376) = v19;
  return result;
}
