/* sub_6048BC4C
 * address: 0x6048BC4C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048BC4C(int a1)
{
  int v1; // r7
  int v2; // r11
  int v3; // r5
  sead_IDisposer *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  int **v10; // r0
  int v11; // r1
  void (*v12)(void); // r1
  int v15; // [sp+8h] [bp-58h]
  _DWORD *v16; // [sp+14h] [bp-4Ch]
  int v17; // [sp+1Ch] [bp-44h] BYREF
  int v18; // [sp+20h] [bp-40h]
  _DWORD v19[2]; // [sp+24h] [bp-3Ch] BYREF
  _DWORD v20[2]; // [sp+2Ch] [bp-34h] BYREF
  _DWORD v21[11]; // [sp+34h] [bp-2Ch] BYREF

  v1 = 0;
  v2 = a1 + 13800;
  v15 = a1 + 36;
  v16 = (_DWORD *)(a1 + 14228);
  do
  {
    v3 = operator_new(0xE30u);
    *(_DWORD *)v3 = &off_60BFD9D4;
    v4 = sub_6047611C((sead_IDisposer *)v3, v3 + 3520, 5);
    *(_DWORD *)v3 = &off_60BFD9D4;
    FIELD_U32(v3, 3520) = 0;
    FIELD_U32(v3, 3524) = &sead__SafeStringBase__vtable;
    FIELD_U32(v3, 3528) = &byte_60B3BA34;
    FIELD_U32(v3, 3532) = 0;
    FIELD_U8(v3, 3536) = 0;
    FIELD_U32(v3, 3540) = 0;
    FIELD_U32(v3, 3544) = &sead__SafeStringBase__vtable;
    FIELD_U32(v3, 3548) = &byte_60B3BA34;
    FIELD_U32(v3, 3552) = 0;
    FIELD_U8(v3, 3556) = 0;
    FIELD_U32(v3, 3560) = 0;
    FIELD_U32(v3, 3564) = &sead__SafeStringBase__vtable;
    FIELD_U32(v3, 3568) = &byte_60B3BA34;
    FIELD_U32(v3, 3572) = 0;
    FIELD_U8(v3, 3576) = 0;
    FIELD_U32(v3, 3580) = 0;
    FIELD_U32(v3, 3584) = &sead__SafeStringBase__vtable;
    FIELD_U32(v3, 3588) = &byte_60B3BA34;
    FIELD_U32(v3, 3592) = 0;
    FIELD_U8(v3, 3596) = 0;
    FIELD_U32(v3, 3600) = 0;
    FIELD_U32(v3, 3604) = &sead__SafeStringBase__vtable;
    FIELD_U32(v3, 3608) = &byte_60B3BA34;
    FIELD_U32(v3, 3612) = 0;
    FIELD_U8(v3, 3616) = 0;
    FIELD_U32(v3, 3624) = 0;
    FIELD_U32(v3, 3628) = 0;
    FIELD_U32(v3, 3620) = 0;
    *(_DWORD *)(v2 + 4 * v1) = v3;
    sub_6049033C(v4, v15, v1);
    v19[0] = &sead__SafeStringBase__vtable;
    v19[1] = &byte_60B3BA34;
    v20[0] = &sead__SafeStringBase__vtable;
    v20[1] = &byte_60B3BA34;
    v21[0] = &sead__SafeStringBase__vtable;
    v21[1] = &byte_60B3BA34;
    v5 = sub_60492B4C(0);
    v17 = (int)&sead__SafeStringBase__vtable;
    v18 = v5;
    sead__SafeStringBase__operator_assign((int)v19, (int)&v17);
    v6 = sub_60492B4C(1);
    v17 = (int)&sead__SafeStringBase__vtable;
    v18 = v6;
    (*(void (__fastcall **)(_DWORD *, int *))(v20[0] + 8))(v20, &v17);
    v7 = sub_60492B4C(2);
    v17 = (int)&sead__SafeStringBase__vtable;
    v18 = v7;
    (*(void (__fastcall **)(_DWORD *, int *))(v21[0] + 8))(v21, &v17);
    v17 = 3;
    sub_6047518C(v3, v3 + 3620, v19, &v17);
    sub_6049046C(v3);
    v8 = *(_DWORD *)(v2 + 4 * v1);
    v9 = FIELD_U32(v8, 3508);
    v10 = *(int ***)(v8 + 3512);
    if ( v9 > 4 )
      v10 += 20;
    v11 = **v10;
    if ( v1 == *v16 )
      v12 = *(void (**)(void))(v11 + 108);
    else
      v12 = *(void (**)(void))(v11 + 104);
    v12();
    ++v1;
  }
  while ( v1 != 4 );
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3556)
                                                                                             + 12))(
           FIELD_U32(a1, 3556),
           sub_609909D8,
           0);
}
