/* MovingSoundActor_setPosition
 * address: 0x6080F194   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall MovingSoundActor_setPosition(MovingSoundActor *a1, Vec2 *a2)
{
  float *v3; // r9
  int *v4; // r7
  int v5; // r10
  unsigned int result; // r0
  int *p_handle; // r5
  unsigned int v8; // r6
  int v9; // r1
  char v10; // r7
  int v11; // r0
  bool v12; // zf
  int SoundArchive; // r0
  int v14; // r2
  int v15; // r2
  bool v16; // zf
  _BYTE v17[9]; // [sp+8h] [bp-40h] BYREF
  unsigned __int8 v18; // [sp+11h] [bp-37h]

  *(Vec2 *)&FIELD_U32(a1, 0x12C) = *a2;
  v3 = &FIELD_F32(a1, 0x8C);
  v4 = &FIELD_U32(a1, 0x12C);
  v5 = dword_60CC6B68;
  ((void (__fastcall *)(int, float *, int *, int, _DWORD))loc_6080E034)(
    FIELD_U32(a1, 0x84),
    &FIELD_F32(a1, 0x8C),
    &FIELD_U32(a1, 0x12C),
    7,
    0);
  if ( nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 0) > 0
    || (((void (__fastcall *)(int, float *, int *, int, _DWORD))loc_6080E034)(FIELD_U32(a1, 0x84), v3, v4, 7, 0),
        nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 1) >= 1)
    || (((void (__fastcall *)(int, float *, int *, int, _DWORD))loc_6080E034)(FIELD_U32(a1, 0x84), v3, v4, 7, 0),
        nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 2) > 0)
    || (((void (__fastcall *)(int, float *, int *, int, _DWORD))loc_6080E034)(FIELD_U32(a1, 0x84), v3, v4, 7, 0),
        result = nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 3),
        (int)result > 0) )
  {
    result = *(_DWORD *)&FIELD_U8(a1, 0x0)[120];
    if ( result )
    {
      p_handle = &FIELD_U32(a1, 0x9C)[0].handle;
      v8 = 0;
      while ( !*p_handle )
      {
LABEL_30:
        result = *(_DWORD *)&FIELD_U8(a1, 0x0)[120];
        ++v8;
        p_handle += 6;
        if ( v8 >= result )
          return result;
      }
      v10 = sub_60808FA4(SoundSystem_instance, *(_DWORD *)(*p_handle + 220));
      if ( (v10 & 1) != 0 )
        goto LABEL_14;
      v11 = FIELD_U32(v5, 20);
      if ( v11 == 3 )
        goto LABEL_14;
      v12 = v11 == 2;
      if ( v11 == 2 )
      {
        v11 = FIELD_U32(v5, 16);
        v12 = v11 == 3;
      }
      if ( v12 )
      {
LABEL_14:
        v11 = *p_handle;
        if ( *p_handle )
          v11 = sub_608B032C(v11, 0, *v3);
      }
      if ( (v10 & 2) != 0 )
      {
        SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
        if ( *p_handle )
          v14 = *(_DWORD *)(*p_handle + 220);
        else
          v14 = -1;
        sub_608A9BC0(SoundArchive, v17, v14);
        v15 = FIELD_U32(a1, 0x90);
        v11 = *p_handle;
        v9 = v18;
        if ( v15 >= 0 )
        {
          if ( !v11 )
            goto LABEL_26;
          goto LABEL_25;
        }
        if ( v11 )
        {
          v9 = v18 + v15;
LABEL_25:
          v11 = sub_608AF2F4(v11, v9);
        }
      }
LABEL_26:
      v16 = (v10 & 4) == 0;
      if ( (v10 & 4) != 0 )
      {
        v11 = *p_handle;
        v16 = *p_handle == 0;
      }
      if ( !v16 )
        sub_608B03A8(v11, v9);
      goto LABEL_30;
    }
  }
  return result;
}
