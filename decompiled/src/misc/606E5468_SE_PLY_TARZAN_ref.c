/* SE_PLY_TARZAN_ref
 * address: 0x606E5468   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_TARZAN_ref(int a1)
{
  unsigned int result; // r0
  unsigned int v3; // r5
  int v4; // r1
  float *v5; // r0
  int v6; // r6
  int v7; // r7
  int v8; // r10
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  int v12; // r0
  float v13; // s0
  int v14; // r0
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // s0
  __int16 v19; // r5
  int v20; // r1
  int v21; // r1
  int v22; // [sp+4h] [bp-54h] BYREF
  int v23; // [sp+Ch] [bp-4Ch]
  int v24; // [sp+10h] [bp-48h] BYREF
  int v25; // [sp+14h] [bp-44h]

  result = a1 + 2036;
  v3 = a1 + 1268;
  while ( !FIELD_U8(v3, 44) )
  {
    v3 += 48;
    if ( v3 >= result )
      return result;
  }
  FIELD_U32(v3, 8) = 512;
  FIELD_U32(v3, 16) = (int)FIELD_F32(a1, 708);
  if ( FIELD_U8(a1, 712) )
  {
    v4 = *(_DWORD *)v3;
    v5 = (float *)(a1 + 720);
    if ( *(int *)v3 < 0 )
    {
      if ( v4 < -1048576 )
      {
LABEL_12:
        *v5 = 98304.0;
        goto LABEL_13;
      }
    }
    else if ( v4 > 0x100000 )
    {
      goto LABEL_12;
    }
    *v5 = 0.0;
    FIELD_U32(v3, 20) = 0;
    FIELD_U32(v3, 24) = 0;
  }
  else
  {
    FIELD_U32(a1, 720) = 1210056704;
    v5 = (float *)(a1 + 720);
    FIELD_U32(v3, 20) = 80000;
    FIELD_U32(v3, 24) = 320000;
  }
LABEL_13:
  v6 = 0;
  v7 = 652;
  v8 = 0;
  FIELD_U32(v3, 12) = (int)*v5;
  do
  {
    v9 = a1 + 16 * v8;
    v10 = FIELD_U32(v9, 644);
    v11 = v10 == -1;
    if ( v10 != -1 )
      v11 = FIELD_U8(v9, 648) == 0;
    if ( !v11 )
    {
      v6 |= 1 << v8;
      if ( sub_60786750(*(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32) + 688) == 1 )
      {
        v12 = *(_DWORD *)v3;
        if ( *(int *)v3 < 1 )
        {
          if ( FIELD_S32(v3, 4) < 0 )
            goto LABEL_27;
          v13 = (float)(*(float *)(a1 + v7) / 135.0) * -655360.0;
LABEL_25:
          *(_DWORD *)v3 = (int)v13 + v12;
          goto LABEL_27;
        }
      }
      else
      {
        if ( sub_6078675C(*(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32) + 688) != 1 )
          goto LABEL_27;
        v12 = *(_DWORD *)v3;
        if ( *(int *)v3 >= 0 )
        {
          if ( FIELD_S32(v3, 4) > 0 )
            goto LABEL_27;
          v13 = (float)(*(float *)(a1 + v7) / 135.0) * 655360.0;
          goto LABEL_25;
        }
      }
      FIELD_U32(v3, 12) = 0x40000;
    }
LABEL_27:
    ++v8;
    v7 += 16;
  }
  while ( v8 != 4 );
  v14 = *(_DWORD *)v3;
  if ( FIELD_S32(v3, 4) < 0 )
  {
    if ( v14 >= 0 )
      goto LABEL_32;
  }
  else if ( v14 <= 0 )
  {
LABEL_32:
    FIELD_U32(v3, 12) = 0;
  }
  result = sub_608337E0(v3);
  v15 = FIELD_U32(a1, 724);
  v16 = FIELD_U32(v3, 8);
  FIELD_U32(a1, 728) = v15;
  v17 = *(_DWORD *)v3;
  FIELD_U32(a1, 724) = *(_DWORD *)v3;
  if ( v15 >= 1 && v17 < 1 || v15 < 0 && v17 >= 0 )
  {
    v18 = (int)(float)((float)(int)abs32((signed int)-result / v16)
                     * (float)((float)((float)((float)FIELD_S32(v3, 8) * 23.0) * 1.55) * 9.3132e-10));
    v19 = v18;
    if ( v18 >= 23 )
      v19 = 23;
    if ( v18 < 0 )
      v19 = 0;
    if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 132))(a1, *(float *)&v18) )
    {
      v20 = FIELD_U32(a1, 112);
      v24 = FIELD_U32(a1, 108);
      v25 = v20;
      LOBYTE(v23) = 0;
      return (*(int (__fastcall **)(int, const char *, int *, _DWORD, int *, int, _DWORD, int))(*(_DWORD *)Global_BasicSoundActor2
                                                                                              + 40))(
               Global_BasicSoundActor2,
               "SE_PLY_TARZAN_KUSARI",
               &v24,
               v19,
               &v22,
               v6,
               unk_60C26460,
               v23);
    }
    else
    {
      v21 = FIELD_U32(a1, 112);
      v24 = FIELD_U32(a1, 108);
      v25 = v21;
      LOBYTE(v23) = 0;
      return (*(int (__fastcall **)(int, const char *, int *, _DWORD, int *, int, _DWORD, int))(*(_DWORD *)Global_BasicSoundActor2
                                                                                              + 40))(
               Global_BasicSoundActor2,
               "SE_PLY_TARZAN_ROPE",
               &v24,
               v19,
               &v22,
               v6,
               unk_60C2645C,
               v23);
    }
  }
  return result;
}
