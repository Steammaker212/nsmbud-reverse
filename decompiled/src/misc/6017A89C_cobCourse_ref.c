/* cobCourse_ref
 * address: 0x6017A89C   size: 1832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall cobCourse_ref(_DWORD *a1)
{
  int v2; // r9
  int v3; // r7
  int v4; // r4
  int v5; // r10
  int v6; // r6
  int v7; // r5
  char *v8; // r0
  int v9; // r2
  float v10; // r0
  int v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r0
  char *v15; // r1
  int v16; // r4
  int v17; // r5
  int v18; // r0
  int v19; // r0
  float v20; // r0
  int v21; // r4
  int v22; // r7
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r0
  char *v29; // r0
  char *v30; // r0
  int v31; // r0
  int v32; // r1
  Vec3 v34; // [sp+4h] [bp-44h] BYREF
  Vec3 v35; // [sp+10h] [bp-38h] BYREF
  int (**v36)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v37; // [sp+20h] [bp-28h]

  v2 = a1[60];
  v3 = a1[61];
  v4 = a1[62];
  v5 = a1[63];
  v6 = sub_601918EC(dword_60C8996C);
  v7 = 1;
  if ( a1[82] == 1 )
  {
    v7 = 0;
    switch ( a1[79] )
    {
      case 0:
        v7 = 1;
        if ( sub_6018EBB0(v6, a1 + 83) != 1 )
          return v7;
        (*(void (__fastcall **)(_DWORD *))(a1[83] + 12))(a1 + 83);
        (*(void (__fastcall **)(_DWORD *))(a1[83] + 12))(a1 + 83);
        v8 = (char *)a1[84];
        if ( v8 == "W804" )
          goto LABEL_30;
        v9 = 0;
        break;
      case 1:
        v10 = *((float *)a1 + 21);
        v35.z = (float)a1[22];
        v35.y = v10;
        v35.x = (float)a1[20];
        v34.x = 1.0;
        v34.y = 1.0;
        v34.z = 1.0;
        EffectData_create(895, &v35, 0, (int)&v34);
        v11 = a1[80];
        a1[77] = 2;
        a1[78] = v11;
        v12 = **(_DWORD **)(a1[67] + 28);
        v36 = &sead__SafeStringBase__vtable;
        v37 = "cobCourse";
        v13 = LoadResource(ResourceMgrRelated_instance, &v36);
        ShuAnim_play((_DWORD *)v12, v13, (int)&dword_60C88E90[2 * a1[77] + 3]);
        AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), dword_60AF7A3C[a1[77]]);
        FIELD_U32(v12, 24) = v11;
        a1[73] = v12;
        sub_6017A3E0((int)a1);
        sub_601E4C88(dword_60C8B13C, 32, a1 + 20, 1);
        v14 = a1[85];
        if ( v14 < 1 )
          v15 = &byte_60B3BA34;
        else
          v15 = (char *)a1[84];
        if ( *v15 == 87 )
        {
          v29 = v14 < 3 ? &byte_60B3BA34 : (char *)(a1[84] + 2);
          if ( *v29 == 65 )
            *((_BYTE *)a1 + 418) = 1;
        }
        v24 = 3;
        goto LABEL_42;
      case 2:
        return v7;
      case 3:
        if ( *(float *)(**(_DWORD **)(a1[67] + 28) + 20) != *((float *)a1 + 81) )
          return 0;
        goto LABEL_19;
      case 4:
        LODWORD(v34.x) = &sead__SafeStringBase__vtable;
        v34.y = *(float *)(sub_6019A5F8(v2, v5, v4, v3) + 4);
        v7 = 1;
        if ( sub_6018EBB0(v6, &v34) != 1 )
          return v7;
        v16 = a1[80];
        a1[77] = 3;
        a1[78] = v16;
        v17 = **(_DWORD **)(a1[67] + 28);
        LODWORD(v35.x) = &sead__SafeStringBase__vtable;
        LODWORD(v35.y) = "cobCourse";
        v18 = LoadResource(ResourceMgrRelated_instance, &v35);
        ShuAnim_play((_DWORD *)v17, v18, (int)&dword_60C88E90[2 * a1[77] + 3]);
        v19 = a1[77];
        goto LABEL_22;
      case 5:
        v7 = 0;
        if ( *(float *)(**(_DWORD **)(a1[67] + 28) + 20) == *((float *)a1 + 81) )
        {
          v20 = *((float *)a1 + 21);
          v7 = 0;
          v35.z = (float)a1[22];
          v35.y = v20;
          v35.x = (float)a1[20];
          v34.x = 1.0;
          v34.y = 1.0;
          v34.z = 1.0;
          sub_602375C4((EffectData *)(a1 + 88), 895, &v35, 0, &v34);
          v21 = a1[80];
          a1[77] = 2;
          a1[78] = v21;
          v22 = **(_DWORD **)(a1[67] + 28);
          v36 = &sead__SafeStringBase__vtable;
          v37 = "cobCourse";
          v23 = LoadResource(ResourceMgrRelated_instance, &v36);
          ShuAnim_play((_DWORD *)v22, v23, (int)&dword_60C88E90[2 * a1[77] + 3]);
          AnimationCtrl_setRepeat((ModelAnimation *)(v22 + 4), dword_60AF7A3C[a1[77]]);
          FIELD_U32(v22, 24) = v21;
          a1[73] = v22;
          sub_6017A3E0((int)a1);
          sub_601E4C88(dword_60C8B13C, 32, a1 + 20, 1);
          a1[79] = 6;
        }
        return v7;
      case 6:
        if ( !sub_60235E50((int)(a1 + 88)) )
        {
LABEL_19:
          v24 = 9;
LABEL_42:
          a1[79] = v24;
        }
        return 0;
      case 7:
        LODWORD(v34.x) = &sead__SafeStringBase__vtable;
        v34.y = *(float *)(sub_6019A5F8(v2, v5, v4, v3) + 4);
        v7 = 1;
        if ( sub_6018EBB0(v6, &v34) != 1 )
          return v7;
        v16 = a1[80];
        a1[77] = 4;
        a1[78] = v16;
        v17 = **(_DWORD **)(a1[67] + 28);
        LODWORD(v35.x) = &sead__SafeStringBase__vtable;
        LODWORD(v35.y) = "cobCourse";
        v25 = LoadResource(ResourceMgrRelated_instance, &v35);
        ShuAnim_play((_DWORD *)v17, v25, (int)&dword_60C88E90[2 * a1[77] + 3]);
        v19 = a1[77];
LABEL_22:
        AnimationCtrl_setRepeat((ModelAnimation *)(v17 + 4), dword_60AF7A3C[v19]);
        FIELD_U32(v17, 24) = v16;
        a1[73] = v17;
        sub_6017A3E0((int)a1);
        v7 = 0;
        a1[81] = *(_DWORD *)(**(_DWORD **)(a1[67] + 28) + 8);
        a1[79] = 5;
        *((_BYTE *)a1 + 416) = 1;
        return v7;
      case 8:
        v26 = a1[67];
        v7 = 0;
        if ( *(float *)(**(_DWORD **)(v26 + 28) + 20) == *((float *)a1 + 81) )
        {
          v7 = 0;
          a1[77] = 0;
          a1[78] = 0;
          v27 = **(_DWORD **)(v26 + 28);
          LODWORD(v35.x) = &sead__SafeStringBase__vtable;
          LODWORD(v35.y) = "cobCourse";
          v28 = LoadResource(ResourceMgrRelated_instance, &v35);
          ShuAnim_play((_DWORD *)v27, v28, (int)&dword_60C88E90[2 * a1[77] + 3]);
          AnimationCtrl_setRepeat((ModelAnimation *)(v27 + 4), dword_60AF7A3C[a1[77]]);
          FIELD_U32(v27, 24) = 0;
          FIELD_U32(v27, 20) = 0;
          FIELD_U32(v27, 28) |= 2u;
          a1[73] = v27;
          sub_6017A3E0((int)a1);
          a1[79] = 9;
          *((_BYTE *)a1 + 416) = 0;
        }
        return v7;
      case 9:
        return 1;
      default:
        return 0;
    }
    while ( v8[v9] == aW804[v9] )
    {
      if ( !v8[v9] )
      {
LABEL_30:
        *((float *)a1 + 21) = *((float *)a1 + 21) + 500.0;
        break;
      }
      if ( ++v9 > 0x80000 )
        break;
    }
    (*(void (__fastcall **)(_DWORD *))(a1[83] + 12))(a1 + 83);
    (*(void (__fastcall **)(_DWORD *))(a1[83] + 12))(a1 + 83);
    v30 = (char *)a1[84];
    if ( v30 != "W6C" && (*v30 != 87 || v30[1] != 54 || v30[2] != 67) )
    {
      v24 = 1;
      goto LABEL_42;
    }
    v31 = sub_6019A628(v2, v5);
    v32 = 9;
    v7 = 0;
    if ( !v31 )
      v32 = 1;
    a1[79] = v32;
  }
  return v7;
}
