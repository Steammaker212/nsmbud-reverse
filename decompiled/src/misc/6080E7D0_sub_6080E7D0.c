/* sub_6080E7D0
 * address: 0x6080E7D0   size: 1364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080E7D0(int a1, void *a2)
{
  int v4; // r0
  void *v5; // r9
  int v6; // r0
  int v7; // r11
  int v8; // r7
  int v9; // r4
  nn__hid__VibrationNode *v10; // r0
  int v11; // r4
  _DWORD *v12; // r0
  int v13; // r4
  nn__hid__VibrationNode *v14; // r0
  int v15; // r5
  _DWORD *v16; // r0
  int v17; // r11
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r8
  int v21; // r7
  int v22; // r0
  unsigned int v23; // r4
  int v24; // r5
  char *v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // r0
  unsigned int v29; // r4
  int v30; // r5
  char *v31; // r0
  int v32; // r0
  nn__hid__VibrationNodeConnection *v33; // r10
  int v34; // r9
  int v35; // r7
  int v36; // r4
  int v37; // r0
  unsigned int v38; // r5
  int v39; // r11
  char *v40; // r0
  int v41; // r0
  nn__hid__VibrationNode *v42; // r2
  nn__hid__VibrationNode *v43; // r2
  int v44; // r0
  unsigned int v45; // r4
  int v46; // r5
  char *v47; // r0
  int v48; // r0
  int result; // r0
  int v50; // [sp+14h] [bp-2Ch]
  int v51; // [sp+18h] [bp-28h]

  v4 = operator_new_8DE25C(0x80u, a2, 8);
  FIELD_U32(a1, 36) = sub_608CE608(v4);
  v5 = a2;
  v6 = operator_new_8DE25C(0x70u, a2, 8);
  FIELD_U32(a1, 40) = sub_608CDD90(v6);
  v7 = a1 + 44;
  v8 = 0;
  v51 = a1;
  do
  {
    v9 = operator_new_8DE25C(0xB40u, v5, 8);
    ((void (*)(void))sub_608CD94C)();
    *(_DWORD *)v9 = off_60C264D0;
    sead__CriticalSection__ctor((sead_IDisposer *)(v9 + 72));
    FIELD_U32(v9, 128) = 0;
    FIELD_U32(v9, 124) = 0;
    FIELD_U32(v9, 120) = 0;
    FIELD_U32(v9, 116) = 0;
    FIELD_U32(v9, 112) = 0;
    FIELD_U32(v9, 108) = 0;
    FIELD_U32(v9, 168) = 0;
    FIELD_U32(v9, 164) = 0;
    FIELD_U32(v9, 160) = 0;
    FIELD_U32(v9, 156) = 0;
    FIELD_U32(v9, 152) = 0;
    FIELD_U32(v9, 148) = 0;
    FIELD_U32(v9, 308) = 0;
    FIELD_U32(v9, 680) = 0;
    FIELD_U32(v9, 1056) = 0;
    FIELD_U32(v9, 1448) = 0;
    FIELD_U32(v9, 1824) = 0;
    FIELD_U8(v9, 2872) = 0;
    *(_DWORD *)(v7 + 4 * v8) = v9;
    FIELD_U32(v9, 2876) = v8;
    v10 = (nn__hid__VibrationNode *)operator_new_8DE25C(0x30u, v5, 8);
    v11 = *(_DWORD *)(v7 + 4 * v8);
    v12 = (_DWORD *)nn__hid__VibrationNode__ctor(v10);
    *v12 = &off_60C264F0;
    v12[10] = v11;
    v13 = v7 + 8 * v8;
    v12[11] = 0;
    FIELD_U32(v13, 16) = v12;
    v14 = (nn__hid__VibrationNode *)operator_new_8DE25C(0x30u, v5, 8);
    v15 = *(_DWORD *)(v7 + 4 * v8);
    v16 = (_DWORD *)nn__hid__VibrationNode__ctor(v14);
    ++v8;
    *v16 = &off_60C264F0;
    v16[10] = v15;
    v16[11] = 1;
    FIELD_U32(v13, 20) = v16;
  }
  while ( v8 != 4 );
  v17 = (int)v5;
  v18 = operator_new_8DE25C(0x50u, v5, 8);
  v19 = (_DWORD *)sub_608CD94C(v18);
  v20 = 0;
  *v19 = off_60C28A40;
  v19[19] = 0;
  v19[18] = 0;
  v21 = v51;
  FIELD_U32(v51, 92) = v19;
  FIELD_U32(v51, 760) = 3;
  FIELD_U32(v51, 772) = 0;
  FIELD_U32(v51, 768) = -294967296;
  FIELD_U32(v51, 776) = 0;
  FIELD_U64(v51, 800) = *(_QWORD *)&dword_60CC6B50;
  FIELD_U32(v51, 812) = 0;
  FIELD_U32(v51, 808) = 120000000;
  FIELD_U32(v51, 820) = 1036831949;
  sub_608CEB34(FIELD_U32(v51, 36), 1);
  sub_608CF094(FIELD_U32(v51, 36), 1);
  v22 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v21 + 36) + 8))(FIELD_U32(v21, 36));
  v23 = (v22
       + ((v22 >> 31) & 0xFFFFE002)
       + 4095
       + ((unsigned int)((int)(v22 + ((v22 >> 31) & 0xFFFFE002) + 4095) >> 31) >> 20))
      & 0xFFFFF000;
  v24 = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v17 + 24))(v17, v23, 4096);
  v25 = (char *)sub_608065A0();
  nn__audio__AcquireMemoryPool(v25 + 12, v51 + 8, v24, v23);
  nn__audio__RequestAttachMemoryPool(v51 + 8);
  v26 = sub_6080A560(SoundSystem_instance);
  sub_608D27C4(v26, FIELD_U32(v51, 36), 1, v24, v23);
  sub_608CE258(FIELD_U32(v51, 40), 1);
  sub_608CE33C(FIELD_U32(v51, 40), v27, dword_60CC6B50, dword_60CC6B54);
  sub_608CE5C0(FIELD_U32(v51, 40), 1);
  v28 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v21 + 40) + 8))(FIELD_U32(v21, 40));
  v29 = (v28
       + ((v28 >> 31) & 0xFFFFE002)
       + 4095
       + ((unsigned int)((int)(v28 + ((v28 >> 31) & 0xFFFFE002) + 4095) >> 31) >> 20))
      & 0xFFFFF000;
  v30 = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v17 + 24))(v17, v29, 4096);
  v31 = (char *)sub_608065A0();
  nn__audio__AcquireMemoryPool(v31 + 12, v51 + 12, v30, v29);
  nn__audio__RequestAttachMemoryPool(v51 + 12);
  v32 = sub_6080A560(SoundSystem_instance);
  sub_608D27C4(v32, FIELD_U32(v51, 40), 2, v30, v29);
  v33 = (nn__hid__VibrationNodeConnection *)(v51 + 132);
  v34 = v51 + 96;
  v35 = 0;
  v50 = v17;
  do
  {
    v36 = *(_DWORD *)(v34 + 4 * v35 - 52);
    sub_607DE5A4(v36, v17);
    sub_608CDC98(v36, 1);
    v37 = sub_608AE244(v36);
    v38 = (v37
         + ((v37 >> 31) & 0xFFFFE002)
         + 4095
         + ((unsigned int)((int)(v37 + ((v37 >> 31) & 0xFFFFE002) + 4095) >> 31) >> 20))
        & 0xFFFFF000;
    v39 = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v17 + 24))(v17, v38, 4096);
    v40 = (char *)sub_608065A0();
    nn__audio__AcquireMemoryPool(v40 + 12, v34 + v20 - 80, v39, v38);
    nn__audio__RequestAttachMemoryPool(v34 + v20 - 80);
    v41 = sub_6080A560(SoundSystem_instance);
    sub_608D27C8(v41, v36, v35 + 3, v39, v38);
    v42 = (nn__hid__VibrationNode *)sub_607DC0A8(dword_60CC5754, v35, 0);
    if ( v42 )
      nn__hid__VibrationNodeConnection__Connect(
        (nn__hid__VibrationNodeConnection *)((char *)v33 - 36),
        *(nn__hid__VibrationNode **)(v34 + 8 * v35 - 36),
        v42);
    v43 = (nn__hid__VibrationNode *)sub_607DC0A8(dword_60CC5754, v35, 1);
    if ( v43 )
      nn__hid__VibrationNodeConnection__Connect(v33, *(nn__hid__VibrationNode **)(v34 + 8 * v35 - 32), v43);
    ++v35;
    v20 += 4;
    v33 = (nn__hid__VibrationNodeConnection *)((char *)v33 + 72);
    FIELD_U32(v51, 848) = 1056964608;
    v17 = v50;
  }
  while ( v35 != 4 );
  sub_608CDC24(FIELD_U32(v51, 92), 2);
  sub_608CDC98(FIELD_U32(v51, 92), 1);
  v44 = sub_608AE244(FIELD_U32(v51, 92));
  v45 = (v44
       + ((v44 >> 31) & 0xFFFFE002)
       + 4095
       + ((unsigned int)((int)(v44 + ((v44 >> 31) & 0xFFFFE002) + 4095) >> 31) >> 20))
      & 0xFFFFF000;
  v46 = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)v50 + 24))(v50, v45, 4096);
  v47 = (char *)sub_608065A0();
  nn__audio__AcquireMemoryPool(v47 + 12, v51 + 32, v46, v45);
  nn__audio__RequestAttachMemoryPool(v51 + 32);
  v48 = sub_6080A560(SoundSystem_instance);
  result = sub_608D27C8(v48, FIELD_U32(v51, 92), 3, v46, v45);
  FIELD_U8(v51, 4) = 1;
  return result;
}
