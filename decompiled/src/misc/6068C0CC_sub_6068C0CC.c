/* sub_6068C0CC
 * address: 0x6068C0CC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068C0CC(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  unsigned int v4; // r1
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r1
  float *v10; // r0
  float v11; // r0
  float v12; // s0
  int v13; // r1

  result = FIELD_U32(MaskMgr_instance, 16);
  if ( result )
  {
    v3 = FIELD_U8(a1, 316);
    if ( FIELD_U8(a1, 317) )
    {
      result = sub_607891F8(PlayerMgr_instance, v3);
    }
    else
    {
      if ( v3 >= 4 )
        v3 = 0;
      result = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
    }
    if ( result )
    {
      v4 = FIELD_U8(a1, 316);
      if ( FIELD_U8(a1, 317) )
      {
        v5 = sub_607891F8(PlayerMgr_instance, v4);
        if ( !v5 )
          goto LABEL_16;
      }
      else
      {
        if ( v4 >= 4 )
          v4 = 0;
        v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
        if ( !v5 )
          goto LABEL_16;
      }
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 160))(v5, a1 + 256);
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 164))(v5, a1 + 268, a1 + 280);
LABEL_16:
      v6 = FIELD_U32(MaskMgr_instance, 16);
      v7 = (v6 & 0xF0) == 16;
      if ( (v6 & 0xF0) != 0x10 )
        v7 = (unsigned __int8)v6 == 48;
      if ( v7 )
      {
        if ( ((int (__fastcall *)(int))loc_6068C5D0)(a1) )
        {
          v8 = FIELD_U32(MaskMgr_instance, 16);
          v9 = v8 == 17;
          if ( v8 == 18 )
            v9 = 2;
          v10 = (float *)((char *)&unk_60B07E58 + 8 * v9);
          if ( FIELD_U8(a1, 317) )
            ++v10;
          v11 = *v10;
          v12 = v11;
        }
        else
        {
          v12 = 0.0;
          v11 = 0.0;
        }
        FIELD_F32(a1, 288) = v11;
        ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 284, v12, 0.15, 20.0, 1.0);
        v13 = FIELD_U32(a1, 284);
        FIELD_U32(a1, 4) = FIELD_U32(a1, 256);
        FIELD_U32(a1, 8) = FIELD_U32(a1, 260);
        FIELD_U32(a1, 12) = FIELD_U32(a1, 264);
        FIELD_U32(a1, 16) = v13;
        sub_6068B6D8(a1);
      }
      return sub_6068C464(a1);
    }
  }
  return result;
}
