/* sub_605E82DC
 * address: 0x605E82DC   size: 1564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E82DC(int a1, unsigned int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r4
  int Area; // r6
  int v10; // r9
  int v11; // r6
  unsigned int v12; // r10
  __int16 v13; // r5
  bool v14; // zf
  int v15; // r11
  int v16; // r8
  int v17; // r6
  int v18; // r9
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r4
  int v23; // r5
  int i; // r0
  int v25; // r4
  int v26; // r5
  int v27; // r3
  int *v28; // r5
  int v29; // r7
  int v30; // t1
  int *v31; // r5
  int v32; // r4
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r1
  bool v37; // vf
  int v38; // r0
  int *v39; // r7
  int v40; // r5
  int v41; // t1
  int *v42; // r7
  int v43; // r5
  int v44; // t1
  int *v45; // r0
  unsigned int v46; // [sp+Ch] [bp-10Ch]
  int v48; // [sp+14h] [bp-104h]
  float v49[3]; // [sp+18h] [bp-100h] BYREF
  int v50; // [sp+24h] [bp-F4h] BYREF
  int v51; // [sp+28h] [bp-F0h]
  int *v52; // [sp+2Ch] [bp-ECh]
  int v53; // [sp+30h] [bp-E8h] BYREF
  int v54; // [sp+60h] [bp-B8h] BYREF
  int v55; // [sp+64h] [bp-B4h]
  int *v56; // [sp+68h] [bp-B0h]
  int v57; // [sp+6Ch] [bp-ACh] BYREF
  int v58; // [sp+9Ch] [bp-7Ch] BYREF
  int v59; // [sp+A0h] [bp-78h]
  int *v60; // [sp+A4h] [bp-74h]
  int v61; // [sp+A8h] [bp-70h] BYREF
  float v62[16]; // [sp+D8h] [bp-40h] BYREF

  result = FIELD_U32(a1, 36);
  if ( result >= 1 )
  {
    v8 = 0;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 96) = 0;
    FIELD_U32(a1, 228) = 0;
    FIELD_U32(a1, 224) = 0;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 280) = 0;
    FIELD_U32(a1, 284) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1BE8);
    Area = Level_getArea(Level_instance, a2);
    v10 = sub_60727D48(Area, a3);
    if ( FIELD_U8(v10, 18) )
      v8 = sub_60727D48(Area, FIELD_U8(v10, 18));
    v11 = v8;
    if ( !v8 )
      v11 = v10;
    v12 = FIELD_U8(v11, 11);
    FIELD_U8(a1, 296) = v12;
    if ( sub_6040E4C8(LevelInfo_instance) )
      JUMPOUT(0x605E8914);
    v46 = a2;
    v13 = FIELD_U16(v11, 16);
    sub_60788898(v62, v11);
    v14 = v8 == 0;
    v15 = v13 & 1;
    if ( !v8 )
      v14 = a4 == 1;
    if ( v14 && (v12 > 0xE || ((1 << v12) & 0x407C) == 0) )
    {
      v45 = dword_605E8904;
      if ( (v13 & 1) == 0 )
        v45 = &dword_605E8904[1];
      v62[0] = *(float *)v45 + v62[0];
    }
    v16 = FIELD_U8(v10, 11);
    v48 = FIELD_U8(LevelInfo_instance, 20);
    v58 = 0;
    v59 = 0;
    v60 = 0;
    sub_608DEB0C(&v58, 12, (int)&v61);
    v54 = 0;
    v55 = 0;
    v56 = 0;
    sub_608DEB0C(&v54, 12, (int)&v57);
    v50 = 0;
    v51 = 0;
    v52 = 0;
    sub_608DEB0C(&v50, 12, (int)&v53);
    v17 = FIELD_U32(a1, 36);
    if ( v17 )
    {
      if ( v16 != 21 && !a4 )
      {
        v18 = 0;
        while ( 1 )
        {
          v20 = FIELD_U32(a1, 28);
          v21 = FIELD_U32(a1, 32);
          if ( v18 + v21 >= v20 )
            v21 -= v20;
          v19 = FIELD_U32(a1, 24);
          v22 = *(_DWORD *)(v19 + 4 * (v18 + v21));
          v23 = FIELD_U32(v22, 6792);
          if ( v23 == 3 )
          {
            if ( v48 == FIELD_U8(v22, 532) && FIELD_U8(v22, 6796) == v46 && v50 < v51 )
              v52[v50++] = v22;
          }
          else
          {
            if ( sub_605E0B38(*(_DWORD *)(v19 + 4 * (v18 + v21))) )
              goto LABEL_29;
            if ( v23 == 1 )
            {
              if ( v54 < v55 )
                v56[v54++] = v22;
              goto LABEL_31;
            }
            if ( v23 == 2 )
            {
LABEL_29:
              if ( v58 < v59 )
                v60[v58++] = v22;
            }
          }
LABEL_31:
          if ( v17 == ++v18 )
            goto LABEL_44;
        }
      }
      for ( i = 0; i != v17; ++i )
      {
        v25 = FIELD_U32(a1, 32);
        v26 = FIELD_U32(a1, 28);
        if ( i + v25 >= v26 )
          v25 -= v26;
        v27 = *(_DWORD *)(FIELD_U32(a1, 24) + 4 * (i + v25));
        if ( FIELD_U32(v27, 6792) == 3 )
        {
          if ( v48 == FIELD_U8(v27, 532) && FIELD_U8(v27, 6796) == v46 && v50 < v51 )
            v52[v50++] = v27;
        }
        else if ( v58 < v59 )
        {
          v60[v58++] = v27;
        }
      }
    }
LABEL_44:
    if ( v58 )
    {
      switch ( v12 )
      {
        case 0u:
        case 1u:
        case 7u:
        case 0x19u:
        case 0x22u:
          sub_608DEBEC(&v58, dword_60C9CF0C + 1340);
          v49[1] = v62[1];
          v49[2] = v62[2];
          v49[0] = (float)(v62[0] - (float)((float)(v58 - 1) * 12.0)) + 12.0;
          if ( v58 )
          {
            v28 = v60;
            v29 = 4 * v58;
            do
            {
              v30 = *v28++;
              (*(void (__fastcall **)(int, float *, unsigned int, int, int, bool))(*(_DWORD *)v30 + 460))(
                v30,
                v49,
                v12,
                v15,
                a4,
                v16 == 21);
              v29 -= 4;
              v49[0] = v49[0] + 24.0;
            }
            while ( v29 );
          }
          break;
        default:
          v31 = v60;
          v32 = 4 * v58;
          do
          {
            (*(void (__fastcall **)(int, float *, unsigned int, int, int, bool))(*(_DWORD *)*v31 + 460))(
              *v31,
              v62,
              v12,
              v15,
              a4,
              v16 == 21);
            v33 = FIELD_U32(a1, 220);
            v34 = FIELD_U32(a1, 228);
            if ( v34 < v33 )
            {
              v35 = *v31;
              FIELD_U32(a1, 228) = v34 + 1;
              v36 = FIELD_U32(a1, 224) + v34;
              v37 = __OFSUB__(v36, v33);
              v38 = v36 - v33;
              if ( v38 < 0 != v37 )
                v38 = v36;
              *(_DWORD *)(FIELD_U32(a1, 216) + 4 * v38) = v35;
            }
            v32 -= 4;
            ++v31;
          }
          while ( v32 );
          break;
      }
    }
    if ( v54 )
    {
      v39 = v56;
      v40 = 4 * v54;
      do
      {
        v41 = *v39++;
        (*(void (__fastcall **)(int, float *, unsigned int, int, int, bool))(*(_DWORD *)v41 + 460))(
          v41,
          v62,
          v12,
          v15,
          a4,
          v16 == 21);
        v40 -= 4;
      }
      while ( v40 );
    }
    result = v50;
    if ( v50 )
    {
      v42 = v52;
      v43 = 4 * v50;
      do
      {
        v44 = *v42++;
        result = (*(int (__fastcall **)(int, float *, unsigned int, int, int, bool))(*(_DWORD *)v44 + 460))(
                   v44,
                   v62,
                   v12,
                   v15,
                   a4,
                   v16 == 21);
        v43 -= 4;
      }
      while ( v43 );
    }
  }
  return result;
}
