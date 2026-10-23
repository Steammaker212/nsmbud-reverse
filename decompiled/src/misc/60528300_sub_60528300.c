/* sub_60528300
 * address: 0x60528300   size: 1420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60528300(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int v6; // r3
  int v7; // r1
  int result; // r0
  int (***v9)(); // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int *v14; // r5
  unsigned int v15; // r5
  int v16; // r6
  int v17; // r7
  unsigned int v18; // r1
  int v19; // r1
  int (**v20)(); // [sp+0h] [bp-28h] BYREF
  const char *v21; // [sp+4h] [bp-24h]

  if ( ((unsigned int)&dword_60CAA2F4[2] & ~(1616020256 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[2]) )
  {
    dword_60CAA3A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3A4 = (int)"ResultVS_Round_00";
    dword_60CAA3A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3AC = (int)"ResultVS_Round_01";
    dword_60CAA3B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3B4 = (int)"ResultVS_Round_02";
    dword_60CAA3B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3BC = (int)"ResultVS_Round_03";
    dword_60CAA3C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA3C4 = (int)"ResultVS_Round_04";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA2F4[2]);
  }
  *(_BYTE *)(FIELD_U32(a1, 3976) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3980) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3984) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3988) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3992) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3996) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4000) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4004) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4008) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4012) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4016) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4020) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4024) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4028) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4040) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4044) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4048) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4052) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4056) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4060) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4064) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4068) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4072) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4076) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4080) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4084) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4088) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4092) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4096) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 4100) + 64) &= ~1u;
  switch ( FIELD_U32(a1, 4664) )
  {
    case 0:
      *(_BYTE *)(FIELD_U32(a1, 3976) + 64) |= 1u;
      *(_BYTE *)(FIELD_U32(a1, 4048) + 64) |= 1u;
      *(_BYTE *)(FIELD_U32(a1, 4040) + 64) |= 1u;
      if ( FIELD_U8(a1, 4674) )
      {
        v20 = &sead__SafeStringBase__vtable;
        v21 = "ResultVS_RoundFinal_00";
        sub_6047E0EC(&v20, FIELD_U32(a1, 4048), 0, a4);
        v20 = &sead__SafeStringBase__vtable;
        v21 = "ResultVS_RoundFinal_00";
        v7 = FIELD_U32(a1, 4040);
        goto LABEL_9;
      }
      v13 = FIELD_U8(dword_60C99DEC, 532);
      if ( v13 >= 5 )
        v13 = 5;
      if ( v13 )
        --v13;
      v14 = &dword_60CAA370[2 * v13 + 12];
      sub_6047E0EC(v14, FIELD_U32(a1, 4048), 0);
      v7 = FIELD_U32(a1, 4040);
      v9 = (int (***)())v14;
      return sub_6047E0EC(v9, v7, 0, v6, v20, v21);
    case 1:
      *(_BYTE *)(FIELD_U32(a1, 3980) + 64) |= 1u;
      *(_BYTE *)(FIELD_U32(a1, 4052) + 64) |= 1u;
      *(_BYTE *)(FIELD_U32(a1, 4044) + 64) |= 1u;
      v20 = &sead__SafeStringBase__vtable;
      v21 = "ResultVS_Result_00";
      sub_6047E0EC(&v20, FIELD_U32(a1, 4052), 0, a4);
      v20 = &sead__SafeStringBase__vtable;
      v21 = "ResultVS_Result_00";
      v7 = FIELD_U32(a1, 4044);
LABEL_9:
      v9 = &v20;
      return sub_6047E0EC(v9, v7, 0, v6, v20, v21);
    case 3:
      *(_BYTE *)(FIELD_U32(a1, 3988) + 64) |= 1u;
      result = FIELD_U32(a1, 4060);
      goto LABEL_37;
    case 4:
      *(_BYTE *)(FIELD_U32(a1, 3992) + 64) |= 1u;
      result = FIELD_U32(a1, 4064);
      goto LABEL_37;
    case 5:
      if ( !FIELD_U8(a1, 4673) )
      {
        if ( FIELD_S32(a1, 4620) < 1 )
        {
LABEL_34:
          *(_BYTE *)(FIELD_U32(a1, 4004) + 64) |= 1u;
          result = FIELD_U32(a1, 4076);
          goto LABEL_37;
        }
        result = 1;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        while ( 1 )
        {
          v18 = 0;
          if ( v15 < 4 )
            v18 = v15;
          v19 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v18 + 4152) + 3044);
          if ( v19 == 1 )
            break;
          if ( !v19 )
          {
            G_Color1st_ref(a1, v15, v17++);
LABEL_31:
            result = 0;
          }
          if ( (signed int)++v15 >= FIELD_U32(a1, 4620) )
          {
            if ( (result & 1) == 0 )
              return result;
            goto LABEL_34;
          }
        }
        G_Color2nd_ref(a1, v15, v16++);
        goto LABEL_31;
      }
      v10 = FIELD_U32(a1, 4676);
      if ( v10 == 1 )
      {
        v11 = 8;
        v12 = 57;
      }
      else if ( v10 )
      {
        v11 = 9;
        v12 = 58;
      }
      else
      {
        v11 = 7;
        v12 = 56;
      }
      *(_BYTE *)(*(_DWORD *)(a1 + 4 * v12 + 3772) + 64) |= 1u;
      result = *(_DWORD *)(a1 + 4 * v11 + 4040);
LABEL_37:
      FIELD_U8(result, 64) |= 1u;
      return result;
    default:
      *(_BYTE *)(FIELD_U32(a1, 3984) + 64) |= 1u;
      result = FIELD_U32(a1, 4056);
      goto LABEL_37;
  }
}
