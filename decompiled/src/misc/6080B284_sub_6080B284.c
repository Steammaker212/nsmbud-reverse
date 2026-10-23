/* sub_6080B284
 * address: 0x6080B284   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080B284(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r7
  int *v9; // r8
  int v10; // r0
  int v11; // r0
  _BYTE v13[4]; // [sp+4h] [bp-24h] BYREF
  int v14; // [sp+8h] [bp-20h] BYREF
  _DWORD v15[7]; // [sp+Ch] [bp-1Ch] BYREF

  if ( a2 >= 1 )
  {
    v3 = 0;
    byte_60CC6B21 = 1;
    dword_60CC6B28 = a2;
    return v3;
  }
  v3 = 0;
  v4 = SoundSystem_instance;
  byte_60CC6B21 = 0;
  dword_60CC6B28 = 0;
  if ( !sub_60807C28(SoundSystem_instance) && !sub_60807BD0(v4) && !FIELD_U8(dword_60CC6B68, 64) )
  {
    v5 = FIELD_U32(a1, 28);
    switch ( v5 )
    {
      case 1:
        goto LABEL_9;
      case 2:
        v3 = sub_60809CBC(v4);
        if ( v3 == 1 )
        {
          v8 = (_DWORD *)(a1 + 24);
          v9 = (int *)(a1 + 20);
        }
        else
        {
          FIELD_U8(v4, 47) = 1;
          v8 = (_DWORD *)(a1 + 24);
          v9 = (int *)(a1 + 20);
          sub_6080913C(v4, FIELD_U32(a1, 20), FIELD_U32(a1, 24), 0);
        }
        v10 = *v9;
        FIELD_U32(a1, 88) = *v9;
        FIELD_U32(a1, 56) = v10;
        FIELD_U32(a1, 60) = *v8;
        goto LABEL_18;
      case 3:
LABEL_9:
        sub_60809028((_DWORD *)v4, FIELD_U32(a1, 20));
        v6 = FIELD_U32(a1, 20);
        FIELD_U32(a1, 88) = v6;
        FIELD_U32(a1, 56) = v6;
        FIELD_U32(a1, 60) = 0;
        sub_608A8604(v15, SoundSystem_instance + 64);
        if ( v15[0] )
        {
          FIELD_U64(a1, 96) = sub_6080A430(SoundSystem_instance, v7);
          FIELD_U32(a1, 104) = 1065353216;
          FIELD_U32(a1, 108) = 1065353216;
          FIELD_U32(a1, 112) = 0;
          FIELD_U32(a1, 116) = 0;
        }
        sub_608A86F0(v15);
        break;
      default:
        FIELD_U32(a1, 88) = 0;
        FIELD_U32(a1, 56) = 0;
        FIELD_U32(a1, 60) = 0;
        break;
    }
    v3 = 1;
LABEL_18:
    sub_608AE25C(&v14, SoundSystem_instance + 76);
    if ( v14 && !sub_608BC794(v14, 1) )
    {
      v11 = FIELD_U32(a1, 32);
      FIELD_U32(a1, 76) = v11;
      FIELD_U32(a1, 80) = v11;
    }
    if ( sub_60816CBC(dword_60CC6B68) == 1 )
      sub_6081811C(dword_60CC6B68);
    if ( (FIELD_U8(dword_60CC6B68, 25) & 0x10) != 0 )
      sub_6080A720(SoundSystem_instance);
    sub_608A8604(v13, SoundSystem_instance + 64);
    sub_608B7364(7, FIELD_S16(a1, 16));
    sub_608A86F0(v13);
    sub_608AE348(&v14);
  }
  return v3;
}
