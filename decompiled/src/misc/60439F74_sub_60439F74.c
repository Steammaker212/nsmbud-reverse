/* sub_60439F74
 * address: 0x60439F74   size: 3632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60439F74(int a1, nn__util__BinaryFileHeader *this, int a3, int a4, int a5, int a6)
{
  int v6; // r9
  void (__fastcall ***v8)(_DWORD, int (***)(), int); // r0
  int CurrentHeap_const; // r4
  int v10; // r1
  int v11; // r6
  int v12; // r5
  _DWORD *v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r4
  int v20; // r11
  unsigned __int16 *v21; // r0
  int v22; // r6
  int v23; // r7
  int v24; // r10
  int v25; // r4
  int v26; // r0
  int v27; // r0
  bool v28; // cc
  int v29; // r0
  int v30; // r0
  int v31; // r7
  int v32; // r1
  int v33; // r8
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r3
  int v39; // r0
  int v40; // r4
  _DWORD *v41; // r10
  int v42; // r0
  int v43; // r4
  int v44; // r0
  _DWORD *v45; // r6
  int v46; // r0
  int v47; // r4
  int v48; // r7
  int v49; // r0
  int v50; // r4
  int *v51; // r8
  _DWORD *v52; // r9
  char *v53; // r7
  int v54; // r6
  _WORD *v55; // r7
  int v56; // t1
  int v57; // r0
  _DWORD *v58; // r5
  int v59; // r0
  int *v60; // r1
  int v61; // t1
  int v62; // r1
  int v63; // r8
  int v64; // r4
  int *v65; // r10
  int v66; // r10
  _BYTE *v67; // t1
  int v68; // r0
  int v69; // r7
  _BYTE *v70; // r3
  int v71; // r4
  _BYTE *v72; // r11
  const void *v73; // r7
  signed int v74; // r9
  _BYTE *v75; // r1
  int v76; // r0
  int v77; // r0
  int v78; // r4
  int v79; // r0
  int v80; // r5
  int v81; // r8
  int v82; // r10
  int v83; // r7
  int v84; // r9
  int v85; // r6
  _DWORD *v86; // r5
  int v87; // r8
  int v88; // r6
  int v89; // r1
  int v90; // r4
  int v91; // r5
  _DWORD *v92; // r7
  int v93; // r0
  int v94; // r10
  int v95; // r5
  int v96; // r1
  int v97; // r4
  int v98; // r6
  _DWORD *v99; // r7
  int v100; // r4
  int v101; // r9
  int v102; // r7
  int v103; // r5
  int v104; // r0
  int v105; // r5
  _DWORD *v106; // r6
  int i; // r6
  int v108; // r4
  int result; // r0
  int v110; // [sp+10h] [bp-490h]
  int v111; // [sp+14h] [bp-48Ch]
  int v112; // [sp+18h] [bp-488h]
  int v113; // [sp+1Ch] [bp-484h]
  int v114; // [sp+20h] [bp-480h]
  int v115; // [sp+24h] [bp-47Ch]
  _DWORD *v116; // [sp+28h] [bp-478h]
  int v117; // [sp+34h] [bp-46Ch]
  int v118; // [sp+40h] [bp-460h]
  int v119; // [sp+44h] [bp-45Ch]
  int v120; // [sp+48h] [bp-458h]
  int *v121; // [sp+4Ch] [bp-454h]
  _WORD *v122; // [sp+50h] [bp-450h]
  _DWORD v123[3]; // [sp+54h] [bp-44Ch] BYREF
  int (**v124)(); // [sp+60h] [bp-440h] BYREF
  _BYTE *v125; // [sp+64h] [bp-43Ch]
  signed int v126; // [sp+68h] [bp-438h]
  int (**v127)(); // [sp+6Ch] [bp-434h] BYREF
  _BYTE *v128; // [sp+70h] [bp-430h]
  int v129; // [sp+74h] [bp-42Ch]
  _BYTE v130[904]; // [sp+78h] [bp-428h] BYREF
  int v131[10]; // [sp+478h] [bp-28h] BYREF

  v6 = a1;
  FIELD_U32(a1, 20) = sub_6086EDAC(this);
  sub_60917C68();
  v8 = *(void (__fastcall ****)(_DWORD, int (***)(), int))(v6 + 224);
  CurrentHeap_const = a6;
  if ( v8 )
  {
    v127 = *(int (***)())(v6 + 20);
    v128 = (_BYTE *)v6;
    (**v8)(v8, &v127, a6);
  }
  if ( a5 )
    v10 = a5;
  else
    v10 = FIELD_U32(v6, 20);
  sub_609184EC(FIELD_U32(v6, 20), v10);
  if ( !a6 )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v112 = FIELD_U32(dword_60CD0B50, 60);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentHeap_const + 60))(CurrentHeap_const);
  v113 = CurrentHeap_const;
  if ( a3 )
  {
    v12 = sub_608228E4(ArchiveManagerMaybe_instance, a3, &dword_60C9CA38, 0);
    if ( v12 )
    {
      v13 = (_DWORD *)sub_608DE334(0x38u, CurrentHeap_const, 4);
      if ( v13 )
      {
        *v13 = 48;
        v13[1] = 1;
        v14 = sub_6043E8F0(v13 + 2);
        FIELD_U32(v6, 24) = 1;
        FIELD_U32(v6, 28) = v14;
      }
      else
      {
        v14 = FIELD_U32(v6, 28);
      }
      sub_6043EF40(v14, v12, CurrentHeap_const, v112);
    }
  }
  memset((void *)(v6 + 48), 0, 36);
  FIELD_U32(v6, 172) += v11 - (*(int (__fastcall **)(int))(*(_DWORD *)CurrentHeap_const + 60))(CurrentHeap_const);
  v15 = FIELD_U32(v6, 20);
  if ( FIELD_U16(v15, 188) )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      v17 += sub_60431578(FIELD_U32(v15, 40) + v16);
      v15 = FIELD_U32(v6, 20);
      ++v18;
      v16 += 120;
    }
    while ( v18 < FIELD_U16(v15, 188) );
  }
  else
  {
    v17 = 0;
  }
  v19 = sub_60918390(v15);
  v110 = FIELD_U32(dword_60CD0B50, 20);
  v20 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v110 + 24))(v110, 49152, 4);
  v21 = *(unsigned __int16 **)(v6 + 20);
  v22 = 0;
  v23 = v21[96];
  v116 = (_DWORD *)v6;
  v117 = v20;
  if ( v21[96] )
  {
    v22 = 0;
    v24 = 0;
    v118 = v19;
    do
    {
      v128 = v130;
      v127 = &BufferedSafeStringBase_char_vtable_probably;
      v129 = 1024;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v127);
      v25 = 15 * v24;
      *v128 = 0;
      v127 = &off_60BFA9DC;
      v26 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v6, 20) + 72) + 120 * v24 + 16);
      v124 = &sead__SafeStringBase__vtable;
      v125 = (_BYTE *)(v26 + 2);
      if ( sub_604283E0(&v124, v131, (int)&v127) == 1 )
      {
        ((void (__fastcall *)(int (***)()))v127[3])(&v127);
        v27 = 0;
        while ( v128[v27] )
        {
          if ( !v128[v27 + 1] )
          {
            ++v27;
            break;
          }
          if ( !v128[v27 + 2] )
          {
            v27 += 2;
            break;
          }
          v28 = v27 + 2 <= 0x7FFFF;
          v27 += 3;
          if ( !v28 )
          {
            v27 = 0;
            break;
          }
        }
        v22 += v27 + 1;
        v29 = v131[0];
      }
      else
      {
        v29 = 0;
        v131[0] = 0;
      }
      v6 = (int)v116;
      ++v24;
      v30 = *((unsigned __int16 *)v116 + v29 + 36) + (v29 << 10);
      *(_DWORD *)(v20 + 8 * v30) = *(_DWORD *)(v116[5] + 72) + 8 * v25;
      *(_DWORD *)(v20 + 8 * v30 + 4) = *(_DWORD *)(*(_DWORD *)(v116[5] + 72) + 8 * v25 + 16) + 2;
      ++*((_WORD *)v116 + v131[0] + 36);
    }
    while ( v24 != v23 );
    v21 = (unsigned __int16 *)v116[5];
    v19 = v118;
  }
  v31 = v21[97];
  v32 = 4 * v19;
  if ( v21[97] )
  {
    v33 = 0;
    v119 = 4 * v19;
    do
    {
      v128 = v130;
      v127 = &BufferedSafeStringBase_char_vtable_probably;
      v129 = 1024;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v127);
      *v128 = 0;
      v127 = &off_60BFA9DC;
      v34 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v6, 20) + 88) + 104 * v33 + 16);
      v124 = &sead__SafeStringBase__vtable;
      v125 = (_BYTE *)(v34 + 2);
      if ( sub_604283E0(&v124, v131, (int)&v127) == 1 )
      {
        ((void (__fastcall *)(int (***)()))v127[3])(&v127);
        v35 = 0;
        while ( v128[v35] )
        {
          if ( !v128[v35 + 1] )
          {
            ++v35;
            break;
          }
          if ( !v128[v35 + 2] )
          {
            v35 += 2;
            break;
          }
          v28 = v35 + 2 <= 0x7FFFF;
          v35 += 3;
          if ( !v28 )
          {
            v35 = 0;
            break;
          }
        }
        v22 += v35 + 1;
        v36 = v131[0];
      }
      else
      {
        v36 = 4;
        v131[0] = 4;
      }
      v6 = (int)v116;
      v37 = *((unsigned __int16 *)v116 + v36 + 36) + (v36 << 10);
      *(_DWORD *)(v20 + 8 * v37) = *(_DWORD *)(v116[5] + 88) + 104 * v33;
      v38 = v20 + 8 * v37;
      v39 = *(_DWORD *)(v116[5] + 88) + 104 * v33++;
      FIELD_U32(v38, 4) = FIELD_U32(v39, 16) + 2;
      ++*((_WORD *)v116 + v131[0] + 36);
    }
    while ( v33 != v31 );
    v21 = (unsigned __int16 *)v116[5];
    v40 = v113;
    v32 = v119;
  }
  else
  {
    v40 = v113;
  }
  v115 = v6 + 100;
  sub_6042A11C(
    (_DWORD *)(v6 + 100),
    v40,
    v32
  + v17
  + ((v22 + 3) & 0xFFFFFFFC)
  + 12
  * (FIELD_U16(v6, 82)
   + FIELD_U16(v6, 80)
   + FIELD_U16(v6, 78)
   + FIELD_U16(v6, 76)
   + FIELD_U16(v6, 74)
   + FIELD_U16(v6, 72)
   + v21[95]),
    4);
  v111 = (*(int (__fastcall **)(int))(*(_DWORD *)v40 + 60))(v40);
  v41 = (_DWORD *)v6;
  v42 = FIELD_U32(v6, 20);
  v43 = FIELD_U16(v42, 190);
  if ( FIELD_U16(v42, 190) )
  {
    v44 = sub_6042A180(v115, 12 * v43, 4u);
    v45 = (_DWORD *)v44;
    do
    {
      v44 = sub_60428390(v44) + 12;
      --v43;
    }
    while ( v43 );
    v41 = v116;
    v116[11] = v45;
    v46 = v116[5];
    if ( FIELD_U16(v46, 190) )
    {
      v47 = 0;
      v48 = 0;
      do
      {
        *v45 = FIELD_U32(v46, 56) + v47;
        v49 = *(_DWORD *)(*(_DWORD *)(v116[5] + 56) + v47 + 16);
        v127 = &sead__SafeStringBase__vtable;
        v128 = (_BYTE *)(v49 + 2);
        sub_6042839C((int)v45, &v127);
        v46 = v116[5];
        ++v48;
        v47 += 96;
        v45 += 3;
      }
      while ( v48 < FIELD_U16(v46, 190) );
    }
  }
  v50 = 0;
  v51 = (int *)v20;
  v52 = v41;
  do
  {
    v53 = (char *)v41 + 2 * v50;
    v56 = *((unsigned __int16 *)v53 + 36);
    v55 = v53 + 72;
    v54 = v56;
    if ( v56 )
    {
      v57 = sub_6042A180(v115, 12 * v54, 4u);
      v58 = (_DWORD *)v57;
      do
      {
        v57 = sub_60428390(v57) + 12;
        --v54;
      }
      while ( v54 );
      v41[v50 + 12] = v58;
      if ( *v55 )
      {
        v59 = 0;
        v60 = v51;
        do
        {
          v61 = *v60;
          v60 += 2;
          ++v59;
          *v58 = v61;
          v58 += 3;
        }
        while ( v59 < (unsigned __int16)*v55 );
      }
    }
    ++v50;
    v51 += 2048;
  }
  while ( v50 != 6 );
  v62 = 0;
  do
  {
    v114 = v62;
    v122 = (_WORD *)v52 + v62 + 36;
    if ( *v122 )
    {
      v63 = 0;
      v121 = &v52[v62 + 12];
      v120 = v62 << 10;
      do
      {
        v64 = v63 + v120;
        if ( (v52[44] & 0x10) != 0 )
        {
          v128 = v130;
          v127 = &BufferedSafeStringBase_char_vtable_probably;
          v129 = 1024;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v127);
          v66 = v20 + 8 * v64;
          *v128 = 0;
          v127 = &off_60BFA9DC;
          v67 = *(_BYTE **)(v66 + 4);
          v65 = (int *)(v66 + 4);
          v124 = &sead__SafeStringBase__vtable;
          v125 = v67;
          if ( sub_604283E0(&v124, v131, (int)&v127) == 1 )
          {
            ((void (__fastcall *)(int (***)()))v127[3])(&v127);
            v68 = 0;
            v69 = 3;
            while ( 1 )
            {
              v70 = &v128[v69];
              if ( !v128[v69 - 3] )
                break;
              if ( !*(v70 - 2) )
              {
                v69 = v68 + 2;
                if ( v68 + 1 >= 0 )
                  goto LABEL_81;
                goto LABEL_82;
              }
              if ( !*(v70 - 1) )
              {
                if ( v69 - 1 >= 0 )
                  goto LABEL_81;
                goto LABEL_82;
              }
              v68 += 3;
              v28 = v69 - 1 <= 0x7FFFF;
              v69 += 3;
              if ( !v28 )
              {
                v69 = 1;
LABEL_81:
                v71 = sub_6042A180(v115, v69, 1u);
                goto LABEL_83;
              }
            }
            v69 = v68 + 1;
            if ( v68 >= 0 )
              goto LABEL_81;
LABEL_82:
            v71 = 0;
LABEL_83:
            v125 = (_BYTE *)v71;
            v124 = &BufferedSafeStringBase_char_vtable_probably;
            v126 = v69;
            if ( v69 <= 0 )
            {
              v72 = 0;
              v125 = 0;
              v126 = 0;
            }
            else
            {
              sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v124);
              v72 = v125;
            }
            ((void (__fastcall *)(int (***)()))v127[3])(&v127);
            v73 = v128;
            if ( v72 != v128 )
            {
              ((void (__fastcall *)(int (***)()))v127[3])(&v127);
              v74 = 0;
              while ( v128[v74] )
              {
                if ( !v128[v74 + 1] )
                {
                  ++v74;
                  break;
                }
                if ( !v128[v74 + 2] )
                {
                  v74 += 2;
                  break;
                }
                v28 = v74 + 2 <= 0x7FFFF;
                v74 += 3;
                if ( !v28 )
                {
                  v74 = 0;
                  break;
                }
              }
              if ( v74 >= v126 )
                v74 = v126 - 1;
              qmemcpy(v72, v73, v74);
              v72[v74] = 0;
              v52 = v116;
            }
            *v65 = v71;
            v20 = v117;
          }
        }
        else
        {
          v65 = (int *)(v20 + 8 * v64 + 4);
        }
        v75 = (_BYTE *)*v65;
        v76 = *v121;
        v127 = &sead__SafeStringBase__vtable;
        v128 = v75;
        sub_6042839C(v76 + 12 * v63++, &v127);
      }
      while ( v63 < (unsigned __int16)*v122 );
    }
    v62 = v114 + 1;
  }
  while ( v114 != 5 );
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v110 + 28))(v110, v20);
  v77 = v52[5];
  v78 = FIELD_U16(v77, 188);
  if ( FIELD_U16(v77, 188) )
  {
    v79 = sub_6042A180(v115, 40 * v78, 4u);
    v80 = v79;
    do
    {
      v79 = sub_60431430(v79) + 40;
      --v78;
    }
    while ( v78 );
    v116[9] = v80;
    v77 = v116[5];
    if ( FIELD_U16(v77, 188) )
    {
      v81 = 1;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      while ( 1 )
      {
        v86 = (_DWORD *)(v80 + v83);
        sub_60431618(v86, (int)v116, FIELD_U32(v77, 40) + v82, v115, v113, v112);
        v84 += v86[8];
        v77 = v116[5];
        v85 += v86[9];
        if ( v81 >= FIELD_U16(v77, 188) )
          break;
        v80 = v116[9];
        v82 += 120;
        ++v81;
        v83 += 40;
      }
      if ( v85 )
      {
        sub_6042A11C(v116 + 21, v113, v85, 8);
        v77 = v116[5];
        if ( FIELD_U16(v77, 188) )
        {
          v87 = 0;
          v88 = 0;
          do
          {
            v89 = FIELD_U32(v77, 40) + 120 * v87;
            v90 = FIELD_U16(v89, 108);
            if ( FIELD_U16(v89, 108) )
            {
              v91 = 0;
              v92 = (_DWORD *)(v116[9] + 40 * v87 + 12);
              do
              {
                v93 = sub_60428FBC((_DWORD *)(*v92 + v91), (int)(v116 + 21));
                v91 += 776;
                --v90;
                v88 += (v93 + 255) & 0xFFFFFF00;
              }
              while ( v90 );
              v77 = v116[5];
            }
            ++v87;
          }
          while ( v87 < FIELD_U16(v77, 188) );
          if ( v88 )
          {
            sub_60913D88((int)(v116 + 29), v88, v113, 256, 2);
            v94 = 0;
            sub_60913A6C(&v127, v116 + 29, 0);
            v95 = (int)v128;
            sub_60913F34(v116 + 29, v116 + 58);
            v77 = v116[5];
            if ( FIELD_U16(v77, 188) )
            {
              do
              {
                v96 = FIELD_U32(v77, 40) + 120 * v94;
                v97 = FIELD_U16(v96, 108);
                if ( FIELD_U16(v96, 108) )
                {
                  v98 = 0;
                  v99 = (_DWORD *)(v116[9] + 40 * v94 + 12);
                  do
                  {
                    v95 += sub_6042909C(*v99 + v98, (int)(v116 + 58), v95);
                    v98 += 776;
                    --v97;
                  }
                  while ( v97 );
                  v77 = v116[5];
                }
                ++v94;
              }
              while ( v94 < FIELD_U16(v77, 188) );
            }
          }
        }
        if ( v84 )
        {
          sub_60913D88((int)(v116 + 36), (v84 + 515) & 0xFFFFFFFC, v113, 4, 1);
          v100 = 0;
          sub_60913A6C(&v127, v116 + 36, 0);
          v77 = v116[5];
          if ( FIELD_U16(v77, 188) )
          {
            v101 = v84 + 512;
            v102 = 0;
            v103 = 0;
            do
            {
              v104 = v116[9];
              v123[0] = v127;
              v123[1] = &v128[v103];
              v123[2] = v129;
              v103 += sub_60431864((_DWORD *)(v104 + v100), v123, v101 - v103);
              v77 = v116[5];
              ++v102;
              v100 += 40;
            }
            while ( v102 < FIELD_U16(v77, 188) );
          }
        }
      }
    }
  }
  v105 = sub_60918390(v77);
  if ( v105 >= 1 )
  {
    v106 = (_DWORD *)sub_6042A180(v115, 4 * v105, 4u);
    v116[10] = v106;
    *v106 = sub_609184C4(v116[5]);
    if ( v105 != 1 )
    {
      for ( i = 1; i != v105; ++i )
      {
        v108 = v116[10];
        *(_DWORD *)(v108 + 4 * i) = sub_609184C4(v116[5]);
      }
    }
  }
  v116[43] += v111 - (*(int (__fastcall **)(int))(*(_DWORD *)v113 + 60))(v113);
  result = v116[44] | 0x20;
  v116[44] = result;
  return result;
}
