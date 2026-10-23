/* sub_605B9130
 * address: 0x605B9130   size: 2000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B9130(int a1, int a2, _BYTE *a3)
{
  float WrappedXPos; // s0
  float v6; // s22
  float v7; // s16
  int v8; // r10
  int v9; // r0
  int v10; // r4
  unsigned int v11; // r8
  float v12; // r0
  int v13; // r6
  int v14; // r9
  int v15; // r11
  unsigned int v16; // r0
  char v17; // r12
  int v18; // r4
  int v19; // r2
  int v20; // r7
  float v21; // s18
  int v22; // r6
  int v23; // r4
  int v24; // r0
  int v25; // r2
  float v26; // s20
  int v27; // r6
  int v28; // r1
  unsigned int v29; // r4
  __int16 v30; // r10
  unsigned int v31; // r7
  int v32; // r11
  int v33; // r6
  int v34; // r0
  _WORD *v35; // r0
  int *v36; // r0
  int v37; // r1
  int v38; // r3
  _WORD *v39; // r2
  int v40; // r3
  int v41; // r1
  int v42; // r1
  int v43; // r2
  int v44; // r11
  __int16 v45; // r0
  int v46; // r1
  bool v47; // zf
  __int16 v48; // r0
  int v49; // r7
  char v50; // r7
  _BYTE *v51; // r5
  char v52; // r12
  unsigned __int16 v54; // r0
  unsigned int v55; // r1
  int v56; // r0
  int v57; // [sp+4h] [bp-94h]
  int v58; // [sp+8h] [bp-90h]
  unsigned int v59; // [sp+Ch] [bp-8Ch]
  int v60; // [sp+10h] [bp-88h]
  __int16 v61; // [sp+14h] [bp-84h]
  _BYTE *v62; // [sp+18h] [bp-80h]
  __int16 v64; // [sp+1Ch] [bp-7Ch]
  unsigned int v65; // [sp+20h] [bp-78h]
  ActorBuildInfo v66[2]; // [sp+24h] [bp-74h] BYREF

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *(float *)a2);
  v6 = FIELD_F32(a2, 4);
  v7 = WrappedXPos;
  v8 = 0;
  v65 = (unsigned int)WrappedXPos;
  v9 = sub_60715E94(
         TileMgr_instance,
         (unsigned int)WrappedXPos,
         (unsigned int)(float)-v6,
         0,
         COERCE_FLOAT((unsigned int)(float)-v6));
  v10 = v9;
  v62 = a3;
  if ( v9 == 50 )
  {
    v8 = 2;
  }
  else if ( v9 != 49 )
  {
    if ( v9 == 48 )
    {
      v8 = 1;
    }
    else
    {
      v8 = 3;
      if ( (unsigned __int16)(v9 - 3) >= 8u && (v9 | 0x10) != 0x1D )
        v8 = 0;
    }
  }
  v11 = FIELD_U8(a2, 12);
  v12 = FIELD_F32(a2, 16);
  v13 = FIELD_S8(a2, 14);
  v14 = v11;
  v15 = (unsigned __int8)v13;
  if ( v11 <= 2 )
    v14 = 2;
  if ( (*(_BYTE *)(LODWORD(v12) + 8 * v11 + 2528) & 0x80) != 0 )
  {
    *(float *)&v66[0].settings1 = v7;
    *(float *)&v66[0].settings2 = v6;
    v66[0].parentId = FIELD_U32(a2, 8);
    v66[0].profile = (Profile *)(unsigned __int16)v8;
    LOBYTE(v66[0].position.x) = v11;
    BYTE1(v66[0].position.x) = v13;
    BYTE2(v66[0].position.x) = FIELD_U8(a2, 15);
    v66[0].position.y = v12;
    sub_605B9974(a1, v66);
    return 0;
  }
  v60 = 0;
  v16 = sub_60715E18(v65, (unsigned int)(float)-v6, 0, 1);
  v61 = v8;
  if ( v8 == 3 )
  {
    v19 = 16;
    v20 = 1;
    if ( v10 != 29 )
      v19 = v10 - 3;
  }
  else
  {
    v19 = v16 >> 10;
    v20 = 0;
  }
  v59 = (unsigned int)(float)-v6;
  v21 = v7 + 8.0;
  if ( (unsigned __int8)v13 == 255 )
  {
    v23 = v19;
    v25 = 255;
    v26 = v7 + 8.0;
  }
  else
  {
    v18 = 0;
    if ( (unsigned __int8)v13 >= 4u )
      v13 = 0;
    v22 = *(_DWORD *)(PlayerMgr_instance + 4 * v13 + 48);
    if ( !v22 )
    {
      v22 = FIELD_U32(PlayerMgr_instance, 48);
      if ( !v22 )
        return v18;
      v15 = 0;
    }
    v23 = v19;
    if ( ((unsigned int)&dword_60C7B37C & ~(1616614144 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v24 = (**(int (__fastcall ***)(int, int *))v22)(v22, &dword_60C7B378);
    v25 = v15;
    if ( v24 )
      v24 = v22;
    v60 = v24;
    v26 = FIELD_F32(v22, 108);
  }
  v27 = FIELD_U8(a2, 15);
  v58 = v25;
  if ( FIELD_U32(AreaTask_intance, 1828) == 1 )
  {
    v26 = AreaTask_getWrappedXPos(AreaTask_intance, v26);
    v21 = AreaTask_getWrappedXPos(AreaTask_intance, v7 + 8.0);
  }
  v28 = v23;
  v29 = 0;
  if ( v27 == 3 )
  {
    if ( v14 == 1 )
    {
      v29 = 0x80000000;
    }
    else if ( v14 == 3 && v21 < v26 )
    {
      v29 = 0x80000000;
    }
  }
  if ( (v8 & 3) == 2 )
  {
    v18 = 0;
    TileMgr_setTile(TileMgr_instance, v65, v59, 0, 0);
    *(float *)&v66[0].settings1 = v7;
    *(float *)&v66[0].settings2 = v6;
    LOBYTE(v34) = FIELD_U8(a2, 12);
LABEL_47:
    LOWORD(v66[0].parentId) = (unsigned __int8)v34;
    BYTE2(v66[0].parentId) = FIELD_U8(a2, 15);
    HIBYTE(v66[0].parentId) = v58;
    LOWORD(v66[0].profile) = 0;
    SE_OBJ_BLOCK_BREAK_ref_2(a1, (int)v66, 0);
    return v18;
  }
  v57 = v20;
  if ( v8 == 1 )
  {
    v30 = word_60B05486[v28];
    if ( (unsigned int)(v28 - 1) >= 0xD )
    {
      v31 = (unsigned int)(float)-v6;
      v32 = 0;
      v33 = 0;
      if ( FIELD_U8(a2, 13) == 1 )
      {
        v18 = 0;
        TileMgr_setTile(TileMgr_instance, v65, v59, 0, 0);
        v34 = FIELD_U8(a2, 12);
        if ( (*(_BYTE *)(FIELD_U32(a2, 16) + 8 * v34 + 2531) & 1) != 0 )
        {
          *(float *)&v66[0].settings1 = v7;
          *(float *)&v66[0].settings2 = v6;
          LOBYTE(v66[0].parentId) = v34;
          BYTE1(v66[0].parentId) = v58;
          HIWORD(v66[0].parentId) = 0;
          SE_OBJ_BLOCK_BREAK_ref_3(a1, v66, 0, 0);
          return v18;
        }
        v18 = 0;
        *(float *)&v66[0].settings1 = v7;
        *(float *)&v66[0].settings2 = v6;
        goto LABEL_47;
      }
LABEL_71:
      v48 = sub_60716460(TileMgr_instance, v65, v31, 0, 0);
      v46 = v60;
      v64 = v48;
      if ( !v60 || v11 > 2 )
        goto LABEL_78;
      goto LABEL_73;
    }
    if ( v28 == 2 )
    {
      v36 = (int *)(a1 + 61652);
      v37 = FIELD_U32(a1, 61652);
      if ( v37 < 1 )
      {
LABEL_56:
        v40 = 0;
        v32 = 0;
        if ( (unsigned int)v37 >= 0x65 )
          v37 = 0;
        v41 = a1 + 16 + 16 * v37;
        FIELD_U32(v41, 8) = 0;
        *(float *)v41 = v7;
        FIELD_F32(v41, 4) = v6;
        v42 = *v36;
        if ( (unsigned int)*v36 < 0x65 )
          v40 = *v36;
        v43 = a1 + 16 + 16 * v40;
        FIELD_U16(v43, 14) = 280;
        FIELD_U16(v43, 12) = 0;
        *v36 = v42 + 1;
        v33 = 1;
      }
      else
      {
        v38 = 0;
        v39 = (_WORD *)(a1 + 30);
        while ( *(float *)(v39 - 7) != v7 || *(float *)(v39 - 5) != v6 )
        {
          ++v38;
          v39 += 8;
          if ( v38 >= v37 )
            goto LABEL_56;
        }
        v33 = 1;
        v32 = 0;
        v54 = *(v39 - 1) + 1;
        v55 = v54;
        *(v39 - 1) = v54;
        v56 = 2;
        if ( v55 > 9 )
          v56 = 3;
        if ( *v39 )
          v56 = 1;
        if ( (v56 | 1) == 3 )
        {
          v33 = 0;
          v32 = 1;
          if ( v56 == 3 )
            LOBYTE(v30) = 14;
          else
            v33 = 1;
        }
      }
      goto LABEL_70;
    }
LABEL_69:
    v32 = 0;
    v33 = 0;
LABEL_70:
    v31 = (unsigned int)(float)-v6;
    goto LABEL_71;
  }
  if ( v20 )
  {
    v35 = &unk_60B054A8;
LABEL_68:
    v30 = v35[v28];
    goto LABEL_69;
  }
  if ( v28 != 3 )
  {
    v35 = &unk_60B05464;
    goto LABEL_68;
  }
  if ( !v60 )
  {
    v31 = (unsigned int)(float)-v6;
    v33 = 0;
    LOBYTE(v30) = 12;
    v32 = 0;
    v64 = sub_60716460(TileMgr_instance, v65, v59, 0, 0);
LABEL_78:
    TileMgr_setTile(TileMgr_instance, v65, v31, 0, 111);
    goto LABEL_79;
  }
  v44 = (*(int (__fastcall **)(int))(*(_DWORD *)v60 + 1204))(v60);
  v31 = (unsigned int)(float)-v6;
  v33 = 0;
  v45 = sub_60716460(TileMgr_instance, v65, v59, 0, 0);
  v46 = v60;
  v47 = v44 == 0;
  LOBYTE(v30) = 12;
  v32 = 0;
  v64 = v45;
  if ( !v47 )
    LOBYTE(v30) = 8;
  if ( v11 > 2 )
    goto LABEL_78;
LABEL_73:
  if ( !v33 || FIELD_U32(v46, 1320) != 3 )
    goto LABEL_78;
  TileMgr_setTile(TileMgr_instance, v65, v31, 0, 14);
  v33 = 1;
LABEL_79:
  v49 = FIELD_U8(a2, 15);
  memset(&v66[0].settings2, 0, 36);
  v66[0].settings1 = (unsigned __int16)(32 * v61)
                   | (v57 << 23)
                   | (v58 << 16) & 0xF0000
                   | v29
                   | v30 & 0x1F
                   | (v32 << 15)
                   | (v49 << 24) & 0xF000000;
  v66[0].profile = Profile__get(0x11Fu);
  v66[0].position.x = v7;
  v66[0].position.y = v6;
  v50 = 0;
  v18 = 1;
  v66[0].position.z = 4.0;
  v66[0].field_20 = 0;
  v66[0].eventId1 = 0;
  v66[0].eventId2 = 0;
  v66[0].field_28 = 0;
  v51 = ActorMgr__create((void *)ActorMgr__instance, v66, 1);
  if ( v51 )
  {
    if ( ((unsigned int)&dword_60CB038C & ~(1616615448 << v52) & 1) == 0 && _cxa_guard_acquire(&dword_60CB038C) )
    {
      dword_60CB0388 = (int)&off_60BD4904;
      _cxa_guard_release(&dword_60CB038C);
    }
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v51)(v51, &dword_60CB0388) == 1 )
      *((_WORD *)v51 + 3492) = v64;
  }
  if ( !v32 )
    v50 = 1;
  *v62 = (v33 != 0) & v50;
  return v18;
}
