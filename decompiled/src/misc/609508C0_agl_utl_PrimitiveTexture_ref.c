/* agl_utl_PrimitiveTexture_ref
 * address: 0x609508C0   size: 1928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_utl_PrimitiveTexture_ref(int a1, void *a2)
{
  int v2; // r10
  int v3; // r4
  int v4; // r1
  int v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r4
  int v11; // r7
  _DWORD *v12; // r5
  char *v13; // r5
  int v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r1
  char *v18; // r4
  unsigned int i; // r5
  unsigned int v20; // r7
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r1
  unsigned int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  char *v27; // r0
  unsigned int v28; // r1
  int v29; // r0
  _BYTE *v30; // r0
  int v31; // r1
  int *v32; // r1
  unsigned int *v33; // r0
  unsigned int v34; // r2
  int v35; // r0
  unsigned int *v36; // r0
  unsigned int v37; // r2
  int v38; // r0
  unsigned int *v39; // r0
  unsigned int v40; // r2
  unsigned int *v41; // r4
  unsigned int v42; // r1
  int v45; // [sp+64h] [bp-15Ch]
  int v47; // [sp+6Ch] [bp-154h]
  int (**v48)(); // [sp+74h] [bp-14Ch] BYREF
  char *v49; // [sp+78h] [bp-148h]
  int v50; // [sp+7Ch] [bp-144h]
  int v51[6]; // [sp+80h] [bp-140h] BYREF
  unsigned __int16 v52; // [sp+98h] [bp-128h]
  unsigned __int16 v53; // [sp+9Ah] [bp-126h]
  int v54; // [sp+A4h] [bp-11Ch]
  unsigned int v55; // [sp+A8h] [bp-118h]
  int v56; // [sp+C0h] [bp-100h] BYREF
  int (**v57)(); // [sp+190h] [bp-30h] BYREF
  char *v58; // [sp+194h] [bp-2Ch]
  int v59; // [sp+198h] [bp-28h]

  v51[0] = (int)&sead__SafeStringBase__vtable;
  v51[1] = (int)"agl__utl__PrimitiveTexture";
  nullsub_123();
  agl_TextureData_ref((int)v51);
  v3 = 29;
  v4 = 0;
  while ( 2 )
  {
    v47 = v4;
    v5 = v2;
    v57 = &sead__SafeStringBase__vtable;
    v58 = off_60C5E8BC[v4];
    sub_60920600((int)v51, &v57);
    v6 = 1065353216;
    v7 = 20;
    v2 = 0;
    switch ( v47 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        v6 = off_60C5CB10(255);
        goto LABEL_7;
      case 7:
      case 8:
        v6 = off_60C5CB10(-1);
        goto LABEL_7;
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
        v6 = off_60C5CB10(0);
        goto LABEL_7;
      case 14:
        v9 = off_60C5CB10(-16776961);
        goto LABEL_26;
      case 15:
        v9 = off_60C5CB10(16711935);
        goto LABEL_26;
      case 16:
        v9 = off_60C5CB10(0xFFFF);
        goto LABEL_26;
      case 17:
        v9 = off_60C5CB10(-2139062017);
        goto LABEL_26;
      case 18:
        v9 = off_60C5CB10(-1962934017);
        goto LABEL_26;
      case 19:
        v9 = off_60C5CB10(6553855);
        goto LABEL_26;
      case 20:
        v9 = off_60C5CB10(35839);
LABEL_26:
        v2 = v9;
        v7 = v3;
        goto LABEL_27;
      case 21:
LABEL_27:
        v45 = v7;
        sub_6091FDB0((int)v51, 1, v7, 4, 4, 1, 1, 0, 0, 1);
        goto LABEL_28;
      case 22:
      case 23:
      case 24:
        goto LABEL_8;
      case 25:
LABEL_14:
        sub_6091FDB0((int)v51, 1, 29, 16, 8, 1, 1, 0, 0, 1);
        goto LABEL_18;
      default:
        v6 = 0;
LABEL_7:
        v7 = v3;
LABEL_8:
        v5 = v6;
        v3 = v7;
        v2 = v6;
        switch ( v47 )
        {
          case 0:
          case 10:
            sub_6091FDB0((int)v51, 0, v7, 4, 1, 1, 1, 0, 0, 1);
            goto LABEL_18;
          case 1:
          case 11:
            sub_6091FDB0((int)v51, 3, v7, 4, 1, 1, 1, 0, 0, 1);
            goto LABEL_18;
          case 2:
          case 7:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
            goto LABEL_27;
          case 3:
          case 12:
          case 24:
            v8 = 4;
            break;
          case 4:
          case 13:
            v8 = 2;
            break;
          case 5:
            sub_6091FDB0((int)v51, 8, v7, 4, 4, 6, 1, 0, 0, 1);
            goto LABEL_18;
          case 6:
          case 8:
            sub_60920CE4((int)v51, v7, 4, 4, 1, 1);
            goto LABEL_18;
          case 9:
            v8 = 1;
            break;
          case 25:
            goto LABEL_14;
          default:
            v2 = v6;
            goto LABEL_27;
        }
        sub_6091FDB0((int)v51, v8, v7, 4, 4, 1, 1, 0, 0, 1);
LABEL_18:
        v45 = v3;
        v2 = v5;
LABEL_28:
        v10 = v54;
        v11 = v55;
        v12 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
        sub_60913BB4((int)v12);
        *v12 = off_60BF9C1C;
        sub_60913D88((int)v12, v11, (int)a2, v10, 8);
        sub_60913A6C(&v48, (int)v12, 0);
        v13 = v49;
        if ( v47 == 25 )
        {
          if ( v48 )
            v14 = dword_60CC73E8(v48);
          else
            v14 = 0;
          v16 = sub_609200A0((int)v51);
          v17 = v53;
          if ( v16 > v53 )
            v17 = v16;
          if ( v17 )
          {
            v18 = &v13[v14];
            for ( i = 0; i < v26; ++i )
            {
              v20 = 0;
              do
              {
                v21 = off_60C5CB10(dword_60B467E0[v20]);
                v22 = v52;
                if ( v52 <= 1u )
                  v22 = 1;
                v23 = v20 + i * v22;
                ++v20;
                *(_DWORD *)&v18[4 * v23] = v21;
                v24 = v52;
                if ( v52 <= 1u )
                  v24 = 1;
              }
              while ( v20 < v24 );
              v25 = sub_609200A0((int)v51);
              v26 = v53;
              if ( v25 > v53 )
                v26 = v25;
            }
          }
        }
        else
        {
          if ( v48 )
            v15 = dword_60CC73E8(v48);
          else
            v15 = 0;
          if ( v55 >= 4 )
          {
            v27 = &v13[v15];
            v28 = 0;
            do
              *(_DWORD *)&v27[4 * v28++] = v2;
            while ( v28 < v55 >> 2 );
          }
        }
        v57 = v48;
        v58 = v49;
        v59 = v50;
        sub_609208DC(v51, (int *)&v57, 0);
        sub_60916E94(dword_60CCFC8C, (int)v51);
        v29 = operator_new_8DE25C(0x158u, a2, 4);
        v30 = (_BYTE *)agl_TextureSampler_copy_ref(v29, (int)v51);
        v31 = a1 + 4 * v47;
        FIELD_U32(v31, 20) = v30;
        v32 = (int *)(v31 + 20);
        if ( (unsigned int)(v47 - 23) <= 1 )
        {
          v30[319] = 7;
          v30[320] = 7;
          v30[321] = 7;
          v33 = (unsigned int *)(v30 + 328);
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 | 2, v33) );
          v35 = *v32;
          FIELD_U8(v35, 332) = *(_BYTE *)(*v32 + 332) | 4;
          v36 = (unsigned int *)(v35 + 328);
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 | 0x10, v36) );
          v38 = *v32;
          FIELD_U8(v38, 323) = 8;
          FIELD_U8(v38, 332) |= 4u;
          v39 = (unsigned int *)(v38 + 328);
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 | 0x10, v39) );
          v30 = (_BYTE *)*v32;
        }
        v41 = (unsigned int *)(v30 + 328);
        do
          v42 = __ldrex(v41);
        while ( __strex(0x80000000, v41) );
        if ( v42 )
        {
          if ( v42 == 0x80000000 )
          {
            while ( *v41 == 0x80000000 )
              sub_609085CC();
          }
          else
          {
            sub_609210C4((int)v30, v42);
          }
        }
        *v41 = 0;
        v3 = v45;
        v4 = v47 + 1;
        if ( v47 != 25 )
          continue;
        return sub_609175E4((int)&v56);
    }
  }
}
