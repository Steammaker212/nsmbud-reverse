/* sub_6024BC38
 * address: 0x6024BC38   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6024BC38(_DWORD *a1, int a2, char a3, int a4)
{
  _DWORD *v4; // r9
  int v5; // r10
  unsigned int v6; // r1
  int v7; // r4
  char v8; // r12
  unsigned int v9; // r7
  int v10; // r1
  int v11; // r2
  int v12; // r1
  _DWORD *v13; // r6
  int v14; // r5
  __guard *v15; // r11
  unsigned int v16; // r1
  int v17; // r4
  char v18; // r12
  __guard *v19; // r7
  unsigned int v20; // r11
  int v21; // r1
  int v22; // r4
  int v23; // r0
  int v24; // r8
  char v25; // r12
  int v26; // r12
  int v27; // r1
  int v28; // r2
  _DWORD *v29; // r7
  int v30; // r2
  _BYTE *v31; // r1
  unsigned int v32; // r7
  int v33; // r3
  int v37; // [sp+1Ch] [bp-34h]
  int v38; // [sp+20h] [bp-30h]
  int v39; // [sp+24h] [bp-2Ch]
  int v40; // [sp+28h] [bp-28h]

  if ( a4 )
  {
    v4 = a1 + 3856;
    v5 = 0;
    v37 = 4;
    do
    {
      v6 = v4[v5];
      if ( v6 )
      {
        v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
        if ( ((unsigned int)dword_60C8DD54 & ~(1613020384 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
        {
          dword_60C8DD50 = (int)&off_60BC04AC;
          _cxa_guard_release(dword_60C8DD54);
        }
        if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8DD50) == 1 && FIELD_U8(v7, 6324) )
        {
          v9 = FIELD_U8(v7, 6331);
          FIELD_U8(v7, 298) |= 2u;
          FIELD_U32(v7, 6336) = a2;
          FIELD_U8(v7, 6327) = a3;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C915E4);
          v10 = a1[28];
          v11 = a1[29];
          FIELD_U32(v7, 6308) = a1[27];
          FIELD_U32(v7, 6312) = v10;
          FIELD_U32(v7, 6316) = v11;
          v12 = v37;
          if ( v9 < (unsigned __int8)v37 )
            v12 = v9;
          v37 = v12;
        }
      }
      ++v5;
    }
    while ( v5 != 4 );
  }
  else
  {
    v13 = a1 + 3856;
    v14 = 0;
    v37 = 4;
    v15 = dword_60C8DD54;
    do
    {
      v16 = v13[v14];
      if ( v16 )
      {
        v17 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v16);
        if ( ((unsigned int)dword_60C8DD54 & ~(1613020752 << v18) & 1) == 0 && _cxa_guard_acquire(v15) )
        {
          dword_60C8DD50 = (int)&off_60BC04AC;
          _cxa_guard_release(dword_60C8DD54);
        }
        if ( v17 && (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60C8DD50) == 1 && FIELD_U8(v17, 6324) )
        {
          v19 = v15;
          v20 = FIELD_U8(v17, 6331);
          FIELD_U8(v17, 298) |= 2u;
          FIELD_U32(v17, 6336) = a2;
          FIELD_U8(v17, 6327) = a3;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v17 + 192))(v17, &dword_60C915E4);
          v21 = v37;
          if ( v20 < (unsigned __int8)v37 )
            v21 = v20;
          v15 = v19;
          v37 = v21;
        }
      }
      ++v14;
    }
    while ( v14 != 4 );
  }
  v22 = (unsigned __int8)v37;
  if ( (unsigned __int8)v37 != 4 )
  {
    v23 = (unsigned __int8)v37;
    if ( (unsigned __int8)v37 >= 4u )
      v23 = 0;
    v24 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[v23 + 3856]);
    if ( ((unsigned int)dword_60C8DD54 & ~(1613021036 << v25) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
    {
      dword_60C8DD50 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C8DD54);
    }
    if ( v24 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v24)(v24, &dword_60C8DD50) == 1 )
      {
        FIELD_U8(v24, 6326) = 1;
        v26 = FIELD_U32(v24, 112);
        v27 = FIELD_U32(v24, 116);
        v28 = FIELD_U32(v24, 108);
        v40 = FIELD_U32(v24, 164);
        v39 = FIELD_U32(v24, 160);
        v38 = FIELD_U32(v24, 156);
        v29 = (_DWORD *)(v24 + 6408);
        do
        {
          *v29 = v28;
          v29[1] = v26;
          v29[2] = v27;
          v29[5] = v40;
          v29[4] = v39;
          v29[3] = v38;
          v29 += 6;
        }
        while ( (unsigned int)v29 <= v24 + 9456 );
        v30 = 0;
        v31 = (_BYTE *)(v24 + 9480);
        do
        {
          *v31++ = v30;
          v30 += 12;
        }
        while ( (unsigned int)v31 <= v24 + 9484 );
        FIELD_U8(v24, 9485) = 0;
        if ( (unsigned int)(unsigned __int8)v37 + 1 <= 3 )
        {
          do
          {
            v32 = (unsigned __int8)v22;
            v33 = a1[v22++ + 3857];
            if ( v32 >= 3 )
              v32 = 0;
            *(_DWORD *)(v24 + 4 * v32 + 9488) = v33;
          }
          while ( v22 != 3 );
        }
      }
    }
  }
}
