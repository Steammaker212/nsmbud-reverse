/* Icon_NOTE_ref
 * address: 0x6091EB84   size: 1368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_NOTE_ref(int a1, int a2, int a3)
{
  int result; // r0
  signed int v7; // r7
  unsigned int v8; // r0
  _DWORD *v9; // r0
  int v10; // r6
  _DWORD *v11; // r4
  int v12; // r0
  int v13; // r0
  signed int v14; // r10
  unsigned int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  int v18; // r6
  sead_IDisposer *v19; // r0
  sead_IDisposer *v20; // r0
  signed int v21; // r4
  __int64 v22; // r0
  int v23; // r0
  signed int v24; // r4
  __int64 v25; // r0
  int v26; // r0
  _DWORD *v27; // r4
  char *v28; // r0
  int v29; // r6
  _DWORD *v30; // r5
  int v31; // r7
  int v32; // r10
  int v33; // r4
  int v34; // r8
  int v35; // r1
  int v36; // r0
  int v37; // r2
  bool v38; // zf
  int v39; // r8
  unsigned int i; // r10
  int v41; // r11
  int v42; // r0
  unsigned int v43; // r3
  _DWORD *v44; // r2
  _DWORD *v45; // r0
  int v46; // r2
  unsigned int v47; // r1
  unsigned int v48; // r3
  _DWORD *v49; // r2
  int v50; // r7
  int v51; // r0
  size_t v52; // r1
  int v53; // r8
  _DWORD *v54; // r6
  int v55; // r5
  int v56; // r4
  unsigned int v57; // r7
  int v58; // r0
  int v59; // r0
  int v60; // r4
  int v61; // r5
  int v62; // r4
  int v63; // r5
  int v64; // r1
  int v65; // r2
  _DWORD *v66; // r1
  void *v67; // [sp+Ch] [bp-43Ch]
  _BYTE v68[1000]; // [sp+18h] [bp-430h]
  _DWORD v69[12]; // [sp+418h] [bp-30h] BYREF

  result = sub_6091F0FC();
  if ( a2 )
  {
    FIELD_U32(a1, 24) = a2;
    sub_6091AEA0((int **)(a1 + 24));
    if ( !FIELD_U32(a1, 20) )
    {
      v7 = *(_DWORD *)(FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16) + 24);
      if ( v7 >= 1 )
      {
        v8 = 936 * v7 + 8;
        if ( v8 < 936 * v7 )
          v8 = -1;
        if ( !is_mul_ok(0x3A8u, v7) )
          v8 = -1;
        v9 = (_DWORD *)sub_608DE334(v8, a3, 4);
        if ( v9 )
        {
          v10 = 936 * v7;
          *v9 = 936;
          v9[1] = v7;
          v11 = v9 + 2;
          v12 = (int)(v9 + 2);
          do
          {
            v10 -= 936;
            v12 = sub_6091BCD8(v12) + 936;
          }
          while ( v10 );
          FIELD_U32(a1, 28) = v7;
          FIELD_U32(a1, 32) = v11;
        }
      }
    }
    v13 = FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16);
    v14 = *(_DWORD *)(v13 + 20 + FIELD_U32(v13, 20) + 4);
    v67 = (void *)a3;
    if ( v14 >= 1 )
    {
      v15 = 52 * v14 + 8;
      if ( v15 < 52 * v14 )
        v15 = -1;
      if ( !is_mul_ok(0x34u, v14) )
        v15 = -1;
      v16 = (_DWORD *)sub_608DE334(v15, a3, 4);
      if ( v16 )
      {
        *v16 = 52;
        v16[1] = v14;
        v17 = v16 + 2;
        v18 = (int)&v16[13 * v14 + 2];
        v19 = (sead_IDisposer *)(v16 + 2);
        do
        {
          v20 = sead_IDisposer_ctor(v19);
          FIELD_U32(v20, 0x0) = (int)off_60C5D6C8;
          v20[1].vtable = (int)&off_60C5D6D8;
          v20[1].field_8 = 1;
          v20[1].field_C = 0;
          v20[2].vtable = 0;
          v20[2].containingHeap = 0;
          v20[2].field_8 = 0;
          v20[2].field_C = 0;
          v20[3].vtable = 0;
          v19 = (sead_IDisposer *)((char *)v20 + 52);
        }
        while ( v19 != (sead_IDisposer *)v18 );
        FIELD_U32(a1, 72) = v14;
        FIELD_U32(a1, 76) = v17;
      }
    }
    v21 = FIELD_U32(a1, 72);
    if ( v21 >= 1 )
    {
      v22 = 4LL * (unsigned int)v21;
      if ( !is_mul_ok(4u, v21) )
        HIDWORD(v22) = 1;
      if ( HIDWORD(v22) )
        LODWORD(v22) = -1;
      v23 = sub_608DE334(v22, a3, 4);
      if ( v23 )
      {
        FIELD_U32(a1, 80) = v21;
        FIELD_U32(a1, 84) = v23;
      }
      v24 = FIELD_U32(a1, 72);
      if ( v24 >= 1 )
      {
        v25 = 4LL * (unsigned int)v24;
        if ( !is_mul_ok(4u, v24) )
          HIDWORD(v25) = 1;
        if ( HIDWORD(v25) )
          LODWORD(v25) = -1;
        v26 = sub_608DE334(v25, a3, 4);
        if ( v26 )
        {
          FIELD_U32(a1, 88) = v24;
          FIELD_U32(a1, 92) = v26;
        }
      }
    }
    sub_6091FC74(a1 + 64, FIELD_U32(a1, 28), a3, 4);
    v27 = (_DWORD *)(FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16) + 20);
    v28 = (char *)v27 + *v27;
    v29 = *((_DWORD *)v28 + 1);
    if ( v29 )
    {
      v30 = v28 + 8;
      v31 = 0;
      v32 = *(_DWORD *)(FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16) + 24);
      v33 = FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16) + 28;
      v34 = FIELD_U32(a1, 24) + *(_DWORD *)(FIELD_U32(a1, 24) + 16) + 20;
      do
      {
        v68[v31] = 0;
        if ( v32 )
        {
          v35 = v32;
          v36 = v33;
          while ( 1 )
          {
            v37 = FIELD_S16(v36, 8);
            v38 = v37 == v31;
            if ( v37 != v31 )
              v38 = FIELD_S16(v36, 12) == v31;
            if ( !v38 )
              v38 = FIELD_S16(v36, 16) == v31;
            if ( v38 || FIELD_S16(v36, 20) == v31 )
              break;
            --v35;
            v36 += *(_DWORD *)v36;
            if ( !v35 )
              goto LABEL_48;
          }
          v68[v31] = 1;
        }
LABEL_48:
        ++v31;
      }
      while ( v31 != v29 );
      v27 = (_DWORD *)v34;
      v39 = 0;
      for ( i = 0; i != v29; ++i )
      {
        v41 = FIELD_U32(a1, 76);
        v42 = (unsigned __int8)v68[i];
        if ( FIELD_U32(a1, 72) > i )
          v41 += v39;
        FIELD_U32(v41, 28) = a1;
        FIELD_U32(v41, 20) = (unsigned __int16)i;
        FIELD_U32(v41, 32) = v30;
        v43 = FIELD_U32(v41, 24) & 0xFFFFFFFD;
        if ( v42 )
          v43 = FIELD_U32(v41, 24) | 2;
        FIELD_U32(v41, 24) = v43;
        v44 = *(_DWORD **)(a1 + 92);
        v45 = v30 + 4;
        if ( FIELD_U32(a1, 88) > (unsigned int)(unsigned __int16)i )
          v44 += (unsigned __int16)i;
        *v44 = v45;
        v46 = FIELD_U32(v41, 28);
        v47 = FIELD_U32(v41, 20);
        v48 = FIELD_U32(v46, 80);
        v49 = *(_DWORD **)(v46 + 84);
        if ( v48 > v47 )
          v49 += v47;
        *v49 = (char *)v45 + v30[1];
        v50 = *(_DWORD *)(FIELD_U32(v41, 28) + 72);
        if ( v50 >= 1 )
        {
          v51 = sub_608DE334(*(_DWORD *)(FIELD_U32(v41, 28) + 72), (int)v67, 4);
          if ( v51 )
          {
            FIELD_U32(v41, 44) = v50;
            FIELD_U32(v41, 48) = v51;
          }
        }
        v52 = FIELD_U32(v41, 44);
        if ( v52 )
          memset(*(void **)(v41 + 48), 0, v52);
        v69[0] = &sead__SafeStringBase__vtable;
        v69[1] = "Icon = NOTE";
        sub_60969510(v41 + 16, v69);
        v39 += 52;
        v30 = (_DWORD *)((char *)v30 + *v30);
      }
    }
    nn__os__GetSystemTick((nn__os *)v69);
    v53 = v27[1];
    if ( v53 )
    {
      v54 = v27 + 2;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      do
      {
        v58 = FIELD_U32(a1, 32);
        if ( FIELD_U32(a1, 28) > v57 )
          v58 += v56;
        sub_6091C784(v58, (int)v54, v67);
        v59 = FIELD_U32(a1, 68);
        if ( FIELD_U32(a1, 64) > v57 )
          v59 += v55;
        Icon_CIRCLE_ORENGE_ref(v59, a1, v57++, v54, v67);
        v55 += 312;
        v56 += 936;
        v54 = (_DWORD *)((char *)v54 + *v54);
      }
      while ( v53 != v57 );
    }
    nn__os__GetSystemTick((nn__os *)v69);
    v60 = FIELD_U32(a1, 72);
    if ( v60 )
    {
      v61 = FIELD_U32(a1, 76);
      do
      {
        if ( (FIELD_U8(v61, 24) & 1) != 0 )
          sub_6091F7B8(v61);
        v61 += 52;
        --v60;
      }
      while ( v60 );
    }
    v62 = FIELD_U32(a1, 64);
    if ( v62 )
    {
      v63 = FIELD_U32(a1, 68);
      do
      {
        sub_6091F8A0(v63);
        v63 += 312;
        --v62;
      }
      while ( v62 );
    }
    result = FIELD_U32(a1, 72);
    if ( result )
    {
      v64 = FIELD_U32(a1, 76);
      v65 = 0;
      if ( (result & 1) != 0 )
      {
        FIELD_U32(v64, 24) &= ~1u;
        v65 = 1;
      }
      if ( result != 1 )
      {
        result -= v65;
        v66 = (_DWORD *)(52 * (__int16)v65 + v64 + 76);
        do
        {
          result -= 2;
          *(v66 - 13) &= ~1u;
          *v66 &= ~1u;
          v66 += 26;
        }
        while ( result );
      }
    }
  }
  return result;
}
