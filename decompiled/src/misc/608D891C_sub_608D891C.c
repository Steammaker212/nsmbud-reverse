/* sub_608D891C
 * address: 0x608D891C   size: 1648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D891C(int a1, int a2, const void *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v9; // r4
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r10
  __int64 v14; // r8
  int v15; // r6
  int v16; // r6
  int v17; // r4
  int v18; // r7
  int v19; // r8
  int v20; // r0
  int v21; // r2
  unsigned int v22; // r1
  unsigned int v23; // r3
  unsigned int v24; // r0
  _DWORD *v25; // r6
  unsigned int v26; // r10
  int v27; // r1
  int v28; // r4
  unsigned int v29; // r0
  int v30; // r0
  int v31; // r7
  int v32; // r9
  __int64 v33; // r0
  int *v34; // r2
  int v35; // r6
  int v36; // r4
  _BOOL4 v37; // r7
  int v38; // r4
  int v39; // r7
  int v40; // r4
  unsigned int v41; // r1
  int v42; // r1
  bool v43; // zf
  int v44; // r0
  bool v45; // zf
  int v46; // r1
  int v47; // r4
  int v48; // r0
  int v49; // r0
  int v50; // r4
  int v51; // r0
  unsigned int v53; // [sp+4h] [bp-CCh]
  unsigned int v54; // [sp+8h] [bp-C8h]
  int v55; // [sp+Ch] [bp-C4h]
  int v57; // [sp+14h] [bp-BCh]
  unsigned int v59; // [sp+1Ch] [bp-B4h]
  int v60; // [sp+20h] [bp-B0h] BYREF
  int v61; // [sp+24h] [bp-ACh]
  int v62; // [sp+28h] [bp-A8h]
  int v63; // [sp+2Ch] [bp-A4h]
  __int64 v64; // [sp+30h] [bp-A0h] BYREF
  int v65; // [sp+38h] [bp-98h] BYREF
  int v66[4]; // [sp+78h] [bp-58h] BYREF
  __int64 v67; // [sp+88h] [bp-48h]
  int v68[2]; // [sp+98h] [bp-38h] BYREF
  _QWORD v69[6]; // [sp+A0h] [bp-30h] BYREF

  nn__os__GetSystemTick((nn__os *)v69);
  v9 = 0;
  v10 = 0;
  if ( FIELD_U8(a7, 28) )
  {
    v10 = 0;
    v11 = FIELD_U32(a1, 9984);
    if ( v11 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
      v10 = 1;
    }
  }
  v57 = v10;
  v12 = 0;
  if ( FIELD_U32(a1, 720) > FIELD_U32(a1, 724) )
  {
    if ( *(_BYTE *)(FIELD_U32(a1, 28) + 8) )
    {
      FIELD_U32(a1, 720) = FIELD_U32(a1, 728);
      nn__os__GetSystemTick((nn__os *)&v64);
      v13 = 0;
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 24) + 24))(
        FIELD_U32(a1, 24),
        FIELD_U32(a1, 736),
        0);
      nn__os__GetSystemTick((nn__os *)v66);
      v14 = *(_QWORD *)v66 - v64;
      if ( FIELD_U32(a1, 728) )
      {
        if ( !FIELD_U32(a1, 9988) )
          return v13;
        v15 = FIELD_U32(a1, 48);
        if ( v15 >= 1 )
          qmemcpy(&v64, a3, 4 * v15);
        if ( (*(int (__fastcall **)(_DWORD, __int64 *, _DWORD, int, int))(**(_DWORD **)(a1 + 9984) + 16))(
               FIELD_U32(a1, 9984),
               &v64,
               FIELD_U32(a1, 24),
               v15,
               2) != 1 )
          return v13;
      }
      sub_608D4BB8(a1 + 768, *(_DWORD *)(FIELD_U32(a1, 28) + 12));
      v9 = v14;
      FIELD_U8(a1, 744) = 1;
      v12 = HIDWORD(v14);
    }
    else
    {
      v9 = 0;
      v12 = 0;
    }
  }
  v16 = a5;
  v53 = v12;
  v54 = v9;
  if ( a5 )
  {
    v17 = FIELD_U32(a1, 788);
    v18 = FIELD_U32(a1, 796);
    v19 = 0;
    if ( v17 + a5 >= v18 )
    {
      while ( sub_608D4B40(a1 + 768, a1, FIELD_U32(a1, 28)) == 1 )
      {
        v20 = v17 - v18;
        v17 = FIELD_U32(a1, 788);
        v18 = FIELD_U32(a1, 796);
        ++v19;
        v16 += v20;
        if ( v17 + v16 < v18 )
          goto LABEL_19;
      }
      v13 = 1;
      FIELD_U8(a1, 745) = 1;
      FIELD_U32(a2, 24) = 0;
      return v13;
    }
LABEL_19:
    sub_608D4BC0(a1 + 768, v16);
    v21 = FIELD_U32(a1, 28);
    v22 = FIELD_U32(a1, 788);
    v23 = FIELD_U32(v21, 36);
    v24 = v22 / v23;
    FIELD_U32(a1, 720) = v22 / v23;
    if ( v23 <= v22 )
    {
      v25 = (_DWORD *)(a1 + 9984);
      v26 = 0;
      do
      {
        v27 = FIELD_U32(a1, 728);
        if ( v27 && v26 == v27 - 1 )
        {
          FIELD_U32(a1, 736) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 28))(FIELD_U32(a1, 24));
          v24 = FIELD_U32(a1, 720);
        }
        if ( v26 == v24 - 1 )
        {
          if ( v26 && FIELD_U32(a1, 9988) )
          {
            v28 = FIELD_U32(a1, 48);
            if ( v28 >= 1 )
              qmemcpy(&v64, a3, 4 * v28);
            (*(void (__fastcall **)(_DWORD, __int64 *, _DWORD, int, int))(*(_DWORD *)*v25 + 16))(
              *v25,
              &v64,
              FIELD_U32(a1, 24),
              v28,
              2);
          }
        }
        else
        {
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v25 + 12))(*v25, FIELD_U32(a1, 24));
        }
        v24 = FIELD_U32(a1, 720);
        ++v26;
      }
      while ( v26 < v24 );
      v21 = FIELD_U32(a1, 28);
      v22 = FIELD_U32(a1, 788);
    }
    v29 = v22 - FIELD_U32(v21, 36) * v24;
  }
  else
  {
    v19 = 0;
    if ( FIELD_U8(a1, 744) )
      v29 = FIELD_U32(a1, 740);
    else
      v29 = 0;
  }
  v59 = v29;
  v30 = FIELD_U32(a1, 728);
  v31 = FIELD_U32(a1, 720);
  if ( v30 && v30 - 1 == v31 )
  {
    FIELD_U32(a1, 736) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 28))(FIELD_U32(a1, 24));
    v31 = FIELD_U32(a1, 720);
  }
  v32 = FIELD_U32(a1, 724);
  v33 = FIELD_U64(a1, 24);
  v34 = (int *)(HIDWORD(v33) + 36);
  if ( v31 == v32 )
    v34 = (int *)(HIDWORD(v33) + 48);
  v35 = *v34;
  v55 = FIELD_U32(a1, 788);
  v36 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v33 + 28))(v33);
  v13 = 0;
  if ( v36 >= (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 32))(FIELD_U32(a1, 24)) )
    v35 = 0;
  v37 = v31 == v32;
  if ( !v35 )
    goto LABEL_55;
  if ( FIELD_U32(a1, 9988) )
  {
    v38 = FIELD_U32(a1, 48);
    if ( v38 >= 1 )
      qmemcpy(&v64, a3, 4 * v38);
    if ( (*(int (__fastcall **)(_DWORD, __int64 *, _DWORD, int, _BOOL4))(**(_DWORD **)(a1 + 9984) + 16))(
           FIELD_U32(a1, 9984),
           &v64,
           FIELD_U32(a1, 24),
           v38,
           v37) == 1 )
    {
      if ( FIELD_S32(a1, 48) >= 1 )
      {
        v39 = 0;
        do
        {
          nullsub_100();
          ++v39;
        }
        while ( v39 < FIELD_U32(a1, 48) );
      }
      if ( !*(_BYTE *)(FIELD_U32(a1, 28) + 8) )
      {
        v40 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 28))(FIELD_U32(a1, 24));
        if ( v40 >= (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 32))(FIELD_U32(a1, 24)) )
          FIELD_U32(a1, 724) = FIELD_U32(a1, 720);
      }
LABEL_55:
      sub_608D4BC0(a1 + 768, v35);
      FIELD_U8(a1, 744) = 0;
      v41 = FIELD_U32(a1, 720) + 1;
      FIELD_U32(a1, 720) = v41;
      if ( v41 > FIELD_U32(a1, 724) )
      {
        v42 = *(unsigned __int8 *)(FIELD_U32(a1, 28) + 8);
        v43 = v42 == 0;
        if ( *(_BYTE *)(FIELD_U32(a1, 28) + 8) )
          ++v19;
        else
          LOBYTE(v42) = 1;
        if ( v43 )
          FIELD_U8(a1, 745) = v42;
      }
      v13 = 1;
      FIELD_U8(a2, 40) = 0;
      FIELD_U32(a2, 140) = v19;
      FIELD_U32(a2, 20) = a4;
      FIELD_U32(a2, 24) = v35;
      FIELD_U32(a2, 28) = v55;
      FIELD_U32(a2, 32) = v59;
      FIELD_U32(a2, 36) = 2 * v35;
      FIELD_U8(a2, 144) = FIELD_U8(a1, 745);
      if ( v57 == 1 )
      {
        nn__os__GetSystemTick((nn__os *)v68);
        (*(void (__fastcall **)(int *))(**(_DWORD **)(a1 + 9984) + 24))(v66);
        v13 = 1;
        LODWORD(v64) = 1;
        v67 += __PAIR64__(v53, v54);
        v63 = 0;
        v62 = 0;
        v61 = 0;
        v60 = 0;
        v44 = FIELD_U32(a1, 712);
        v45 = v44 == 0;
        if ( v44 )
          v45 = FIELD_U32(a1, 716) == 0;
        if ( !v45 )
        {
          v46 = FIELD_U32(a1, 24);
          v47 = 0;
          v48 = 0;
          if ( v46 )
          {
            v43 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v46 + 64))(FIELD_U32(a1, 24)) == 1;
            v48 = 0;
            if ( v43 )
              v48 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 80))(FIELD_U32(a1, 24));
          }
          v60 = v48;
          v49 = FIELD_U32(a1, 24);
          if ( v49 && (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 64))(v49) == 1 )
            v47 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 84))(FIELD_U32(a1, 24));
          v61 = v47;
          v50 = 0;
          v51 = FIELD_U32(a1, 24);
          if ( v51 && (*(int (__fastcall **)(int))(*(_DWORD *)v51 + 64))(v51) == 1 )
            v50 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 24) + 28))(FIELD_U32(a1, 24));
          v62 = v50;
          v63 = FIELD_U32(a1, 20);
        }
        sub_608D2B68((int)&v65, v69, v68, v66, &v60);
        sub_608D2C08((_DWORD *)a7, &v64);
      }
    }
  }
  return v13;
}
