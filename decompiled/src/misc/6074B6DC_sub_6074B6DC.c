/* sub_6074B6DC
 * address: 0x6074B6DC   size: 1428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074B6DC(int a1, int a2, float *a3)
{
  int v4; // r10
  int v5; // r3
  Actor **v6; // r5
  Actor **v7; // r9
  int ProfileId; // r7
  bool v9; // zf
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int vtable; // r6
  void *v14; // r7
  signed int v15; // r8
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // kr08_8
  int v18; // r11
  Actor *v20; // r6
  float *v21; // r0
  __int16 v22; // r1
  bool v23; // zf
  float v24; // s0
  bool v25; // zf
  float v26; // s0
  bool v27; // zf
  float v28; // s0
  bool v29; // zf
  float v30; // s0
  int v31; // r6
  int result; // r0
  int v33; // r8
  int v34; // r9
  Actor *v35; // r4
  bool v36; // zf
  char v37; // r0
  int v38; // r10
  int v39; // r7
  int v40; // r5
  bool v41; // zf
  bool v42; // zf
  int v43; // [sp+18h] [bp-50h]
  float v44[2]; // [sp+1Ch] [bp-4Ch] BYREF
  float v45[2]; // [sp+24h] [bp-44h] BYREF
  float v46[2]; // [sp+2Ch] [bp-3Ch] BYREF
  float v47[2]; // [sp+34h] [bp-34h] BYREF
  float v48[11]; // [sp+3Ch] [bp-2Ch] BYREF

  v4 = 0;
  v5 = 0;
  if ( (FIELD_U8(dword_60C9CF0C, 1364) & 1) != 0 )
  {
    sub_603F4BF4(AreaTask_intance, v48, (int *)(dword_60C9CF0C + 1368));
    sub_6015AD30(v48);
    sub_6015ADA4();
    v5 = 1;
    v6 = *(Actor ***)(ActorMgr__instance + 27172);
    v7 = *(Actor ***)(ActorMgr__instance + 27180);
    if ( v6 != v7 )
    {
      do
      {
        v20 = *v6;
        if ( *v6 && !FIELD_U8(v20, 0x13) )
        {
          ProfileId = Actor__getProfileId(*v6);
          v9 = ProfileId == 841;
          if ( ProfileId != 841 )
            v9 = ProfileId == 844;
          if ( v9 )
            goto LABEL_13;
          v10 = ProfileId == 845;
          if ( ProfileId != 845 )
            v10 = ProfileId == 842;
          if ( v10 || ProfileId == 843 )
          {
LABEL_13:
            v11 = (*(int (__fastcall **)(Actor *, float *))(FIELD_U32(v20, 0x0) + 132))(v20, v48);
            v12 = v11 == 1;
            if ( v11 == 1 )
              v12 = ProfileId == 841;
            if ( v12 )
            {
              vtable = FIELD_U32(v20 + (1) * 80, 0x0);
              v14 = (void *)(dword_60C9CF0C + 1340);
              v15 = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 2;
              v16 = (unsigned int)v15 * (unsigned __int64)sead__Random__getU32(v14);
              v17 = (unsigned int)(3 * v15) * (unsigned __int64)sead__Random__getU32(v14);
              v18 = 0;
              do
                ((void (__fastcall *)(int, bool, int, bool))loc_6074C1C8)(
                  a1,
                  HIDWORD(v16) == v18 || HIDWORD(v17) == v18,
                  vtable,
                  v18 == 0);
              while ( v18++ < v15 );
            }
          }
          else if ( ProfileId == 848 )
          {
            sub_6074DF4C(v20, v48);
          }
        }
        ++v6;
      }
      while ( v6 != v7 );
      v4 = 0;
      v5 = 1;
    }
  }
  v21 = (float *)PlayerMgr_instance;
  v22 = FIELD_U16(PlayerMgr_instance, 66);
  v23 = (v22 & 1) == 0;
  if ( (v22 & 1) != 0 )
  {
    a3 = *(float **)(PlayerMgr_instance + 48);
    v23 = a3 == 0;
  }
  if ( !v23 )
  {
    v4 = 1;
    v24 = a3[28] + a3[144];
    v44[0] = a3[27] + a3[143];
    v44[1] = v24;
  }
  v25 = (v22 & 2) == 0;
  if ( (v22 & 2) != 0 )
  {
    a3 = *(float **)(PlayerMgr_instance + 52);
    v25 = a3 == 0;
  }
  if ( !v25 )
  {
    v4 |= 2u;
    v26 = a3[28] + a3[144];
    v45[0] = a3[27] + a3[143];
    v45[1] = v26;
  }
  v27 = (v22 & 4) == 0;
  if ( (v22 & 4) != 0 )
  {
    a3 = *(float **)(PlayerMgr_instance + 56);
    v27 = a3 == 0;
  }
  if ( !v27 )
  {
    v4 |= 4u;
    v28 = a3[28] + a3[144];
    v46[0] = a3[27] + a3[143];
    v46[1] = v28;
  }
  v29 = (v22 & 8) == 0;
  if ( (v22 & 8) != 0 )
  {
    v21 = *(float **)(PlayerMgr_instance + 60);
    v29 = v21 == 0;
  }
  if ( !v29 )
  {
    v4 |= 8u;
    v30 = v21[28] + v21[144];
    v47[0] = v21[27] + v21[143];
    v47[1] = v30;
  }
  v31 = FIELD_U32(a1, 36);
  result = a1 + 32;
  if ( v31 != a1 + 32 )
  {
    v33 = FIELD_U32(a1, 44);
    v34 = result - v33;
    v35 = (Actor *)(v31 - v33);
    if ( v5 == 1 )
    {
      do
      {
        result = Actor__getProfileId(v35);
        v36 = result == 846;
        if ( result == 846 )
        {
          result = (unsigned __int8)FIELD_U8(v35, 0x13);
          v36 = result == 0;
        }
        if ( v36 )
        {
          result = sub_60747124((int)v35);
          if ( result == 1 )
          {
            result = sub_60747148((int)v35, v48, 11);
            if ( v4 )
            {
              if ( !result
                && ((v4 & 1) == 0 || (result = sub_60747148((int)v35, v44, 0)) == 0)
                && ((v4 & 2) == 0 || (result = sub_60747148((int)v35, v45, 0)) == 0)
                && ((v4 & 4) == 0 || (result = sub_60747148((int)v35, v46, 0)) == 0) )
              {
                result = v4 & 8;
                if ( (v4 & 8) != 0 )
                  result = sub_60747148((int)v35, v47, 0);
              }
            }
          }
        }
        v31 = FIELD_U32(v31, 4);
        v35 = (Actor *)(v31 - v33);
      }
      while ( v31 - v33 != v34 );
    }
    else
    {
      v37 = v4;
      if ( v4 )
      {
        v38 = v4 & 4;
        v39 = v37 & 2;
        v40 = v37 & 1;
        v43 = v37 & 8;
        do
        {
          result = Actor__getProfileId(v35);
          v42 = result == 846;
          if ( result == 846 )
          {
            result = (unsigned __int8)FIELD_U8(v35, 0x13);
            v42 = result == 0;
          }
          if ( v42 )
          {
            result = sub_60747124((int)v35);
            if ( result == 1
              && (!v40 || (result = sub_60747148((int)v35, v44, 0)) == 0)
              && (!v39 || (result = sub_60747148((int)v35, v45, 0)) == 0)
              && (!v38 || (result = sub_60747148((int)v35, v46, 0)) == 0) )
            {
              result = v43;
              if ( v43 )
                result = sub_60747148((int)v35, v47, 0);
            }
          }
          v31 = FIELD_U32(v31, 4);
          v35 = (Actor *)(v31 - v33);
        }
        while ( v31 - v33 != v34 );
      }
      else
      {
        do
        {
          result = Actor__getProfileId(v35);
          v41 = result == 846;
          if ( result == 846 )
          {
            result = (unsigned __int8)FIELD_U8(v35, 0x13);
            v41 = result == 0;
          }
          if ( v41 )
            result = sub_60747124((int)v35);
          v31 = FIELD_U32(v31, 4);
          v35 = (Actor *)(v31 - v33);
        }
        while ( v31 - v33 != v34 );
      }
    }
  }
  return result;
}
