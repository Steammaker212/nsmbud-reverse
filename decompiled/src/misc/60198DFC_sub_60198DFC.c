/* sub_60198DFC
 * address: 0x60198DFC   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60198DFC(int a1)
{
  int result; // r0
  int v3; // r5
  float v4; // s0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  _BOOL4 v8; // r6
  bool v9; // zf
  _DWORD *v10; // r9
  char *v11; // r0
  int i; // r1
  char *v13; // r12
  int j; // r2
  int v15; // r0
  int *v16; // r1
  int v17; // r2
  int v18; // s0
  int *v19; // r0
  signed int *v20; // r4
  int speed; // [sp+4h] [bp-3Ch] BYREF
  int target; // [sp+8h] [bp-38h] BYREF
  int v23; // [sp+Ch] [bp-34h]
  float v24; // [sp+10h] [bp-30h]
  int v25; // [sp+14h] [bp-2Ch] BYREF
  int v26; // [sp+18h] [bp-28h]
  int v27; // [sp+1Ch] [bp-24h]

  result = sub_601CF9C0(dword_60C8AEF0);
  v3 = result;
  if ( result )
  {
    v25 = -1;
    v26 = -1;
    v27 = -1;
    sub_6019EC34(&v25, result + 1032);
    result = FIELD_U32(a1, 240);
    if ( v25 == result )
    {
      result = FIELD_U32(a1, 244);
      if ( v26 == result )
      {
        v4 = FIELD_F32(v3, 88);
        v5 = 0;
        v6 = 0;
        if ( v4 > FIELD_F32(a1, 88) )
        {
          target = FIELD_U32(v3, 80);
          v23 = FIELD_U32(v3, 84);
          v24 = v4 + 225.0;
          v5 = sub_608332B0(a1 + 80, &target);
          v6 = 1;
        }
        FIELD_U32(a1, 424) = v5;
        FIELD_U8(a1, 529) = v6;
        if ( v6 != FIELD_U8(a1, 530) )
        {
          FIELD_U32(a1, 432) = 0x200000;
          FIELD_U32(a1, 476) = 15;
        }
        FIELD_U8(a1, 530) = v6;
        v7 = FIELD_U8(v3, 280);
        FIELD_U8(a1, 531) = v7;
        if ( v7 && !FIELD_U8(a1, 532) )
          FIELD_U32(a1, 476) = 15;
        FIELD_U8(a1, 532) = v7;
        v8 = 0;
        target = 0;
        v23 = 0;
        v24 = 0.0;
        sub_6019EC34(&target, v3 + 1056);
        if ( target != -1 )
        {
          v9 = v23 == -1;
          if ( v23 != -1 )
            v9 = LODWORD(v24) == -1;
          if ( !v9 )
          {
            v10 = (_DWORD *)sub_601E0010(&target);
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            v11 = (char *)v10[1];
            if ( v11 == "W8B1" )
              goto LABEL_26;
            for ( i = 0; i < 524289; ++i )
            {
              if ( v11[i] != aW8b1[i] )
                break;
              if ( !v11[i] )
                goto LABEL_26;
            }
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            v13 = (char *)v10[1];
            if ( v13 == "W8B0" )
            {
LABEL_26:
              v8 = FIELD_F32(v3, 88) > FIELD_F32(a1, 88);
            }
            else
            {
              v8 = 0;
              for ( j = 0; j < 524289; ++j )
              {
                if ( v13[j] != aW8b0[j] )
                  break;
                if ( !v13[j] )
                  goto LABEL_26;
              }
            }
          }
        }
        result = FIELD_U32(a1, 476);
        if ( !v8 && result < 1 )
        {
          v16 = (int *)(a1 + 424);
          v15 = FIELD_U32(a1, 424);
          if ( v15 < 2123622718 )
          {
            v17 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
            if ( v15 > v17 )
            {
              *v16 = v17;
LABEL_36:
              target = 0x100000;
              v19 = (int *)(a1 + 180);
              v20 = (signed int *)(a1 + 432);
              sub_608322C0(v19, v16, v20, &target);
              target = 0x4000000;
              speed = 0x200000;
              return moveValueTo(v20, &target, &speed);
            }
            if ( v15 < -2123622717 )
              goto LABEL_36;
          }
          v18 = (int)(float)((float)(2147500000.0 * -30.0) / 180.0);
          if ( v15 < v18 )
            *v16 = v18;
          goto LABEL_36;
        }
        if ( result )
          FIELD_U32(a1, 476) = --result;
      }
    }
  }
  return result;
}
