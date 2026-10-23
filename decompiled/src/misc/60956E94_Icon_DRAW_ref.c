/* Icon_DRAW_ref
 * address: 0x60956E94   size: 1196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_DRAW_ref(int a1, _DWORD *a2, void *a3, int a4)
{
  _DWORD *v8; // r0
  signed int v9; // r5
  __int64 v10; // r0
  signed int v11; // r5
  unsigned int v12; // r0
  _DWORD *v13; // r9
  int v14; // r7
  signed int v15; // r5
  unsigned int v16; // r0
  _DWORD *v17; // r9
  int v18; // r7
  signed int v19; // r5
  unsigned int v20; // r0
  _DWORD *v21; // r9
  int v22; // r7
  int v23; // r1
  bool v24; // zf
  signed int v25; // r5
  __int64 v26; // r0
  int v27; // r0
  unsigned int v28; // r2
  unsigned int v29; // r0
  unsigned int v30; // r7
  int v31; // r5
  char *v32; // r0
  unsigned int v33; // r0
  int v34; // r0
  int v35; // r2
  int v36; // r0
  int v37; // r1
  int v38; // r3
  int v39; // r7
  int v40; // r5
  int v41; // r6
  int v42; // r1
  int v43; // r0
  int v45; // [sp+1Ch] [bp-34h]
  int v46; // [sp+20h] [bp-30h]
  int (**v47)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v48; // [sp+28h] [bp-28h]

  v8 = (_DWORD *)a2[11];
  FIELD_U8(a1, 254) = (_BYTE)v8;
  v9 = a2[10];
  if ( v9 >= 1 )
  {
    v10 = 4LL * (unsigned int)v9;
    if ( !is_mul_ok(4u, v9) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v8 = (_DWORD *)sub_608DE334(v10, (int)a3, 4);
    if ( v8 )
    {
      FIELD_U32(a1, 32) = v9;
      FIELD_U32(a1, 36) = v8;
    }
  }
  v11 = FIELD_U32(a1, 32);
  if ( v11 >= 1 )
  {
    v12 = 28 * v11 + 8;
    if ( v12 < 28 * v11 )
      v12 = -1;
    if ( !is_mul_ok(0x1Cu, v11) )
      v12 = -1;
    v8 = (_DWORD *)sub_608DE334(v12, (int)a3, 4);
    if ( v8 )
    {
      *v8 = 28;
      v8[1] = v11;
      v13 = v8 + 2;
      v14 = 28 * v11;
      v8 += 2;
      do
      {
        v14 -= 28;
        v8 = (_DWORD *)(sub_60972840(v8) + 28);
      }
      while ( v14 );
      FIELD_U32(a1, 40) = v11;
      FIELD_U32(a1, 44) = v13;
    }
    v15 = FIELD_U32(a1, 32);
    if ( v15 >= 1 )
    {
      v16 = 28 * v15 + 8;
      if ( v16 < 28 * v15 )
        v16 = -1;
      if ( !is_mul_ok(0x1Cu, v15) )
        v16 = -1;
      v8 = (_DWORD *)sub_608DE334(v16, (int)a3, 4);
      if ( v8 )
      {
        *v8 = 28;
        v8[1] = v15;
        v17 = v8 + 2;
        v18 = 28 * v15;
        v8 += 2;
        do
        {
          v18 -= 28;
          v8 = (_DWORD *)(sub_60972840(v8) + 28);
        }
        while ( v18 );
        FIELD_U32(a1, 48) = v15;
        FIELD_U32(a1, 52) = v17;
      }
      v19 = FIELD_U32(a1, 32);
      if ( v19 >= 1 )
      {
        v20 = 28 * v19 + 8;
        if ( v20 < 28 * v19 )
          v20 = -1;
        if ( !is_mul_ok(0x1Cu, v19) )
          v20 = -1;
        v8 = (_DWORD *)sub_608DE334(v20, (int)a3, 4);
        if ( v8 )
        {
          *v8 = 28;
          v8[1] = v19;
          v21 = v8 + 2;
          v22 = 28 * v19;
          v8 += 2;
          do
          {
            v22 -= 28;
            v8 = (_DWORD *)(sub_60972840(v8) + 28);
          }
          while ( v22 );
          FIELD_U32(a1, 56) = v19;
          FIELD_U32(a1, 60) = v21;
        }
      }
    }
  }
  v23 = a2[12];
  v24 = v23 == 0;
  if ( v23 )
  {
    v8 = (_DWORD *)a2[14];
    v24 = v8 == 0;
  }
  if ( !v24 )
    sub_60976E74(a1 + 64, v23, a2[13], 4096, v8, a3, a4);
  FIELD_U32(a1, 20) = a2[16];
  v25 = a2[9];
  if ( v25 >= 1 )
  {
    v26 = 4LL * (unsigned int)v25;
    if ( !is_mul_ok(4u, v25) )
      HIDWORD(v26) = 1;
    if ( HIDWORD(v26) )
      LODWORD(v26) = -1;
    v27 = sub_608DE334(v26, (int)a3, 4);
    if ( v27 )
    {
      FIELD_U32(a1, 24) = v25;
      FIELD_U32(a1, 28) = v27;
    }
  }
  v28 = FIELD_U32(a1, 248) & 0xFFFF7FFF;
  if ( (a2[15] & 2) == 0 )
    v28 = FIELD_U32(a1, 248) | 0x8000;
  FIELD_U32(a1, 248) = v28;
  v29 = v28 & 0xFFFFFFEF;
  if ( (a2[15] & 1) == 0 )
    v29 = v28 | 0x10;
  FIELD_U32(a1, 248) = v29;
  v46 = FIELD_U32(a1, 24);
  if ( v46 )
  {
    v30 = 0;
    v45 = FIELD_U32(a1, 28);
    do
    {
      v31 = operator_new_8DE25C(0xE30u, a3, 4);
      Icon_SCREEN_ref();
      v32 = off_60C5EA44[v30];
      v47 = &sead__SafeStringBase__vtable;
      v48 = v32;
      v33 = 0;
      if ( v30 < 2 )
        v33 = v30;
      sub_60974AA0(
        v31,
        v30,
        &v47,
        &a2[2 * v33 + 1],
        &a2[2 * v33 + 5],
        a2[v33 + 17],
        FIELD_U32(a1, 32),
        FIELD_U8(a1, 254),
        (a2[15] & 1) == 0,
        a3);
      if ( a2[12] )
        FIELD_U32(v31, 2296) = a1 + 64;
      *(_DWORD *)(v45 + 4 * v30++) = v31;
    }
    while ( v46 != v30 );
  }
  v34 = FIELD_U32(a1, 32);
  if ( v34 >= 1 )
  {
    if ( (v34 & 3) != 0 )
    {
      v35 = 0;
      do
        *(_DWORD *)(FIELD_U32(a1, 36) + 4 * v35++) = 0;
      while ( (v34 & 3) != v35 );
    }
    else
    {
      v35 = 0;
    }
    if ( (unsigned int)(v34 - 1) >= 3 )
    {
      v36 = v35 - v34;
      v37 = 4 * v35;
      v38 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 36) + v37 - 4 * v38) = 0;
        *(_DWORD *)(FIELD_U32(a1, 36) + v37 - 4 * v38 + 4) = 0;
        *(_DWORD *)(FIELD_U32(a1, 36) + v37 - 4 * v38 + 8) = 0;
        v39 = FIELD_U32(a1, 36) + v37 - 4 * v38;
        v38 -= 4;
        FIELD_U32(v39, 12) = 0;
      }
      while ( v36 != v38 );
    }
  }
  v40 = 0;
  v41 = a1 + 276;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 272) = 0;
LABEL_68:
  v42 = FIELD_U32(a1, 32) + 5;
  v43 = v41;
LABEL_73:
  sub_6099E84C(v43, v42, a3);
  do
  {
    sub_6099EBC0(v41);
    v41 += 128;
    if ( (unsigned int)++v40 < 3 )
      goto LABEL_68;
    if ( v40 == 3 )
    {
      v42 = FIELD_U32(a1, 32);
      v43 = a1 + 660;
      goto LABEL_73;
    }
  }
  while ( v40 != 4 );
  v47 = &sead__SafeStringBase__vtable;
  v48 = "Icon = DRAW";
  return sub_60969510(a1, &v47);
}
