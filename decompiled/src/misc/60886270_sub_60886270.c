/* sub_60886270
 * address: 0x60886270   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60886270(int a1, unsigned __int8 *a2)
{
  int v3; // r4
  _DWORD *v5; // r5
  unsigned __int8 *v6; // r10
  int v7; // r11
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r5
  unsigned __int8 *v13; // r1
  unsigned __int8 *v14; // r0
  bool v15; // zf
  int v16; // r2
  int v17; // r4
  unsigned __int8 *v18; // r1
  int v19; // r4
  int v20; // r11
  unsigned __int8 *v21; // r0
  bool v22; // zf
  int v23; // r2
  int v24; // r1
  unsigned int v25; // r0
  nn__util__BinaryFileHeader *v26; // r5
  nn__util__BinaryFileHeader *v27; // r0
  int v28; // r7
  int v29; // r0
  int v30; // r4
  int v31; // r4
  int v32; // r0
  int v33; // r5
  int v34; // r0
  int v35; // r4
  unsigned int v36; // r6
  int v37; // r5
  int v38; // r7
  unsigned int v39; // r0
  int v40; // r1
  int v41; // r4
  int v42; // r11
  unsigned int v43; // r9
  unsigned __int8 *v44; // r1
  int result; // r0
  int v46; // [sp+8h] [bp-138h]
  int v47; // [sp+Ch] [bp-134h]
  _DWORD v48[12]; // [sp+10h] [bp-130h] BYREF
  _BYTE v49[256]; // [sp+40h] [bp-100h] BYREF
  _DWORD v50[161]; // [sp+140h] [bp+0h] BYREF
  _DWORD v51[2]; // [sp+3C4h] [bp+284h] BYREF

  v3 = 0;
  FIELD_U32(a1, 44) = 0;
  v5 = *(_DWORD **)(a1 + 8);
  v51[0] = 0;
  memset(v50, 0, 16);
  sub_6083D5B0(v50);
  v50[1] = 16;
  v6 = 0;
  v51[1] = sub_608352A0(v5, (int)v50);
  if ( a2 )
  {
    v7 = 1179931207;
    do
    {
      v8 = *a2;
      v9 = a2[1];
      v10 = a2[2];
      v11 = a2[3];
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == v7 )
      {
        v12 = FIELD_U32(a1, 952);
        sub_60886B90(a1, a2);
        v13 = *((unsigned __int8 **)a2 + 2);
        v14 = 0;
        v15 = v13 + 1 == 0;
        if ( v13 != (unsigned __int8 *)-1 )
        {
          v13 = &v13[(_DWORD)a2];
          v15 = v13 == 0;
        }
        if ( !v15 )
        {
          while ( (*v13 | (v13[1] << 8) | (v13[2] << 16) | (v13[3] << 24)) != 0x544E5447 )
          {
            v16 = *((_DWORD *)v13 + 3);
            v13 += v16;
            if ( v16 == -1 )
              v13 = 0;
            if ( !v13 )
              goto LABEL_14;
          }
          if ( v13 )
            v14 = &v13[*((_DWORD *)v13 + 5)];
        }
LABEL_14:
        FIELD_U32(a1, 92) = v14;
        FIELD_U32(a1, 964) = FIELD_U32(a1, 952) - v12;
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
      }
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == 0x414D5250 )
      {
        v17 = FIELD_U32(a1, 952);
        Faild_to_initialize_primitive_Index_d_ref(a1, a2);
        FIELD_U32(a1, 968) = FIELD_U32(a1, 952) - v17;
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
      }
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == 0x52503347 )
      {
        v18 = *((unsigned __int8 **)a2 + 2);
        v19 = v7;
        v20 = FIELD_U32(a1, 952);
        v21 = 0;
        v22 = v18 + 1 == 0;
        if ( v18 != (unsigned __int8 *)-1 )
        {
          v18 = &v18[(_DWORD)a2];
          v22 = v18 == 0;
        }
        if ( !v22 )
        {
          while ( (*v18 | (v18[1] << 8) | (v18[2] << 16) | (v18[3] << 24)) != 0x544E3347 )
          {
            v23 = *((_DWORD *)v18 + 3);
            v18 += v23;
            if ( v23 == -1 )
              v18 = 0;
            if ( !v18 )
              goto LABEL_28;
          }
          if ( v18 )
            v21 = &v18[*((_DWORD *)v18 + 5)];
        }
LABEL_28:
        FIELD_U32(a1, 96) = v21;
        v24 = v20;
        v25 = *((_DWORD *)a2 + 1);
        if ( v25 >= 0x21 )
        {
          v26 = (nn__util__BinaryFileHeader *)&a2[*((_DWORD *)a2 + 5)];
          v24 = v20;
          if ( v26 )
          {
            v47 = FIELD_U32(a1, 32);
            FIELD_U32(a1, 120) = v25;
            v27 = sub_6086EDAC(v26);
            FIELD_U32(a1, 80) = v27;
            v28 = FIELD_U32(a1, 12);
            if ( v28 )
              sub_6086EF58((int)v27, FIELD_U32(a1, 8), v28, (int)v26 + FIELD_U32(a1, 20) - v47);
            else
              sub_6086EED0((int)v27, *(_DWORD **)(a1 + 8));
            sub_608878A4(a1, FIELD_U32(a1, 80));
            v24 = FIELD_U32(a1, 952);
          }
        }
        v29 = v24 - v20;
        v7 = v19;
        FIELD_U32(a1, 976) = v29;
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
      }
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == 0x4E535247 )
      {
        v30 = FIELD_U32(a1, 952);
        sub_60887040(a1, a2);
        FIELD_U32(a1, 972) = FIELD_U32(a1, 952) - v30;
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
      }
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == 0x41545345 )
      {
        v31 = FIELD_U32(a1, 952);
        sub_608871E0(a1, a2, v51);
        FIELD_U32(a1, 980) = FIELD_U32(a1, 952) - v31;
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
      }
      if ( (v8 | (v9 << 8) | (v10 << 16) | (v11 << 24)) == 0x54465345 )
        v6 = &a2[*((_DWORD *)a2 + 5)];
      v32 = *((_DWORD *)a2 + 3);
      a2 += v32;
      if ( v32 == -1 )
        a2 = 0;
    }
    while ( a2 );
    v3 = v51[0];
  }
  v33 = FIELD_U32(a1, 952);
  if ( sub_6089632C(a1 + 128, FIELD_U32(a1, 8), a1 + 944, 16, v3) )
    sub_60835528(a1 + 128, a1 + 512);
  FIELD_U32(a1, 960) = FIELD_U32(a1, 952) - v33;
  memset(v50, 0, 640);
  memset(v49, 0, sizeof(v49));
  memset(v48, 0, sizeof(v48));
  sub_6083D7A8((int)v48);
  v48[2] = v50;
  v48[0] = 1048592;
  v48[4] = v49;
  HIWORD(v50[0]) = 15;
  v34 = sub_6083C978((unsigned __int16 *)v48);
  v35 = FIELD_U32(a1, 44);
  v36 = (v34 + 7) & 0xFFFFFFF8;
  v37 = (*(int (__fastcall **)(_DWORD, unsigned int, int))(**(_DWORD **)(a1 + 948) + 8))(
          FIELD_U32(a1, 948),
          v36 * v35,
          8);
  v38 = 0;
  v46 = FIELD_U32(a1, 952) + v36 * v35;
  FIELD_U32(a1, 952) = v46;
  ++FIELD_U32(a1, 956);
  FIELD_U32(a1, 1060) = v37;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = sub_608354C4(a1 + 128);
  if ( FIELD_S32(a1, 40) >= 1 )
  {
    v39 = 0;
    do
    {
      v40 = FIELD_U32(a1, 48);
      if ( *(int *)(v40 + 32 * v38 + 4) >= 1 )
      {
        v41 = 0;
        v42 = 0;
        do
        {
          v43 = (v39 + 7) & 0xFFFFFFF8;
          *(_DWORD *)(*(_DWORD *)(v40 + 32 * v38 + 16) + v41 + 600) = v37 + v43;
          *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 48) + 32 * v38 + 16) + v41 + 604) = v36;
          sub_608873A4(a1, *(_DWORD *)(FIELD_U32(a1, 48) + 32 * v38 + 16) + v41);
          v40 = FIELD_U32(a1, 48);
          ++v42;
          v39 = v43 + v36;
          v41 += 720;
        }
        while ( v42 < *(_DWORD *)(v40 + 32 * v38 + 4) );
      }
      if ( v6 )
      {
        *(_DWORD *)(v40 + 32 * v38 + 28) = v6 + 24;
        v44 = *((unsigned __int8 **)v6 + 4);
        if ( v44 )
          v44 = &v44[(_DWORD)v6];
        v6 = v44;
      }
      else
      {
        v6 = 0;
      }
      ++v38;
    }
    while ( v38 < FIELD_U32(a1, 40) );
  }
  sub_608354E0(a1 + 128);
  nullsub_66();
  result = FIELD_U32(a1, 952) - v46;
  FIELD_U32(a1, 984) = result;
  return result;
}
